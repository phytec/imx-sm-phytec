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

#ifndef DEV_SM_SYSTEM_H
#define DEV_SM_SYSTEM_H

/*==========================================================================*/
/*!
 * @addtogroup DEV_SM_MX94_SYS
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the SM API for the device system.
 */
/*==========================================================================*/

/* Includes */

#include "sm.h"

/* Defines */

/*! Number of device boot/shutdown/reset reasons */
#define DEV_SM_NUM_REASON  RST_NUM_REASONS

/*!
 * @name Device boot/shutdown/reset reason indexes
 *
 * See the SRESR register description in the System Reset Controller (SRC) section
 * of the i.MX95 RM.
 */
/** @{ */
#define DEV_SM_REASON_CM33_LOCKUP   RST_REASON_CM33_LOCKUP     /*!< 0: CM33 lockup */
#define DEV_SM_REASON_CM33_SWREQ    RST_REASON_CM33_SWREQ      /*!< 1: CM33 SW request */
#define DEV_SM_REASON_CM70_LOCKUP   RST_REASON_CM7_0_LOCKUP    /*!< 2: CM7 lockup */
#define DEV_SM_REASON_CM70_SWREQ    RST_REASON_CM7_0_SWREQ     /*!< 3: CM7 SW request */
#define DEV_SM_REASON_FCCU          RST_REASON_FCCU            /*!< 4: FCCU */
#define DEV_SM_REASON_JTAG_SW       RST_REASON_JTAG_SW         /*!< 5: JTAG SW */
#define DEV_SM_REASON_ELE           RST_REASON_ELE             /*!< 6: ELE */
#define DEV_SM_REASON_TEMPSENSE     RST_REASON_TEMPSENSE       /*!< 7: Sensor panic */
#define DEV_SM_REASON_WDOG1         RST_REASON_WDOG1           /*!< 8: WDOG 1 */
#define DEV_SM_REASON_WDOG2         RST_REASON_WDOG2           /*!< 9: WDOG 2 */
#define DEV_SM_REASON_WDOG3         RST_REASON_WDOG3           /*!< 10: WDOG 3 */
#define DEV_SM_REASON_WDOG4         RST_REASON_WDOG4           /*!< 11: WDOG 4 */
#define DEV_SM_REASON_WDOG5         RST_REASON_WDOG5           /*!< 12: WDOG 5 */
#define DEV_SM_REASON_JTAG          RST_REASON_JTAG            /*!< 13: JTAG */
#define DEV_SM_REASON_WDOG6         RST_REASON_WDOG6           /*!< 14: WDOG6 */
#define DEV_SM_REASON_WDOG7         RST_REASON_WDOG7           /*!< 15: WDOG7 */
#define DEV_SM_REASON_WDOG8         RST_REASON_WDOG8           /*!< 16: WDOG8 */
#define DEV_SM_REASON_WO_NETC       RST_REASON_WO_NETC         /*!< 17: WO_NECT */
#define DEV_SM_REASON_CM33S_LOCKUP  RST_REASON_CM33_S_LOCKUP   /*!< 18: CM33_S lockup */
#define DEV_SM_REASON_CM33S_SWREQ   RST_REASON_CM33_S_SWREQ    /*!< 19: CM33_S sw request */
#define DEV_SM_REASON_CM71_LOCKUP   RST_REASON_CM7_1_LOCKUP    /*!< 20: CM7_2 sw request */
#define DEV_SM_REASON_CM71_SWREQ    RST_REASON_CM7_1_SWREQ     /*!< 21: CM7_2 sw request */
#define DEV_SM_REASON_CM33_EXC      RST_REASON_CM33_EXC        /*!< 22: CM33 exception */
#define DEV_SM_REASON_BBM           RST_REASON_UNUSED0         /*!< 23: BBM boot/shutdown */
#define DEV_SM_REASON_SW            RST_REASON_UNUSED1         /*!< 24: SW requested */
#define DEV_SM_REASON_SM_ERR        RST_REASON_UNUSED2         /*!< 25: SM error/exit */
#define DEV_SM_REASON_FUSA_SRECO    RST_REASON_UNUSED3         /*!< 26: FuSa global recovery */
#define DEV_SM_REASON_PMIC          RST_REASON_UNUSED4         /*!< 27: PMIC */
#define DEV_SM_REASON_UNUSED5       RST_REASON_UNUSED5         /*!< 28: Unused */
#define DEV_SM_REASON_UNUSED6       RST_REASON_UNUSED6         /*!< 29: Unused */
#define DEV_SM_REASON_UNUSED7       RST_REASON_UNUSED7         /*!< 30: Unused */
#define DEV_SM_REASON_POR           RST_REASON_POR             /*!< 31: Power on reset */
/** @} */

