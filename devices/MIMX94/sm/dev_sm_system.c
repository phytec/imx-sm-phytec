/*
** ###################################################################
**
**     Copyright 2025 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/* File containing the implementation of the device system.                 */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "dev_sm.h"
#include "lmm.h"
#include "fsl_ddr.h"
#include "fsl_fract_pll.h"
#include "fsl_power.h"
#include "fsl_reset.h"
#include "fsl_sysctr.h"

/* Local defines */

#define DEV_SM_NUM_SLEEP_ROOTS  2U

/* Local types */

#ifdef DEV_SM_MSG_PROF_CNT
/*!
 * Message profile current buffer
 */
typedef struct
{
    uint64_t msgStartUsec;          /*!< Current message start timestamp */
    uint64_t msgEndUsec;            /*!< Current message end timestamp */
    dev_sm_sys_msg_prof_t msgProf;  /*!< Current message log entry */
} dev_sm_sys_msg_cur_t;
#endif

/* Local variables */

static uint32_t s_sysSleepMode = 0U;
static uint32_t s_sysSleepFlags = 0U;
static dev_sm_rst_rec_t s_shutdownRecord = { 0 };
static BLK_CTRL_DDRMIX_Type ddr_blk_ctrl;

#ifdef DEV_SM_MSG_PROF_CNT
static dev_sm_sys_msg_cur_t curMsgRecord = { 0 };
#endif

/* Local functions */

static void CLOCK_SourceBypass(bool bypass, bool preserve);

/*--------------------------------------------------------------------------*/
/* Initialize system functions                                              */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemInit(void)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t srcResetReason = 0U;
    uint32_t pmicAckCtrl;

    /* Get reset reason from SRC */
    srcResetReason = RST_SystemGetResetReason();
    RST_SystemClearResetReason(srcResetReason);

    /* Load fault record from previous boot */
    BRD_SM_ShutdownRecordLoad(&s_shutdownRecord);

    /* Update if reason available from SRC */
    if ((srcResetReason != RST_REASON_POR) && !s_shutdownRecord.valid)
    {
        s_shutdownRecord.reason = srcResetReason;
        s_shutdownRecord.valid = true;
    }

#ifdef DEVICE_HAS_ELE
    /* Enable GPC-to-ELE handshake */
    GPC_GLOBAL->GPC_ELE_HDSK_CTRL = 1U;
 #endif

    /* Default to keep M7 clocks running during sleep modes */
    BLK_CTRL_S_AONMIX->M7_CFG |=
        (BLK_CTRL_S_AONMIX_M7_CFG_CORECLK_FORCE_ON_MASK |
            BLK_CTRL_S_AONMIX_M7_CFG_HCLK_FORCE_ON_MASK);

    /* Default to keep M71 clocks running during sleep modes */
    BLK_CTRL_S_AONMIX->M7_1_CFG |=
        (BLK_CTRL_S_AONMIX_M7_1_CFG_CORECLK_FORCE_ON_MASK |
        BLK_CTRL_S_AONMIX_M7_1_CFG_HCLK_FORCE_ON_MASK);

    /* Configure PMIC standby timings */
    pmicAckCtrl = GPC_GLOBAL->GPC_PMIC_STBY_ACK_CTRL;
    pmicAckCtrl &= ~GPC_GLOBAL_GPC_PMIC_STBY_ACK_CTRL_STBY_OFF_CNT_CFG_MASK;
    pmicAckCtrl |= GPC_GLOBAL_GPC_PMIC_STBY_ACK_CTRL_STBY_OFF_CNT_CFG(
        BOARD_PMIC_RESUME_TICKS);
    GPC_GLOBAL->GPC_PMIC_STBY_ACK_CTRL = pmicAckCtrl;

    /* Enable bypass for clock sources */
    CLOCK_SourceBypass(true, false);

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Save sleep mode                                                          */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemSleepModeSet(uint32_t sleepMode, uint32_t sleepFlags)
{
    /* Record system sleep mode and flags */
    s_sysSleepMode = sleepMode;
    s_sysSleepFlags = sleepFlags;
}

/*--------------------------------------------------------------------------*/
/* Reset device                                                             */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemReset(void)
{
    int32_t status = SM_ERR_SUCCESS;

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    // coverity[misra_c_2012_rule_14_3_violation:FALSE]
    if (status == SM_ERR_SUCCESS)
    {
        /* Request warm reset */
        RST_SystemRequestReset();
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Reset device to a specific stage and container                           */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemStageReset(uint32_t stage, uint32_t container)
{
    int32_t status;

    /* Configure stage */
    status = DEV_SM_RomStageSet(stage);

    if (status == SM_ERR_SUCCESS)
    {
        /* Configure container */
        status = DEV_SM_RomContainerSet(container);
    }

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    if (status == SM_ERR_SUCCESS)
    {
        /* Request warm reset */
        RST_SystemRequestReset();
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Shutdown device                                                          */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemShutdown(void)
{
    int32_t status = SM_ERR_SUCCESS;

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    // coverity[misra_c_2012_rule_14_3_violation:FALSE]
    if (status == SM_ERR_SUCCESS)
    {
        /* Request shutdown */
        PWR_SystemPowerDown();
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Save shutdown reason                                                     */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemShutdownRecSet(dev_sm_rst_rec_t shutdownRec)
{
    int32_t status = SM_ERR_SUCCESS;

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    // coverity[misra_c_2012_rule_14_3_violation:FALSE]
    if (status == SM_ERR_SUCCESS)
    {
        /* Store shutdown record */
        BRD_SM_ShutdownRecordSave(shutdownRec);
    }
}

/*--------------------------------------------------------------------------*/
/* Return shutdown reason                                                   */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemShutdownRecGet(dev_sm_rst_rec_t *shutdownRec)
{
    /* Copy out shutdown record */
    *shutdownRec = s_shutdownRecord;
}

/*--------------------------------------------------------------------------*/
/* Return reset reason name                                                 */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemReasonNameGet(uint32_t resetReason,
    string *reasonNameAddr, int32_t *len)
{
    int32_t status = SM_ERR_SUCCESS;
    static int32_t s_maxLen = 0;

    static string const s_name[DEV_SM_NUM_REASON] =
    {
        [DEV_SM_REASON_CM33_LOCKUP] = "cm33_lockup",
        [DEV_SM_REASON_CM33_SWREQ] =  "cm33_swreq",
        [DEV_SM_REASON_CM70_LOCKUP] = "cm70_lockup",
        [DEV_SM_REASON_CM70_SWREQ] =  "cm70_swreq",
        [DEV_SM_REASON_FCCU] =        "fccu",
        [DEV_SM_REASON_JTAG_SW] =     "jtag_sw",
        [DEV_SM_REASON_ELE] =         "ele",
        [DEV_SM_REASON_TEMPSENSE] =   "tempsense",
        [DEV_SM_REASON_WDOG1] =       "wdog1",
        [DEV_SM_REASON_WDOG2] =       "wdog2",
        [DEV_SM_REASON_WDOG3] =       "wdog3",
        [DEV_SM_REASON_WDOG4] =       "wdog4",
        [DEV_SM_REASON_WDOG5] =       "wdog5",
        [DEV_SM_REASON_JTAG] =        "jtag",
        [DEV_SM_REASON_WDOG6] =       "wdog6",
        [DEV_SM_REASON_WDOG7] =       "wdog7",
        [DEV_SM_REASON_WDOG8] =       "wdog8",
        [DEV_SM_REASON_WO_NETC] =     "wo_netc",
        [DEV_SM_REASON_CM33S_LOCKUP] ="cm33s_lockup",
        [DEV_SM_REASON_CM33S_SWREQ] = "cm33s_swreq",
        [DEV_SM_REASON_CM71_LOCKUP] = "cm71_lockup",
        [DEV_SM_REASON_CM71_SWREQ] = "cm71_swreq",
        [DEV_SM_REASON_CM33_EXC] =    "cm33_exc",
        [DEV_SM_REASON_BBM] =         "bbm",
        [DEV_SM_REASON_SW] =          "sw",
        [DEV_SM_REASON_SM_ERR] =      "sm_err",
        [DEV_SM_REASON_FUSA_SRECO] =  "fusa_sreco",
        [DEV_SM_REASON_PMIC] =        "pmic",
        [DEV_SM_REASON_UNUSED5] =     "unused5",
        [DEV_SM_REASON_UNUSED6] =     "unused6",
        [DEV_SM_REASON_UNUSED7] =     "unused7",
        [DEV_SM_REASON_POR] =         "por"
    };

    /* Get max string width */
    DEV_SM_MaxStringGet(len, &s_maxLen, s_name, DEV_SM_NUM_REASON);

    /* Check reason */
    if (resetReason >= DEV_SM_NUM_REASON)
    {
        status = SM_ERR_NOT_FOUND;
    }
    else
    {
        /* Return pointer to name */
        *reasonNameAddr = s_name[resetReason];
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Post-boot clean-up                                                       */
/*                                                                          */
/* Run any clean-up required after starting all LM                          */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemPostBoot(uint32_t mSel, uint32_t initFlags)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t priMask;

    /* Clear BBM */
    status = DEV_SM_BbmClear();

    /* Disable interrupts */
    priMask = DisableGlobalIRQ();

    /* Restore interrupts */
    EnableGlobalIRQ(priMask);

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Complete system reset processing                                         */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemRstComp(const dev_sm_rst_rec_t *resetRec)
{
    int32_t status = SM_ERR_SUCCESS;

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    // coverity[misra_c_2012_rule_14_3_violation:FALSE]
    if (status == SM_ERR_SUCCESS)
    {
        /* Request shutdown */
        status = SM_SYSTEMRSTCOMP(resetRec);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Report SM error to log and reset                                         */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemError(int32_t errStatus, uint32_t pc)
{
    dev_sm_rst_rec_t resetRec =
    {
        .reason = DEV_SM_REASON_SM_ERR,
        .errId = (uint32_t) errStatus,
        .validErr = true,
        .valid = true
    };

    /* Record PC */
    if (pc != 0U)
    {
        resetRec.extInfo[0] = pc;
        resetRec.extLen = 1U;
    }

    /* Finalize system reset flow */
    (void) DEV_SM_SystemRstComp(&resetRec);
}

/*--------------------------------------------------------------------------*/
/* Sleep the system                                                         */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemSleep(uint32_t sleepMode)
{
    static const uint32_t s_clkRootSleepList[DEV_SM_NUM_SLEEP_ROOTS] =
    {
        [0] = CLOCK_ROOT_BUSAON,
        [1] = CLOCK_ROOT_M33,
    };
    static const uint32_t s_pllVcoList[CLOCK_NUM_PLL] =
    {
        [CLOCK_PLL_SYS1] = CLOCK_SRC_SYSPLL1_VCO,
        [CLOCK_PLL_AUDIO1] = CLOCK_SRC_AUDIOPLL1_VCO,
        [CLOCK_PLL_AUDIO2] = CLOCK_SRC_AUDIOPLL2_VCO,
        [CLOCK_PLL_ENCODER] = CLOCK_SRC_ENCPLL_VCO,
        [CLOCK_PLL_ARM] = CLOCK_SRC_ARMPLL_VCO,
        [CLOCK_PLL_DRAM] = CLOCK_SRC_DRAMPLL_VCO,
        [CLOCK_PLL_HSIO] = CLOCK_SRC_HSIOPLL_VCO,
        [CLOCK_PLL_LDB] = CLOCK_SRC_LDBPLL_VCO
    };
    static src_mem_slice_t const *const s_srcMemPtrs[] = SRC_MEM_BASE_PTRS;

    int32_t status = SM_ERR_SUCCESS;
    uint32_t s_clkRootCtrl[DEV_SM_NUM_SLEEP_ROOTS];
    uint32_t cpuWakeMask[CPU_NUM_IDX][GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT];
    uint32_t sysWakeMask[GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT];
    uint32_t nvicISER[GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT];

    /* Capture start of sleep entry */
    uint64_t sleepEntryStart = DEV_SM_Usec64Get();
    uint64_t sleepExitStart = sleepEntryStart;

    /* Reset wake source of sleep record */
    g_syslog.sysSleepRecord.wakeSource = 0U;

    /* Capture system sleep mode/flags */
    g_syslog.sysSleepRecord.sysSleepMode = s_sysSleepMode;
    g_syslog.sysSleepRecord.sysSleepFlags = s_sysSleepFlags;

    /* Capture power status of MIXes */
    g_syslog.sysSleepRecord.mixPwrStat = 0U;
    for (uint32_t mixIdx = 0U; mixIdx < PWR_NUM_MIX_SLICE; mixIdx++)
    {
        if (SRC_MixIsPwrSwitchOn(mixIdx))
        {
            g_syslog.sysSleepRecord.mixPwrStat |= (1UL << mixIdx);
        }
    }

    /* Capture power status of memories */
    g_syslog.sysSleepRecord.memPwrStat = 0U;
    for (uint32_t memIdx = 0U; memIdx < PWR_NUM_MEM_SLICE; memIdx++)
    {
        const src_mem_slice_t *srcMem = s_srcMemPtrs[memIdx];
        if ((srcMem->MEM_CTRL & SRC_MEM_MEM_CTRL_MEM_LP_MODE_MASK) != 0U)
        {
            g_syslog.sysSleepRecord.memPwrStat |= (1UL << memIdx);
        }
    }

    /* Capture power status of PLLs */
    g_syslog.sysSleepRecord.pllPwrStat = 0U;
    for (uint32_t pllIdx = 0U; pllIdx < CLOCK_NUM_PLL; pllIdx++)
    {
        uint32_t sourceIdx = s_pllVcoList[pllIdx];
        if (CLOCK_SourceGetEnable(sourceIdx))
        {
            g_syslog.sysSleepRecord.pllPwrStat |= (1UL << pllIdx);
        }
    }

    /* Initialize wake masks */
    for (uint32_t wakeIdx = 0;
        wakeIdx < GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT;
        wakeIdx++)
    {
        sysWakeMask[wakeIdx] = 0xFFFFFFFFU;

        for (uint32_t cpuIdx = 0U; cpuIdx < CPU_NUM_IDX; cpuIdx++)
        {
            cpuWakeMask[cpuIdx][wakeIdx] = 0xFFFFFFFFU;
        }
    }

    /* Initialize NOC/WAKEUP MIX dependencies */
    uint32_t lpmSettingNoc = CPU_PD_LPM_ON_NEVER;
    uint32_t lpmSettingWakeup = CPU_PD_LPM_ON_NEVER;

    /* Scan CPUs, update GPC wake masks, assess NOC/WAKEUP MIX dependencies */
    for (uint32_t cpuIdx = 0U; cpuIdx < CPU_NUM_IDX; cpuIdx++)
    {
        if (cpuIdx != CPU_IDX_M33P)
        {
            /* Check if sleep is forced for the CPU */
            bool sleepForce;
            if (CPU_SleepForceGet(cpuIdx, &sleepForce))
            {
                /* If sleep is not forced, manage GPC masks */
                if (!sleepForce)
                {
                    /* IRQs enabled at NVIC level become GPC wake sources */
                    for (uint32_t wakeIdx = 0;
                        wakeIdx < GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT;
                        wakeIdx++)
                    {
                        uint32_t wakeVal;
                        if (CPU_IrqWakeGet(cpuIdx, wakeIdx, &wakeVal))
                        {
                            cpuWakeMask[cpuIdx][wakeIdx] = wakeVal;
                            sysWakeMask[wakeIdx] &= wakeVal;
                            (void) CPU_IrqWakeSet(cpuIdx, wakeIdx,
                                0xFFFFFFFFU);
                        }
                    }

                    /* Update NOCMIX dependency */
                    uint32_t lpmSetting;
                    if (SRC_MixCpuLpmGet(PWR_MIX_SLICE_IDX_NOC, cpuIdx,
                        &lpmSetting))
                    {
                        if (lpmSetting > lpmSettingNoc)
                        {
                            lpmSettingNoc = lpmSetting;
                        }
                    }

                    /* Update WAKEUPMIX dependency */
                    if (SRC_MixCpuLpmGet(PWR_MIX_SLICE_IDX_WAKEUP, cpuIdx,
                        &lpmSetting))
                    {
                        if (lpmSetting > lpmSettingWakeup)
                        {
                            lpmSettingWakeup = lpmSetting;
                        }
                    }
                }
            }
        }
    }

    /* Check system sleep status after clearing GPC masks */
    uint32_t sysSleepStat;
    if (CPU_SystemSleepStatusGet(&sysSleepStat))
    {
        /* If system can sleep after clearing GPC masks, SUSPEND
         * processing has reached point of coherency.  Agent CPUs
         * cannot wake without SM completion of SUSPEND entry/exit
         * sequence below.
         */
        if (sysSleepStat == CPU_SLEEP_MODE_SUSPEND)
        {
            /* Board-level sleep prepare */
            BOARD_SystemSleepPrepare(s_sysSleepMode, s_sysSleepFlags);

            /* Disable sensor */
            (void) DEV_SM_SensorPowerDown(DEV_SM_SENSOR_TEMP_ANA);

            /*! Increment system sleep counter */
            g_syslog.sysSleepRecord.sleepCnt++;

            bool dramInRetention = false;
            /* Attempt to place DRAM into retention */
            if (DEV_SM_SystemDramRetentionEnter() == SM_ERR_SUCCESS)
            {
                /* Set flag to indicate DRAM retention is active */
                dramInRetention = true;

                /* Power down DDRMIX */
                if (DEV_SM_PowerStateSet(DEV_SM_PD_DDR, DEV_SM_POWER_STATE_OFF)
                    == SM_ERR_SUCCESS)
                {
                    g_syslog.sysSleepRecord.mixPwrStat &=
                        (~(1UL << PWR_MIX_SLICE_IDX_DDR));
                }
            }

            /* If NOCMIX powered down during SUSPEND, force power down */
            if (lpmSettingNoc <= sleepMode)
            {
                if (DEV_SM_PowerStateSet(DEV_SM_PD_NOC, DEV_SM_POWER_STATE_OFF)
                    == SM_ERR_SUCCESS)
                {
                    g_syslog.sysSleepRecord.mixPwrStat &=
                        (~(1UL << PWR_MIX_SLICE_IDX_NOC));
                }
            }

            /* If WAKEUPMIX powered down during SUSPEND, force power down */
            if ((lpmSettingWakeup <= sleepMode) &&
                ((CoreDebug->DHCSR & CoreDebug_DHCSR_C_DEBUGEN_Msk) == 0x0U))
            {
                if (DEV_SM_PowerStateSet(DEV_SM_PD_WAKEUP,
                    DEV_SM_POWER_STATE_OFF) == SM_ERR_SUCCESS)
                {
                    g_syslog.sysSleepRecord.mixPwrStat &=
                        (~(1UL << PWR_MIX_SLICE_IDX_WAKEUP));
                }
            }

            /* Inhibit all GPC LP handshakes during SUSPEND */
            uint32_t lpHsSm = BLK_CTRL_S_AONMIX->LP_HANDSHAKE_SM;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE_SM = 0U;
            uint32_t lpHs2Sm = BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_SM;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_SM = 0U;
            uint32_t lpHsEle = BLK_CTRL_S_AONMIX->LP_HANDSHAKE_ELE;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE_ELE = 0U;
            uint32_t lpHs2Ele = BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_ELE;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_ELE = 0U;

            /* Configure SM GPC_CTRL and NVIC for system-level wake events */
            for (uint32_t wakeIdx = 0;
                wakeIdx < GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT;
                wakeIdx++)
            {
                /* Save context of SM IRQs enabled at NVIC level */
                nvicISER[wakeIdx] = NVIC->ISER[wakeIdx];

                /* Clear unused system-level IRQs */
                uint32_t maskVal = ~nvicISER[wakeIdx];
                NVIC->ICPR[wakeIdx] = 0xFFFFFFFFU & maskVal;

                /* Add system-level wake events */
                maskVal &= sysWakeMask[wakeIdx];

                /* Update GPC wake mask */
                (void) CPU_IrqWakeSet(CPU_IDX_M33P, wakeIdx, maskVal);

                /* Update NVIC wake mask */
                NVIC->ICER[wakeIdx] = 0xFFFFFFFFU;
                NVIC->ISER[wakeIdx] = ~maskVal;
            }

            /* Configure M33P to wake from GPC */
            (void) CPU_WakeMuxSet(CPU_IDX_M33P, false);

            /* Set target M33P sleep mode */
            (void) CPU_SleepModeSet(CPU_IDX_M33P, sleepMode);

            /* Extract and clamp performance level from system sleep mode */
            uint32_t perfLevelSleep = (s_sysSleepMode & 0xF0U) >> 4U;
            if (perfLevelSleep > DEV_SM_PERF_LVL_ODV)
            {
                perfLevelSleep = DEV_SM_PERF_LVL_ODV;
            }

            /* System remains active during sleep based on performance level
             * and OSC24M configuration.
             */
            bool activeSleep = (perfLevelSleep != DEV_SM_PERF_LVL_PRK) ||
                ((s_sysSleepFlags & DEV_SM_SSF_OSC24M_ACTIVE_MASK) != 0U);

            /* Check if OSC24M must remain active */
            if (activeSleep)
            {
                /* Keep OSC_24M active during system sleep */
                GPC_GLOBAL->GPC_ROSC_CTRL = 0U;
            }
            else
            {
                /* Shut off OSC_24M during system sleep */
                GPC_GLOBAL->GPC_ROSC_CTRL =
                    GPC_GLOBAL_GPC_ROSC_CTRL_ROSC_OFF_EN_MASK;
            }

            /* Check PMIC_STBY system sleep mode flag */
            if ((s_sysSleepFlags & DEV_SM_SSF_PMIC_STBY_INACTIVE_MASK) == 0U)
            {
                /* Enable GPC PMIC standby control */
                GPC_GLOBAL->GPC_PMIC_CTRL =
                    GPC_GLOBAL_GPC_PMIC_CTRL_PMIC_STBY_EN_MASK;
            }
            else
            {
                /* Disable GPC PMIC standby control */
                GPC_GLOBAL->GPC_PMIC_CTRL = 0U;
            }

            /* Power down eFUSE */
            GPC_GLOBAL->GPC_EFUSE_CTRL =
                GPC_GLOBAL_GPC_EFUSE_CTRL_EFUSE_PD_EN_MASK;

            /* Disable bypass for clock sources */
            CLOCK_SourceBypass(false, true);

            if (activeSleep)
            {
                /* If staying active, move to system sleep performance level */
                (void) DEV_SM_PerfSystemSleep(perfLevelSleep);
            }
            else
            {
                /* Move ELE and SM clock roots to OSC_24M to allow SysPLL to be
                 * powered down. OSC_24M may be gated by hardware during final phases
                 * of system SUSPEND entry.
                 */
                for (uint32_t sleepRootIdx = 0U;
                    sleepRootIdx < DEV_SM_NUM_SLEEP_ROOTS;
                    sleepRootIdx++)
                {
                    uint32_t rootIdx = s_clkRootSleepList[sleepRootIdx];

                    /* Save clock root context */
                    s_clkRootCtrl[sleepRootIdx] =
                        CCM_CTRL->CLOCK_ROOT[rootIdx].CLOCK_ROOT_CONTROL.RW;

                    /* Set MUX = 0 (OSC_24M) */
                    CCM_CTRL->CLOCK_ROOT[rootIdx].CLOCK_ROOT_CONTROL.CLR =
                        CCM_CLOCK_ROOT_MUX_MASK;

                    /* Set DIV = 0 (/1) */
                    CCM_CTRL->CLOCK_ROOT[rootIdx].CLOCK_ROOT_CONTROL.CLR =
                        CCM_CLOCK_ROOT_DIV_MASK;
                }
            }

            /* Check if sleep performance level allows SYSPLL disable */
            if (perfLevelSleep == DEV_SM_PERF_LVL_PRK)
            {
                /* Power down SYSPLL clock nodes */
                uint32_t clkSrcIdx = CLOCK_SRC_SYSPLL1_PFD2_DIV2;
                while (clkSrcIdx >= CLOCK_SRC_SYSPLL1_VCO)
                {
                    (void) CLOCK_SourceSetEnable(clkSrcIdx, false);
                    clkSrcIdx--;
                }
                g_syslog.sysSleepRecord.pllPwrStat &= (~(1UL << CLOCK_PLL_SYS1));
            }

            /* Board-level sleep entry */
            BOARD_SystemSleepEnter(s_sysSleepMode, s_sysSleepFlags);

            /* Capture sleep entry latency */
            g_syslog.sysSleepRecord.sleepEntryUsec =
                UINT64_L(DEV_SM_Usec64Get() - sleepEntryStart);

            /* Check SYSCTR system sleep mode flag */
            if ((s_sysSleepFlags & DEV_SM_SSF_SYSCTR_ACTIVE_MASK) != 0U)
            {
                /* Switch SYSCTR to low-freq mode (blocking) */
                SYSCTR_FreqMode(true, true);
            }

            /* Check FRO system sleep mode flag */
            if ((s_sysSleepFlags & DEV_SM_SSF_FRO_ACTIVE_MASK) == 0U)
            {
                /* Power down FRO */
                FRO->CSR.CLR = FRO_CSR_FROEN_MASK;
            }

            /* Enter WFI to trigger sleep entry */
            __DSB();
            // coverity[misra_c_2012_rule_1_2_violation:FALSE]
            __WFI();
            __ISB();

            /* Power up FRO */
            FRO->CSR.SET = FRO_CSR_FROEN_MASK;

            /* Check SYSCTR system sleep mode flag
             *
             * NOTE: switch completion required before read of exit timestamp
             */
            if ((s_sysSleepFlags & DEV_SM_SSF_SYSCTR_ACTIVE_MASK) != 0U)
            {
                /* Switch SYSCTR to high-freq mode (blocking) */
                SYSCTR_FreqMode(false, true);
            }

            /* Capture start of sleep exit */
            sleepExitStart = DEV_SM_Usec64Get();

            /* Capture wake source */
            g_syslog.sysSleepRecord.wakeSource =
                (SCB->ICSR & SCB_ICSR_VECTPENDING_Msk)
                >> SCB_ICSR_VECTPENDING_Pos;

            /* Board-level sleep exit */
            BOARD_SystemSleepExit(s_sysSleepMode, s_sysSleepFlags);

            /* Check if sleep performance level requires SYSPLL enable */
            if (perfLevelSleep == DEV_SM_PERF_LVL_PRK)
            {
                /* Power up SYSPLL clock nodes */
                uint32_t clkSrcIdx = CLOCK_SRC_SYSPLL1_VCO;
                while (clkSrcIdx <= CLOCK_SRC_SYSPLL1_PFD2_DIV2)
                {
                    (void) CLOCK_SourceSetEnable(clkSrcIdx, true);
                    clkSrcIdx++;
                }
            }

            if (activeSleep)
            {
                /* Move to system wake performance level */
                (void) DEV_SM_PerfSystemWake(perfLevelSleep);
            }
            else
            {
                /* Restore ELE and SM clock roots */
                for (uint32_t sleepRootIdx = 0U;
                    sleepRootIdx < DEV_SM_NUM_SLEEP_ROOTS;
                    sleepRootIdx++)
                {
                    uint32_t rootIdx = s_clkRootSleepList[sleepRootIdx];

                    /* Restore DIV */
                    CCM_CTRL->CLOCK_ROOT[rootIdx].CLOCK_ROOT_CONTROL.SET =
                        s_clkRootCtrl[sleepRootIdx] & CCM_CLOCK_ROOT_DIV_MASK;

                    /* Restore MUX */
                    CCM_CTRL->CLOCK_ROOT[rootIdx].CLOCK_ROOT_CONTROL.SET =
                        s_clkRootCtrl[sleepRootIdx] & CCM_CLOCK_ROOT_MUX_MASK;
                }
            }

            /* Enable bypass for clock sources */
            CLOCK_SourceBypass(true, true);

            /* Power up eFUSE */
            GPC_GLOBAL->GPC_EFUSE_CTRL = 0U;

            /* Restore GPC LP handshakes */
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE_SM = lpHsSm;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_SM = lpHs2Sm;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE_ELE = lpHsEle;
            BLK_CTRL_S_AONMIX->LP_HANDSHAKE2_ELE = lpHs2Ele;

            /* If WAKEUPMIX powered down during SUSPEND, force power up */
            if (lpmSettingWakeup <= sleepMode)
            {
                status = DEV_SM_PowerStateSet(DEV_SM_PD_WAKEUP,
                    DEV_SM_POWER_STATE_ON);
            }

            /* If NOCMIX powered down during SUSPEND, force power up */
            if ((status == SM_ERR_SUCCESS) && (lpmSettingNoc <= sleepMode))
            {
                status = DEV_SM_PowerStateSet(DEV_SM_PD_NOC,
                    DEV_SM_POWER_STATE_ON);
            }

            /* Check if DRAM retention active */
            if (dramInRetention)
            {
                if (status == SM_ERR_SUCCESS)
                {
                    /* Power up DDRMIX */
                    status = DEV_SM_PowerStateSet(DEV_SM_PD_DDR,
                        DEV_SM_POWER_STATE_ON);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    /* Take DRAM out of retention */
                    status = DEV_SM_SystemDramRetentionExit();
                }
            }

            /* Restore SM NVIC */
            for (uint32_t wakeIdx = 0;
                wakeIdx < GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT;
                wakeIdx++)
            {
                NVIC->ICER[wakeIdx] = 0xFFFFFFFFU;
                NVIC->ISER[wakeIdx] = nvicISER[wakeIdx];
            }

            /* Enable sensor */
            (void) DEV_SM_SensorPowerUp(DEV_SM_SENSOR_TEMP_ANA);

            /* Board-level sleep unprepare */
            BOARD_SystemSleepUnprepare(s_sysSleepMode, s_sysSleepFlags);
        }
    }

    /* Check if system did not sleep */
    if (g_syslog.sysSleepRecord.wakeSource == 0U)
    {
        sleepExitStart = DEV_SM_Usec64Get();
        g_syslog.sysSleepRecord.sleepEntryUsec =
            UINT64_L(sleepExitStart - sleepEntryStart);
    }

    /* Restore GPC wake masks for sleeping CPUs */
    for (uint32_t cpuIdx = 0U; cpuIdx < CPU_NUM_IDX; cpuIdx++)
    {
        if (cpuIdx != CPU_IDX_M33P)
        {
            /* Check if sleep is forced for the CPU */
            bool sleepForce;
            if (CPU_SleepForceGet(cpuIdx, &sleepForce))
            {
                /* If sleep is not forced, manage GPC masks */
                if (!sleepForce)
                {
                    /* IRQs enabled at NVIC level become GPC wake sources */
                    for (uint32_t wakeIdx = 0U;
                        wakeIdx < GPC_CPU_CTRL_CMC_IRQ_WAKEUP_MASK_COUNT;
                        wakeIdx++)
                    {
                        (void) CPU_IrqWakeSet(cpuIdx, wakeIdx,
                            cpuWakeMask[cpuIdx][wakeIdx]);
                    }
                }
            }
        }
    }

    g_syslog.sysSleepRecord.sleepExitUsec =
        UINT64_L(DEV_SM_Usec64Get() - sleepExitStart);

    return status;
}

/*--------------------------------------------------------------------------*/
/* Idle the system                                                          */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemIdle(void)
{
    int32_t status = SM_ERR_SUCCESS;

    __disable_irq();

    /* Check if system sleep mode flag allows system sleep */
    if ((s_sysSleepFlags & DEV_SM_SSF_SM_ACTIVE_MASK) == 0U)
    {
        /* Check if conditions allow system sleep */
        uint32_t sysSleepStat;
        if (CPU_SystemSleepStatusGet(&sysSleepStat))
        {
            if (sysSleepStat == CPU_SLEEP_MODE_SUSPEND)
            {
                status = DEV_SM_SystemSleep(CPU_SLEEP_MODE_SUSPEND);
            }
            /* Otherwise stay in RUN mode and enter WFI */
            else
            {
                (void) CPU_SleepModeSet(CPU_IDX_M33P, CPU_SLEEP_MODE_RUN);
                __DSB();
                // coverity[misra_c_2012_rule_1_2_violation:FALSE]
                __WFI();
                __ISB();
            }
        }
    }
    /* SM remains active, no system sleep */
    else
    {
        (void) CPU_SleepModeSet(CPU_IDX_M33P, CPU_SLEEP_MODE_RUN);
        __DSB();
        // coverity[misra_c_2012_rule_1_2_violation:FALSE]
        __WFI();
        __ISB();
    }

    __enable_irq();

    return status;
}

/*--------------------------------------------------------------------------*/
/* Place the system DRAM into retention                                     */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemDramRetentionEnter(void)
{
    int32_t status = SM_ERR_SUCCESS;
    const struct ddr_info* ddr = (struct ddr_info*) &__DramInfo;
    uint8_t powerState = DEV_SM_POWER_STATE_OFF;

    /* Get power state of DDRMIX */
    status = DEV_SM_PowerStateGet(DEV_SM_PD_DDR, &powerState);
    if (status == SM_ERR_SUCCESS)
    {
        /* DDRMIX must be ON to apply retention */
        if (powerState != DEV_SM_POWER_STATE_ON)
        {
            status = SM_ERR_POWER;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* Save DDRMIX block control */
        ddr_blk_ctrl.HWFFC_CTRL = BLK_CTRL_DDRMIX->HWFFC_CTRL;
        ddr_blk_ctrl.CA55_SEL_CTRL = BLK_CTRL_DDRMIX->CA55_SEL_CTRL;
        ddr_blk_ctrl.VREF_PSW_CTRL = BLK_CTRL_DDRMIX->VREF_PSW_CTRL;
        ddr_blk_ctrl.DDRC_STOP_CTRL = BLK_CTRL_DDRMIX->DDRC_STOP_CTRL;
        ddr_blk_ctrl.AUTO_CG_CTRL = BLK_CTRL_DDRMIX->AUTO_CG_CTRL;
        ddr_blk_ctrl.SSI_PWR_CTRL = BLK_CTRL_DDRMIX->SSI_PWR_CTRL;
        ddr_blk_ctrl.DDRC_EXCLUSIVE_EN = BLK_CTRL_DDRMIX->DDRC_EXCLUSIVE_EN;
        ddr_blk_ctrl.DDRC_URGENT_EN = BLK_CTRL_DDRMIX->DDRC_URGENT_EN;
        ddr_blk_ctrl.RT_MASTER_ID_0_1 = BLK_CTRL_DDRMIX->RT_MASTER_ID_0_1;
        ddr_blk_ctrl.RT_MASTER_ID_2_3 = BLK_CTRL_DDRMIX->RT_MASTER_ID_2_3;
        ddr_blk_ctrl.AXI_PARITY_ERR_INJECT =
            BLK_CTRL_DDRMIX->AXI_PARITY_ERR_INJECT;
        ddr_blk_ctrl.RT_MASTER_ID_4_5 = BLK_CTRL_DDRMIX->RT_MASTER_ID_4_5;
        ddr_blk_ctrl.RT_MASTER_ID_6_7 = BLK_CTRL_DDRMIX->RT_MASTER_ID_6_7;

        /* Enter retention */
        if (!DDR_EnterRetention(ddr))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* Assert DDRPHY Reset */
        if (!SRC_MixSetResetLine(RST_LINE_DDRPHY_RESETN,
            RST_LINE_CTRL_ASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* Deassert BP_PWROK */
        if (!SRC_MixSetResetLine(RST_LINE_DDRMIX_PHY,
            RST_LINE_CTRL_DEASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Exit the system DRAM from retention                                      */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SystemDramRetentionExit(void)
{
    int32_t status = SM_ERR_SUCCESS;
    const struct ddr_info* ddr = (struct ddr_info*) &__DramInfo;
    uint8_t powerState = DEV_SM_POWER_STATE_OFF;

    /* Get power state of DDRMIX */
    status = DEV_SM_PowerStateGet(DEV_SM_PD_DDR, &powerState);
    if (status == SM_ERR_SUCCESS)
    {
        /* DDRMIX must be ON to remove retention */
        if (powerState != DEV_SM_POWER_STATE_ON)
        {
            status = SM_ERR_POWER;
        }
    }

    /**
     * BIT(8) => src_ipc_ddrphy_presetn, PRESETN
     * BIT(9) => src_ipc_ddrphy_reset_n, RESET_N
     * for some reason BIT(8)=1 at this point, so PRESETN go LOW after power-up
     * Ensure PRESETN go HIGH after power-up
     * Ensure RESET_N go LOW  after power-up
     */
    if (status == SM_ERR_SUCCESS)
    {
        if (!SRC_MixSetResetLine(RST_LINE_DDRPHY_PRESETN, RST_LINE_CTRL_DEASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* sleep for a while, just random */
        SystemTimeDelay(15U);

        /* set PRESETN LOW after power-up */
        if (!SRC_MixSetResetLine(RST_LINE_DDRPHY_PRESETN,
            RST_LINE_CTRL_ASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* The delay below must be at least 16 APBCLK
         * APBCLK is @200MHz in waveform. Timer clock is @24MHz =>
         * => (16 * 24.000.000 / 200.000.000) = 1.92us minimum
         * => set x4 = 8us */
        SystemTimeDelay(15U);

        /* set PRESETN HIGH */
        if (!SRC_MixSetResetLine(RST_LINE_DDRPHY_PRESETN,
            RST_LINE_CTRL_DEASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* The delay below shall be 0 according to PHY PUB, set 8 just in case */
        SystemTimeDelay(15U);

        /* set RESET_N HIGH */
        if (!SRC_MixSetResetLine(RST_LINE_DDRPHY_RESETN,
            RST_LINE_CTRL_DEASSERT))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* The duration for the delay below is not mentioned in PHY PUB,
           set 8 just in case */
        SystemTimeDelay(15U);

        status = DEV_SM_ClockEnable(DEV_SM_CLK_DRAMPLL_VCO, true);
    }

    if (status == SM_ERR_SUCCESS)
    {
        status = DEV_SM_ClockEnable(DEV_SM_CLK_DRAMPLL, true);
    }

    if (status == SM_ERR_SUCCESS)
    {
        /* Exit retention */
        if (!DDR_ExitRetention(ddr))
        {
            status = SM_ERR_HARDWARE_ERROR;
        }

        /* Restore DDRMIX block control */
        BLK_CTRL_DDRMIX->HWFFC_CTRL = ddr_blk_ctrl.HWFFC_CTRL;
        BLK_CTRL_DDRMIX->CA55_SEL_CTRL = ddr_blk_ctrl.CA55_SEL_CTRL;
        BLK_CTRL_DDRMIX->VREF_PSW_CTRL = ddr_blk_ctrl.VREF_PSW_CTRL;
        BLK_CTRL_DDRMIX->DDRC_STOP_CTRL = ddr_blk_ctrl.DDRC_STOP_CTRL;
        BLK_CTRL_DDRMIX->AUTO_CG_CTRL = ddr_blk_ctrl.AUTO_CG_CTRL;
        BLK_CTRL_DDRMIX->SSI_PWR_CTRL = ddr_blk_ctrl.SSI_PWR_CTRL;
        BLK_CTRL_DDRMIX->DDRC_EXCLUSIVE_EN = ddr_blk_ctrl.DDRC_EXCLUSIVE_EN;
        BLK_CTRL_DDRMIX->DDRC_URGENT_EN = ddr_blk_ctrl.DDRC_URGENT_EN;
        BLK_CTRL_DDRMIX->RT_MASTER_ID_0_1 = ddr_blk_ctrl.RT_MASTER_ID_0_1;
        BLK_CTRL_DDRMIX->RT_MASTER_ID_2_3 = ddr_blk_ctrl.RT_MASTER_ID_2_3;
        BLK_CTRL_DDRMIX->AXI_PARITY_ERR_INJECT =
            ddr_blk_ctrl.AXI_PARITY_ERR_INJECT;
        BLK_CTRL_DDRMIX->RT_MASTER_ID_4_5 = ddr_blk_ctrl.RT_MASTER_ID_4_5;
        BLK_CTRL_DDRMIX->RT_MASTER_ID_6_7 = ddr_blk_ctrl.RT_MASTER_ID_6_7;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Configure bypass for clock sources                                       */
/*--------------------------------------------------------------------------*/
static void CLOCK_SourceBypass(bool bypass, bool preserve)
{
    if (preserve)
    {
        /* Update PLL bypass only if not currently in use */
        if (!FRACTPLL_GetEnable(CLOCK_PLL_AUDIO1, PLL_CTRL_POWERUP_MASK))
        {
            (void) FRACTPLL_SetBypass(CLOCK_PLL_AUDIO1, bypass);
        }

        /* Update PLL bypass only if not currently in use */
        if (!FRACTPLL_GetEnable(CLOCK_PLL_AUDIO2, PLL_CTRL_POWERUP_MASK))
        {
            (void) FRACTPLL_SetBypass(CLOCK_PLL_AUDIO2, bypass);
        }

        /* Update PLL bypass only if not currently in use */
        if (!FRACTPLL_GetEnable(CLOCK_PLL_ENCODER, PLL_CTRL_POWERUP_MASK))
        {
            (void) FRACTPLL_SetBypass(CLOCK_PLL_ENCODER, bypass);
        }
    }
    else
    {
        /* Configure bypass for PLLs used as clock sources */
        (void) FRACTPLL_SetBypass(CLOCK_PLL_AUDIO1, bypass);
        (void) FRACTPLL_SetBypass(CLOCK_PLL_AUDIO2, bypass);
        (void) FRACTPLL_SetBypass(CLOCK_PLL_ENCODER, bypass);
    }
}

#ifdef DEV_SM_MSG_PROF_CNT
/*--------------------------------------------------------------------------*/
/* Message profile start notification                                       */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemMsgProfStart(uint32_t mu)
{
    /* Capture timestamp of message start */
    curMsgRecord.msgStartUsec = DEV_SM_Usec64Get();
}

/*--------------------------------------------------------------------------*/
/* Message profile describe notification                                    */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemMsgProfDescribe(uint32_t scmiChannel, uint32_t chanType,
    uint32_t protocolId, uint32_t messageId)
{
    /* Capture message attributes */
    curMsgRecord.msgProf.scmiChannel = scmiChannel;
    curMsgRecord.msgProf.chanType = chanType;
    curMsgRecord.msgProf.protocolId = protocolId;
    curMsgRecord.msgProf.msgId = messageId;
}

/*--------------------------------------------------------------------------*/
/* Message profile end notification                                         */
/*--------------------------------------------------------------------------*/
void DEV_SM_SystemMsgProfEnd(uint32_t mu)
{
    /* Capture timestamp of message end */
    curMsgRecord.msgEndUsec = DEV_SM_Usec64Get();
    uint32_t curMsgLatUsec = (uint32_t) (curMsgRecord.msgEndUsec
        - curMsgRecord.msgStartUsec);
    curMsgRecord.msgProf.msgLatUsec = curMsgLatUsec;

    /* Begin processing of message profile results */
    bool bDone = false;
    bool bExisting = false;
    const dev_sm_sys_msg_prof_t *pCurMsgProf =
        &curMsgRecord.msgProf;

    /* Search profile log for an exiting entry of this message */
    uint32_t idx = 0U;
    do
    {
        const dev_sm_sys_msg_prof_t *pMsgProf =
            &g_syslog.sysMsgRecord.msgProf[idx];

        /* Attempt to match all attributes except timestamp */
        if ((pMsgProf->scmiChannel == pCurMsgProf->scmiChannel) &&
            (pMsgProf->chanType == pCurMsgProf->chanType) &&
            (pMsgProf->protocolId == pCurMsgProf->protocolId) &&
            (pMsgProf->msgId == pCurMsgProf->msgId))
        {
            bExisting = true;
        }
        else
        {
            idx++;
        }
    } while (!bExisting && (idx < DEV_SM_MSG_PROF_CNT));

    /* Existing entry requires possible update of the profile log */
    if (bExisting)
    {
        /* Check if existing entry has smaller latency */
        if (curMsgLatUsec > g_syslog.sysMsgRecord.msgProf[idx].msgLatUsec)
        {
            /* Remove existing entry */
            uint32_t j = idx;
            uint32_t k = j + 1U;
            while (k < DEV_SM_MSG_PROF_CNT)
            {
                g_syslog.sysMsgRecord.msgProf[j] =
                    g_syslog.sysMsgRecord.msgProf[k];
                j++;
                k++;
            }

            /* Insert a blank entry */
            g_syslog.sysMsgRecord.msgProf[j].scmiChannel = 0U;
            g_syslog.sysMsgRecord.msgProf[j].chanType= 0U;
            g_syslog.sysMsgRecord.msgProf[j].protocolId = 0U;
            g_syslog.sysMsgRecord.msgProf[j].msgId = 0U;
            g_syslog.sysMsgRecord.msgProf[j].msgLatUsec = 0U;
        }
        else
        {
            /* Existing entry has larger latency, we are done */
            bDone = true;
        }
    }

    /* Attempt to insert this message profile into the log */
    idx = 0U;
    while ((idx < DEV_SM_MSG_PROF_CNT) && (!bDone))
    {
        const dev_sm_sys_msg_prof_t *pMsgProf =
            &g_syslog.sysMsgRecord.msgProf[idx];

        if (curMsgLatUsec > pMsgProf->msgLatUsec)
        {
            /* Shift entries down */
            uint32_t j = DEV_SM_MSG_PROF_CNT - 1U;
            uint32_t k = j - 1U;
            while (j > idx)
            {
                g_syslog.sysMsgRecord.msgProf[j] =
                    g_syslog.sysMsgRecord.msgProf[k];
                j--;
                k--;
            }

            /* Insert log entry for this message*/
            g_syslog.sysMsgRecord.msgProf[idx] = *pCurMsgProf;

            bDone = true;
        }
        idx++;
    }
}
#endif