/*! Number of device reset reasons */
#define DEV_SM_NUM_EXT_INFO  3U

/*! Default record for POR */
#define DEV_SM_RST_REC_POR \
    { \
        .reason = DEV_SM_REASON_POR, \
        .valid = true \
    }

/*! Default record for SW */
#define DEV_SM_RST_REC_SW \
    { \
        .reason = DEV_SM_REASON_SW, \
        .origin = 0U, \
        .validOrigin = true, \
        .valid = true \
    }

/*! Default record for BBM */
#define DEV_SM_RST_REC_BBM \
    { \
        .reason = DEV_SM_REASON_BBM, \
        .valid = true \
    }

/*!
 * @name System sleep flags
 */
/** @{ */
#define DEV_SM_SSF_SM_ACTIVE_MASK           (1U << 0U)  /*!< Keep SM active */
#define DEV_SM_SSF_FRO_ACTIVE_MASK          (1U << 1U)  /*!< Keep FRO active */
#define DEV_SM_SSF_SYSCTR_ACTIVE_MASK       (1U << 2U)  /*!< Keep SYSCTR active */
#define DEV_SM_SSF_PMIC_STBY_INACTIVE_MASK  (1U << 3U)  /*!< No PMIC_STBY assertion */
#define DEV_SM_SSF_OSC24M_ACTIVE_MASK       (1U << 4U)  /*!< Keep OSC24M active */
/** @} */

/* Types */

/*!
 * System sleep record
 */
typedef struct
{
    /*! System sleep entry latency */
    uint32_t sleepEntryUsec;

    /*! System sleep exit latency */
    uint32_t sleepExitUsec;

    /*! System sleep counter */
    uint32_t sleepCnt;

    /*! IRQ/exception causing system wake */
    uint32_t wakeSource;

    /*! MIX power status */
    uint32_t mixPwrStat;

    /*! MEM power status */
    uint32_t memPwrStat;

    /*! PLL power status */
    uint32_t pllPwrStat;

    /*! System sleep mode */
    uint32_t sysSleepMode;

    /*! System sleep flags */
    uint32_t sysSleepFlags;
} dev_sm_sys_sleep_rec_t;

#ifdef DEV_SM_MSG_PROF_CNT
/*!
 * Message profile log entry
 */
typedef struct
{
    uint32_t scmiChannel;   /*!< Caller SCMI channel */
    uint32_t chanType;      /*!< SCMI channel type */
    uint32_t protocolId;    /*!< SCMI protocol ID */
    uint32_t msgId;         /*!< SCMI message ID */
    uint32_t msgLatUsec;    /*!< Message latency */
} dev_sm_sys_msg_prof_t;

/*!
 * Message profile record
 */
typedef struct
{
    /*! MSG profile log */
    dev_sm_sys_msg_prof_t msgProf[DEV_SM_MSG_PROF_CNT];
} dev_sm_sys_msg_rec_t;
#endif

/* Functions */

/* Externs */

/*! External pointer to the DRAM info */
extern uint32_t *__DramInfo;

/** @} */

/* Include SM device API */

// coverity[misra_c_2012_rule_20_1_violation:FALSE]
#include "dev_sm_system_api.h"

#endif /* DEV_SM_SYSTEM_H */

