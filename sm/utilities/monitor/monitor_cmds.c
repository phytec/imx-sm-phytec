/*
** ###################################################################
**
** Copyright 2023-2025 NXP
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** o Redistributions of source code must retain the above copyright notice, this list
**   of conditions and the following disclaimer.
**
** o Redistributions in binary form must reproduce the above copyright notice, this
**   list of conditions and the following disclaimer in the documentation and/or
**   other materials provided with the distribution.
**
** o Neither the name of the copyright holder nor the names of its
**   contributors may be used to endorse or promote products derived from this
**   software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
** ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/* Implementation of the SM debug monitor commands.                         */
/*==========================================================================*/

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <errno.h>
#include "sm.h"
#include "monitor.h"
#include "monitor_cmds.h"
#ifdef DEVICE_HAS_TRDC
#include "monitor_trdc.h"
#endif
#include "lmm.h"
#include "dev_sm_api.h"
#ifdef DEVICE_HAS_ELE
#include "fsl_ele.h"
#endif
#if defined(GCOV) && !defined(SIMU)
#include "gcov_dump.h"
#endif

/* Defines */

#define MAXARGS     15

#define BYTE        1
#define WORD        2
#define LONG        4
#define READ        0
#define WRITE       1
#define RESET       2
#define NOTIFY      3

/* Types */

/* Local Functions */

static int32_t MONITOR_CmdInfo(int32_t argc, const char * const argv[]);
#ifdef DEVICE_HAS_ELE
static int32_t MONITOR_CmdEle(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdEleInfo(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdEleExt(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdEleLifecycle(int32_t argc,
    const char * const argv[]);
static int32_t MONITOR_CmdEleEvents(int32_t argc, const char * const argv[]);
static void MONITOR_DumpLongHex(string str, uint32_t *ptr, uint32_t cnt);
#endif
#ifdef DEVICE_HAS_V2X
static int32_t MONITOR_CmdV2x(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdV2xInfo(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdV2xPing(int32_t argc, const char * const argv[]);
#endif
static int32_t MONITOR_CmdErr(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdBtime(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdReason(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdShutdown(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdReset(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdStage(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdSuspend(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdWake(int32_t argc, const char * const argv[]);
#ifdef BOARD_HAS_WDOG
static int32_t MONITOR_CmdWdog(int32_t argc, const char * const argv[]);
#endif
static int32_t MONITOR_CmdFault(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdLm(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdLmInfo(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdLmReset(int32_t argc, const char * const argv[],
    uint32_t lm);
static int32_t MONITOR_CmdLmReason(int32_t argc, const char * const argv[],
    uint32_t lm);
static int32_t MONITOR_CmdPower(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdPerf(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdClock(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdSensor(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdVolt(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdBb(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdBbRtc(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdBbTicks(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdBbGpr(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdCpu(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdCtrl(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdExtCtrl(int32_t argc, const char * const argv[],
    int32_t rw);
static int32_t MONITOR_CmdMd(int32_t argc, const char * const argv[],
    int32_t len);
static int32_t MONITOR_CmdMm(int32_t argc, const char * const argv[],
    int32_t len);
static int32_t MONITOR_CmdFuse(int32_t argc, const char * const argv[],
    int32_t rw);
#ifdef BOARD_HAS_PMIC
static int32_t MONITOR_CmdPmic(int32_t argc, const char * const argv[],
    int32_t rw);
#endif
static int32_t MONITOR_CmdIdle(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdAssert(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdSyslog(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdGroup(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdSsm(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdCustom(int32_t argc, const char * const argv[]);
static int32_t MONITOR_CmdTest(int32_t argc, const char * const argv[]);

/* Local Variables */

static uint32_t s_lm = SM_LM_DEFAULT;

/*--------------------------------------------------------------------------*/
/* First level parse and dispatch                                           */
/*--------------------------------------------------------------------------*/
int32_t MONITOR_Dispatch(char *line)
{
    int32_t status = SM_ERR_SUCCESS;
    int32_t argc = 0;
    const char *argv[MAXARGS];

    /* Add here. Don't forget the comma. */
    static string const cmds[] =
    {
        "?",
        "help",
        "exit",
        "quit",
        "info",
        "ele",
        "v2x",
        "err",
        "btime",
        "trdc.raw",
        "trdc",
        "reason",
        "shutdown",
        "reset",
        "stage",
        "suspend",
        "wake",
        "wdog",
        "fault",
        "lm",
        "power.r",
        "power.w",
        "perf.r",
        "perf.w",
        "clock.reset",
        "clock.r",
        "clock.w",
        "sensor.r",
        "sensor.w",
        "volt.r",
        "volt.w",
        "bb.r",
        "bb.w",
        "cpu.r",
        "cpu.w",
        "ctrl.r",
        "ctrl.w",
        "ctrl.notify",
        "extctrl.r",
        "extctrl.w",
        "md.b",
        "md.w",
        "md",
        "mm.b",
        "mm.w",
        "mm",
        "fuse.r",
        "fuse.w",
        "pmic.r",
        "pmic.w",
        "idle",
        "assert",
        "syslog",
        "grp",
        "ssm",
        "custom",
        "test",
        "gcov"
    };

    /* Parse Line */
    MONITOR_ParseLine(line, &argc, argv);

    /* Parse command */
    if (argc != 0)
    {
        int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
            argv[0]);

        switch (sub)
        {
            case 0:  /* ? */
            case 1:  /* help */
                for (uint8_t idx = 0U; idx < ARRAY_SIZE(cmds); idx++)
                {
                    printf("    %s\n", cmds[idx]);
                }
                break;
            case 2:  /* exit */
            case 3:  /* quit */
                status = SM_ERR_LAST;
                break;
            case 4:  /* info */
                status = MONITOR_CmdInfo(argc - 1, &argv[1]);
                break;
#ifdef DEVICE_HAS_ELE
            case 5:  /* ele */
                status = MONITOR_CmdEle(argc - 1, &argv[1]);
                break;
#endif
#ifdef DEVICE_HAS_V2X
            case 6: /* v2x */
                status = MONITOR_CmdV2x(argc - 1, &argv[1]);
                break;
#endif
            case 7:  /* err */
                status = MONITOR_CmdErr(argc - 1, &argv[1]);
                break;
            case 8:  /* btime */
                status = MONITOR_CmdBtime(argc - 1, &argv[1]);
                break;
#ifdef DEVICE_HAS_TRDC
            case 9:  /* trdc.raw */
                status = MONITOR_CmdTrdcRaw(argc - 1, &argv[1]);
                break;
            case 10:  /* trdc */
                status = MONITOR_CmdTrdc(argc - 1, &argv[1]);
                break;
#endif
            case 11:  /* reset reason */
                status = MONITOR_CmdReason(argc - 1, &argv[1]);
                break;
            case 12:  /* shutdown */
                status = MONITOR_CmdShutdown(argc - 1, &argv[1]);
                break;
            case 13:  /* reset */
                status = MONITOR_CmdReset(argc - 1, &argv[1]);
                break;
            case 14:  /* stage */
                status = MONITOR_CmdStage(argc - 1, &argv[1]);
                break;
            case 15:  /* suspend */
                status = MONITOR_CmdSuspend(argc - 1, &argv[1]);
                break;
            case 16:  /* wake */
                status = MONITOR_CmdWake(argc - 1, &argv[1]);
                break;
#ifdef BOARD_HAS_WDOG
            case 17:  /* wdog */
                status = MONITOR_CmdWdog(argc - 1, &argv[1]);
                break;
#endif
            case 18:  /* fault */
                status = MONITOR_CmdFault(argc - 1, &argv[1]);
                break;
            case 19:  /* lm */
                status = MONITOR_CmdLm(argc - 1, &argv[1]);
                break;
            case 20:  /* power.r */
                status = MONITOR_CmdPower(argc - 1, &argv[1], READ);
                break;
            case 21:  /* power.w */
                status = MONITOR_CmdPower(argc - 1, &argv[1], WRITE);
                break;
            case 22:  /* perf.r */
                status = MONITOR_CmdPerf(argc - 1, &argv[1], READ);
                break;
            case 23:  /* perf.w */
                status = MONITOR_CmdPerf(argc - 1, &argv[1], WRITE);
                break;
            case 24:  /* clock.reset */
                status = MONITOR_CmdClock(argc - 1, &argv[1], RESET);
                break;
            case 25:  /* clock.r */
                status = MONITOR_CmdClock(argc - 1, &argv[1], READ);
                break;
            case 26:  /* clock.w */
                status = MONITOR_CmdClock(argc - 1, &argv[1], WRITE);
                break;
            case 27:  /* sensor.r */
                status = MONITOR_CmdSensor(argc - 1, &argv[1], READ);
                break;
            case 28:  /* sensor.w */
                status = MONITOR_CmdSensor(argc - 1, &argv[1], WRITE);
                break;
            case 29:  /* volt.r */
                status = MONITOR_CmdVolt(argc - 1, &argv[1], READ);
                break;
            case 30:  /* volt.w */
                status = MONITOR_CmdVolt(argc - 1, &argv[1], WRITE);
                break;
            case 31:  /* bb.r */
                status = MONITOR_CmdBb(argc - 1, &argv[1], READ);
                break;
            case 32:  /* bb.w */
                status = MONITOR_CmdBb(argc - 1, &argv[1], WRITE);
                break;
            case 33:  /* cpu.r */
                status = MONITOR_CmdCpu(argc - 1, &argv[1], READ);
                break;
            case 34:  /* cpu.w */
                status = MONITOR_CmdCpu(argc - 1, &argv[1], WRITE);
                break;
            case 35:  /* ctrl.r */
                status = MONITOR_CmdCtrl(argc - 1, &argv[1], READ);
                break;
            case 36:  /* ctrl.w */
                status = MONITOR_CmdCtrl(argc - 1, &argv[1], WRITE);
                break;
            case 37:  /* ctrl.notify */
                status = MONITOR_CmdCtrl(argc - 1, &argv[1], NOTIFY);
                break;
            case 38:  /* extctrl.r */
                status = MONITOR_CmdExtCtrl(argc - 1, &argv[1], READ);
                break;
            case 39:  /* extctrl.w */
                status = MONITOR_CmdExtCtrl(argc - 1, &argv[1], WRITE);
                break;
            case 40:  /* md.b */
                status = MONITOR_CmdMd(argc - 1, &argv[1], BYTE);
                break;
            case 41:  /* md.w */
                status = MONITOR_CmdMd(argc - 1, &argv[1], WORD);
                break;
            case 42:  /* md.l */
                status = MONITOR_CmdMd(argc - 1, &argv[1], LONG);
                break;
            case 43:  /* mm.b */
                status = MONITOR_CmdMm(argc - 1, &argv[1], BYTE);
                break;
            case 44:  /* mm.w */
                status = MONITOR_CmdMm(argc - 1, &argv[1], WORD);
                break;
            case 45:  /* mm.l */
                status = MONITOR_CmdMm(argc - 1, &argv[1], LONG);
                break;
            case 46:  /* fuse.r */
                status = MONITOR_CmdFuse(argc - 1, &argv[1], READ);
                break;
            case 47:  /* fuse.w */
                status = MONITOR_CmdFuse(argc - 1, &argv[1], WRITE);
                break;
#ifdef BOARD_HAS_PMIC
            case 48:  /* pmic.r */
                status = MONITOR_CmdPmic(argc - 1, &argv[1], READ);
                break;
            case 49:  /* pmic.w */
                status = MONITOR_CmdPmic(argc - 1, &argv[1], WRITE);
                break;
#endif
            case 50:  /* idle */
                status = MONITOR_CmdIdle(argc - 1, &argv[1]);
                break;
            case 51:  /* assert */
                status = MONITOR_CmdAssert(argc - 1, &argv[1]);
                break;
            case 52:  /* syslog */
                status = MONITOR_CmdSyslog(argc - 1, &argv[1]);
                break;
            case 53:  /* group */
                status = MONITOR_CmdGroup(argc - 1, &argv[1]);
                break;
            case 54:  /* ssm */
                status = MONITOR_CmdSsm(argc - 1, &argv[1]);
                break;
            case 55:  /* custom */
                status = MONITOR_CmdCustom(argc - 1, &argv[1]);
                break;
            case 56:  /* test */
                status = MONITOR_CmdTest(argc - 1, &argv[1]);
                break;
#if defined(GCOV) && !defined(SIMU)
            case 57:  /* gcov */
                GCOV_InfoDump();
                break;
#endif
            default:
                status = SM_ERR_NOT_FOUND;
                break;
        }
    }

    /* Return status */
    return status;
}

/*==========================================================================*/

/*--------------------------------------------------------------------------*/
/* Info command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdInfo(int32_t argc, const char * const argv[])
{
    uint32_t buildNum = SM_BUILD;
    uint32_t buildCommit = SM_COMMIT;
    const rom_passover_t *passover;
    const uint8_t *siName;
    uint32_t deviceId;
    uint32_t siRev;
    uint32_t partNum;
    string cfgName;
    uint32_t mSel = 0U;

    printf("SM Version    = Build %u", buildNum);
    printf(", Commit %08x\n", buildCommit);

    /* Display the cfg info */
    cfgName = LMM_CfgInfoGet(&mSel);
    printf("SM Config     = %s, mSel=%u\n", cfgName, mSel);

    /* Get the board info */
    printf("Board         = %s, attr=0x%08X\n", BRD_SM_NAME, BRD_SM_ATTR);

    /* Get the silicon info */
    if (SM_SIINFOGET(&deviceId, &siRev, &partNum, (string*) &siName)
        == SM_ERR_SUCCESS)
    {
        printf("Silicon       = %s\n", siName);
    }

    /* Display ROM passover info */
    if (LMM_MiscRomPassoverGet(0U, &passover) == SM_ERR_SUCCESS)
    {
        const monitor_key_pair_t bootModePairs[] =
        {
            {4U,                   "fuse"},
            {DEV_SM_ROM_BM_USB,    "USB serial download"},
            {DEV_SM_ROM_BM_NORMAL, "normal"},
            {DEV_SM_ROM_BM_LOOP,   "infinite loop"},
            {DEV_SM_ROM_BM_TEST,   "test"}
        };
        const monitor_key_pair_t devTypePairs[] =
        {
            {6U,                         "preload"},
            {DEV_SM_ROM_BD_SD,           "SD"},
            {DEV_SM_ROM_BD_MMC,          "MMC"},
            {DEV_SM_ROM_BD_FLEXSPINAND,  "NAND FLEXSPI"},
            {DEV_SM_ROM_BD_FLEXSPINOR,   "NOR FLEXSPI"},
            {DEV_SM_ROM_BD_LPSPIEEPROM,  "EPROM LPSPI"},
            {DEV_SM_ROM_BD_USB,          "USB"}
        };
        const monitor_key_pair_t bootStagePairs[] =
        {
            {3U,                       "primary"},
            {DEV_SM_ROM_BS_SECONDARY,  "secondary"},
            {DEV_SM_ROM_BS_RECOVERY,   "recovery"},
            {DEV_SM_ROM_BS_SERIAL,     "serial"}
        };

        /* Display boot mode */
        printf("Boot mode     = %s\n", MONITOR_Key2Str(passover->bootMode,
            bootModePairs));

        /* Display boot device */
        printf("Boot device   = %s", MONITOR_Key2Str(passover->bootDevType,
            devTypePairs));
        if (passover->bootDevType != DEV_SM_ROM_BD_PRELOAD)
        {
            if ((passover->bootDevType == DEV_SM_ROM_BD_USB)
                && (passover->bootDevInst == 3U))
            {
                printf("%u", 1U);
            }
            else
            {
                printf("%u", passover->bootDevInst + 1U);
            }
        }
        printf("\n");

        /* Display boot stage */
        printf("Boot stage    = %s\n", MONITOR_Key2Str(passover->bootStage,
            bootStagePairs));

        /* Display container */
        printf("Boot set      = %d\n", passover->imgSetSel + 1U);
    }

#ifdef BOARD_HAS_PMIC
    uint8_t dev;
    uint8_t *val;
    uint8_t len;
    uint32_t idx = 0U;

    /* PMIC IDs */
    while (BRD_SM_PmicInfoGet(idx, &dev, &val, &len) == SM_ERR_SUCCESS)
    {
        printf("PMIC %u (0x%02X) = 0x%02X", idx, dev, val[0]);
        for (uint8_t i = 1U; i < len; i++)
        {
            printf(", 0x%02X", val[i]);
        }
        printf("\n");
        idx++;
    }
#endif

#if (defined(__GNUC__) && !defined(__DCC__))
    printf("Compiler      = gcc %s\n", __VERSION__);
#endif

    return SM_ERR_SUCCESS;
}

#ifdef DEVICE_HAS_ELE
/*--------------------------------------------------------------------------*/
/* ELE command                                                              */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdEle(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    static string cmds[] =
    {
        "info",
        "lifecycle",
        "events",
        "dump",
        "abort",
        "ext"
    };

    /* Parse argument */
    if (argc != 0)
    {
        int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
            argv[0]);

        switch (sub)
        {
            case 0:  /* info */
                status = MONITOR_CmdEleInfo(argc - 1, &argv[1]);
                break;
            case 1:  /* lifecycle */
                status = MONITOR_CmdEleLifecycle(argc - 1, &argv[1]);
                break;
            case 2:  /* events */
                status = MONITOR_CmdEleEvents(argc - 1, &argv[1]);
                break;
            case 3:  /* dump */
                ELE_DebugDump();
                break;
            case 4:  /* abort */
                ELE_Abort();
                break;
            case 5:  /* ext */
                status = MONITOR_CmdEleExt(argc - 1, &argv[1]);
                break;
            default:
                status = SM_ERR_INVALID_PARAMETERS;
                break;
        }

        if ((sub < (int32_t) ARRAY_SIZE(cmds))
            && (status != SM_ERR_SUCCESS))
        {
            printf("ELE err: 0x%X\n", ELE_ErrNumber());
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dump ELE info                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdEleInfo(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    uint32_t stat = 0U;
    bool rom = true;
    uint32_t commit = 0U;
    bool dirty = false;
    ele_info_t info = { 0 };

    ELE_FwStatusGet(&stat);

    if (g_eleStatus == SM_ERR_SUCCESS)
    {
        rom = (stat == 0U);
    }

    if (rom)
    {
        uint32_t id = 0U;

        /* Display ELE ROM version */
        ELE_RomIdGet(&id, &commit, &dirty);
        if (g_eleStatus == SM_ERR_SUCCESS)
        {
            printf("ELE ROM ID     = 0x%06X", id);
            if (dirty)
            {
                printf(" (dirty)");
            }
            printf(", Commit %08x\n", commit);
        }
    }
    else
    {
        uint32_t version = 0U;
        bool alt = false;
        bool auth = false;

        /* Display ELE FW version */
        ELE_FwVersionGet(&version, &commit, &dirty, &alt, &auth);
        if (g_eleStatus == SM_ERR_SUCCESS)
        {
            printf("ELE FW Version = Version %u.%u.%u",
                ELE_MAJOR_VER(version),
                ELE_MINOR_VER(version),
                ELE_PATCH_VER(version));
            if (dirty)
            {
                printf(" (dirty)");
            }
            if (alt)
            {
                printf(" (alt)");
            }
            if (!auth)
            {
                printf(" (not auth)");
            }
            printf(", Commit %08x\n", commit);
        }
    }

    ELE_InfoGet(&info);
    if (g_eleStatus == SM_ERR_SUCCESS)
    {
        /* Display SoC */
        printf("SoC            = %x, %x\n", info.socId, info.socRev);

        /* Display lifecycle */
        printf("Lifecycle      = 0x%04X\n", info.lifecycle);

        /* Display lifecycle */
        printf("SSSM State     = %u\n", info.sssmState);

        /* Display lifecycle */
        printf("Attest API Ver = %u\n", info.attestApiVer);

        /* Display TRNG state */
        printf("TRNG state     = 0x%X\n", info.trngState);

        /* Display CSAL state */
        printf("CSAL state     = 0x%X\n", info.csalState);

        /* Display IMEM state */
        printf("IMEM state     = 0x%X\n", info.imemState);

        /* Display UID */
        MONITOR_DumpLongHex("UID            = 0x", &info.uid[0], 4U);
    }

    /* Display ELE abort */
    if (ELE_IsAborted() != false)
    {
        printf("ELE Aborted\n");
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dump ELE ext                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdEleExt(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    ele_info_t info = { 0 };

    ELE_InfoGet(&info);
    if (g_eleStatus == SM_ERR_SUCCESS)
    {
        /* Display patch SHA256 */
        MONITOR_DumpLongHex("Patch SHA = 0x", &info.shaPatch[0], 8U);

        /* Display FW SHA256 */
        MONITOR_DumpLongHex("FW SHA    = 0x", &info.shaFw[0], 8U);

        /* Display patch SHA256 */
        MONITOR_DumpLongHex("OEM SRKH  = 0x", &info.oemSrkh[0], 16U);

        /* Display patch SHA256 */
        MONITOR_DumpLongHex("PQC SRKH  = 0x", &info.oemPqcSrkh[0], 16U);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Set ELE lifecycle                                                        */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdEleLifecycle(int32_t argc,
    const char * const argv[])
{
    int32_t status = SM_ERR_NOT_SUPPORTED;

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dump ELE events                                                          */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdEleEvents(int32_t argc, const char * const argv[])
{
    uint8_t idx = 0U;
    uint32_t event;

    event = ELE_EventGet(idx);
    while (g_eleStatus == SM_ERR_SUCCESS)
    {
        printf("ELE Event[%u] = 0x%08X\n",
            idx, event);

        idx++;

        event = ELE_EventGet(idx);
    }

    return SM_ERR_SUCCESS;
}

/*--------------------------------------------------------------------------*/
/* Dump a long array of words as one big hex number                         */
/*--------------------------------------------------------------------------*/
static void MONITOR_DumpLongHex(string str, uint32_t *ptr, uint32_t cnt)
{
    printf("%s", str);

    for (uint32_t idx = 0U; idx < cnt; idx++)
    {
        if ((idx != 0U) && ((idx % 8U) == 0U))
        {
            const char *p = str;

            printf("\n");

            /* Loop over string */
            while (*p != EOL)
            {
                printf(" ");
                p++;
            }
        }

        printf("%08X", ptr[idx]);
    }

    printf("\n");
}
#endif

#ifdef DEVICE_HAS_V2X
/*--------------------------------------------------------------------------*/
/* V2X commands (accessed through ELE)                                      */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdV2x(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    static string cmds[] =
    {
        "info",
        "ping",
    };

    /* Parse argument */
    if (argc != 0)
    {
        int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
            argv[0]);

        switch (sub)
        {
            case 0:  /* info */
                status = MONITOR_CmdV2xInfo(argc - 1, &argv[1]);
                break;
            case 1:  /* ping */
                status = MONITOR_CmdV2xPing(argc - 1, &argv[1]);
                break;
            default:
                status = SM_ERR_INVALID_PARAMETERS;
                break;
        }

        if ((sub < (int32_t) ARRAY_SIZE(cmds))
            && (status != SM_ERR_SUCCESS))
        {
            printf("ELE err: 0x%X\n", ELE_ErrNumber());
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dump V2X info                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdV2xInfo(int32_t argc, const char * const argv[])
{
    uint32_t status = SM_ERR_SUCCESS;
    uint32_t info = 0U, v2x_error = 0U;

    ELE_V2xInfoGet(&info, &v2x_error);
    if (g_eleStatus == SM_ERR_SUCCESS)
    {
        printf("V2X state:\n");
        if (info & 0x01U)
        {
            printf("  Auth request received\n");
        }
        if (info & 0x02U)
        {
            printf("  V2X provisioned successfully in normal mode\n");
        }
        if (info & 0x04U)
        {
            printf("  V2X provisioned successfully in debug mode\n");
        }
        if (info & 0x08U)
        {
            printf("  V2X auth ongoing\n");
        }
        if (info & 0x10U)
        {
            printf("  V2X auth successful\n");
        }
        if (info & 0x20U)
        {
            printf("  V2X auth failed\n");
        }
        if (info & 0x40U)
        {
            printf("  V2X crypto disabled\n");
        }
        if (info & 0x80U)
        {
            printf("  V2X double auth hash received\n");
        }
        if ((info & 0xFFU) == 0U)
        {
            printf(" Unknown\n");
        }

        printf("V2X err code: 0x%X\n", v2x_error);

        printf("V2X power state: ");
        switch ((info >> 8U) & 0xFFU)
        {
            case 1U:
                printf("on\n");
                break;
            case 2U:
                printf("low power\n");
                break;
            case 3U:
                printf("standby\n");
                break;
            case 4U:
                printf("off\n");
                break;
            default:
                printf("unknown (%d)\n", (info >> 8U) & 0xFFU);
                break;
        }
    }
    else
    {
        status = g_eleStatus;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Ping V2X via ELE                                                         */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdV2xPing(int32_t argc, const char * const argv[])
{
    uint32_t status = SM_ERR_SUCCESS;
    uint32_t info = 0U, v2x_error = 0U;

    ELE_V2xInfoGet(&info, &v2x_error);
    if ((g_eleStatus == SM_ERR_SUCCESS)
        && ((info & 0x6U) != 0U) /* V2X is provisioned */
        && (((info >> 8U) & 0xFFU) == 1U) /* V2X is on */
        && ((info & 0x10U) != 0U)) /* Auth successful */
    {
        ELE_V2xPing();
        if (g_eleStatus == SM_ERR_SUCCESS)
        {
            printf("V2X answered\n");
        }
        else
        {
            printf("No answer from V2X\n");
            status = g_eleStatus;
        }
    }
    else
    {
        printf("V2X is not provisioned/on/authenticated\n");
        status = g_eleStatus;
    }

    /* Return status */
    return status;
}
#endif

/*--------------------------------------------------------------------------*/
/* Error command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdErr(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    /* Dump errors */
    LMM_ErrorDump();

#ifdef DEVICE_HAS_TRDC
    /* Dump TRDC errors */
    status = MONITOR_CmdTrdcErr(argc - 1, &argv[1]);
#endif

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Btime command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdBtime(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t startTime = (uint32_t) g_bootTime[SM_BT_START];
    uint32_t subTime = (uint32_t) g_bootTime[SM_BT_SUB];

    /* Display SM start time */
    printf("SM start time: %uuS\n", startTime);

    /* Loop over LM */
    for (uint32_t lmId = 0U; lmId < SM_NUM_LM; lmId++)
    {
        uint64_t bt = LMM_BootTimeGet(lmId);

        /* Time recorded? */
        if (bt != 0ULL)
        {
            /* Display relative start time */
            printf("LM%u boot time: SM start + %uuS\n", lmId,
                (uint32_t) (bt - startTime - subTime));
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Reset reason command                                                     */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdReason(int32_t argc, const char * const argv[])
{
    lmm_rst_rec_t bootRec, shutdownRec;

    /* Get device status */
    LM_SystemReason(0U, &bootRec, &shutdownRec);

    /* Reset? */
    if ((bootRec.valid == shutdownRec.valid)
        && (bootRec.reason == shutdownRec.reason)
        && (bootRec.validErr == shutdownRec.validErr)
        && (bootRec.errId == shutdownRec.errId)
        && (bootRec.validOrigin == shutdownRec.validOrigin)
        && (bootRec.origin == shutdownRec.origin))
    {
        /* Print shutdown reason */
        BRD_SM_ResetRecordPrint("Reset:", shutdownRec);
    }
    else
    {
        /* Print boot reason */
        BRD_SM_ResetRecordPrint("Boot:    ", bootRec);

        /* Print shutdown reason */
        BRD_SM_ResetRecordPrint("Shutdown:", shutdownRec);
    }

    /* Return status */
    return SM_ERR_SUCCESS;
}

/*--------------------------------------------------------------------------*/
/* Shutdown command                                                         */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdShutdown(int32_t argc, const char * const argv[])
{
    bool graceful = false;

    if (argc > 0)
    {
        graceful = true;
    }

    /* Shutdown device */
    return LMM_SystemShutdown(0U, 0U, graceful, &g_swReason);
}

/*--------------------------------------------------------------------------*/
/* Reset command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdReset(int32_t argc, const char * const argv[])
{
    uint32_t status = SM_ERR_SUCCESS;
    uint32_t reason = 0U;
    lmm_rst_rec_t resetRec = g_swReason;
    bool graceful = false;

    /* Get reset type */
    if (argc > 0)
    {
        status = MONITOR_NameToId(argv[0], &reason,
            LMM_SystemReasonNameGet, SM_NUM_REASON);

        /* Update reason */
        if (status == SM_ERR_SUCCESS)
        {
            resetRec.reason = reason;
        }
    }

    /* Graceful? */
    if (argc > 1)
    {
        graceful = true;
    }

    /* Reset device */
    if (status == SM_ERR_SUCCESS)
    {
        status = LMM_SystemReset(0U, 0U, graceful, &resetRec);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Stage command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdStage(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t stage = DEV_SM_ROM_BS_PRIMARY;
    uint32_t container = 1U;

    static string const stageText[] =
    {
        "primary",
        "secondary",
        "recovery",
        "serial"
    };

    /* Parse stage */
    if (argc == 0)
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }
    else
    {
        int32_t sub = MONITOR_FindN(stageText, (int32_t)
            ARRAY_SIZE(stageText), argv[0]);

        switch (sub)
        {
            case 0:
                stage = DEV_SM_ROM_BS_PRIMARY;
                break;
            case 1:
                stage = DEV_SM_ROM_BS_SECONDARY;
                break;
            case 2:
                stage = DEV_SM_ROM_BS_RECOVERY;
                break;
            case 3:
                stage = DEV_SM_ROM_BS_SERIAL;
                break;
            default:
                status = SM_ERR_INVALID_PARAMETERS;
                break;
        }
    }

    /* Parse container */
    if ((status == SM_ERR_SUCCESS) && (argc > 1))
    {
        status = MONITOR_ConvU32(argv[1], &container);
    }

    /* Reset to stage and container */
    if (status == SM_ERR_SUCCESS)
    {
        status = SM_SYSTEMSTAGERESET(stage, container - 1U);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Suspend command                                                          */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdSuspend(int32_t argc, const char * const argv[])
{
    /* Suspend device (graceful) */
    return LMM_SystemSuspend(0U, 0U);
}

/*--------------------------------------------------------------------------*/
/* Wake command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdWake(int32_t argc, const char * const argv[])
{
    /* Suspend device (graceful) */
    return LMM_SystemWake(0U, 0U);
}

#ifdef BOARD_HAS_WDOG
/*--------------------------------------------------------------------------*/
/* Wdog command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdWdog(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    static string const cmds[] =
    {
        "warm",
        "cold",
        "irq",
        "off",
        "trigger",
        "fccu"
    };

    /* Parse argument */
    if (argc != 0)
    {
        int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
            argv[0]);

        switch (sub)
        {
            case 0:  /* warm */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_WARM);
                break;
            case 1:  /* cold */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_COLD);
                break;
            case 2: /* irq */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_IRQ);
                break;
            case 3:  /* off */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_OFF);
                break;
            case 4:  /* trigger */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_TRIGGER);
                break;
#ifdef BOARD_WDOG_MODE_FCCU
            case 5:  /* fccu */
                BOARD_WdogModeSet(BOARD_WDOG_MODE_FCCU);
                break;
#endif
            default:
                status = SM_ERR_INVALID_PARAMETERS;
                break;
        }
    }
    else
    {
        status = SM_ERR_INVALID_PARAMETERS;
    }

    /* Return status */
    return status;
}
#endif

/*--------------------------------------------------------------------------*/
/* Fault command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdFault(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    if (argc > 0)
    {
        uint32_t faultId;

        status = MONITOR_ConvU32(argv[0], &faultId);
        if (status == SM_ERR_SUCCESS)
        {
            status = LMM_FaultSet(0U, faultId, true);
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* LM command                                                               */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdLm(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t lm = s_lm;

    static string cmds[] =
    {
        "info",
        "default",
        "boot",
        "shutdown",
        "reset",
        "wake",
        "suspend",
        "reason",
        "power"
    };

    /* Check argument */
    if (argc != 0)
    {
        int32_t arg = 0;

        if (argc > 1)
        {
            int32_t temp_status = MONITOR_NameToId(argv[0], &lm,
                LMM_LmNameGet, SM_NUM_LM);
            if (temp_status == SM_ERR_SUCCESS)
            {
                arg++;
            }
            else
            {
                lm = s_lm;
            }
        }

        if (arg >= argc)
        {
            status = SM_ERR_MISSING_PARAMETERS;
        }
        else
        {
            bool graceful = false;

            int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
                argv[arg]);
            arg++;

            /* Graceful? */
            if (arg < argc)
            {
                graceful = true;
            }

            switch (sub)
            {
                case 0:  /* info */
                    status = MONITOR_CmdLmInfo(argc - arg, &argv[arg]);
                    break;
                case 1:  /* default */
                    s_lm = lm;
                    break;
                case 2:  /* boot */
                    status = LMM_SystemLmBoot(0U, 0U, lm, &g_swReason);
                    break;
                case 3:  /* shutdown */
                    status = LMM_SystemLmShutdown(0U, 0U, lm, graceful,
                        &g_swReason);
                    break;
                case 4:  /* reset */
                    status = MONITOR_CmdLmReset(argc - arg, &argv[arg],
                        lm);
                    break;
                case 5:  /* wake */
                    status = LMM_SystemLmWake(0U, 0U, lm);
                    break;
                case 6:  /* suspend */
                    status = LMM_SystemLmSuspend(0U, 0U, lm);
                    break;
                case 7:  /* reason */
                    status = MONITOR_CmdLmReason(argc - arg, &argv[arg],
                        lm);
                    break;
                case 8:  /* power */
                    status = LMM_SystemLmPowerOn(0U, 0U, lm);
                    break;
                default:
                    status = SM_ERR_INVALID_PARAMETERS;
                    break;
            }
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* LM info command                                                          */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdLmInfo(int32_t argc, const char * const argv[])
{
    /* Loop over all LM */
    for (uint32_t lm = 0U; lm < SM_NUM_LM; lm++)
    {
        int32_t status = SM_ERR_SUCCESS;
        string name;
        uint32_t state;
        int32_t errStatus;
        int32_t wName = 0;

        status = LMM_LmNameGet(0U, lm, &name, &wName);
        if (status == SM_ERR_SUCCESS)
        {
            status = LM_SystemLmStatus(0U, lm, &state, &errStatus);
        }

        if (status == SM_ERR_SUCCESS)
        {
            string const stateText[] =
            {
                "off",
                "on",
                "suspend",
                "powered"
            };

            printf("%03u: %*s = %s", lm, -wName, name, stateText[state]);

            if (errStatus != SM_ERR_SUCCESS)
            {
                printf(", err = %d", errStatus);
            }

            if (lm == s_lm)
            {
                printf(" (default)");
            }

            printf("\n");
        }
    }

    /* Return status */
    return SM_ERR_SUCCESS;
}

/*--------------------------------------------------------------------------*/
/* LM reset command                                                         */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdLmReset(int32_t argc, const char * const argv[],
    uint32_t lm)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t reason = 0U;
    lmm_rst_rec_t resetRec = g_swReason;
    bool graceful = false;

    /* Get reset type */
    if (argc > 0)
    {
        status = MONITOR_NameToId(argv[0], &reason,
            LMM_SystemReasonNameGet, SM_NUM_REASON);

        /* Update reason */
        if (status == SM_ERR_SUCCESS)
        {
            resetRec.reason = reason;
        }
    }

    /* Graceful? */
    if (argc > 1)
    {
        graceful = true;
    }

    /* Reset LM */
    if (status == SM_ERR_SUCCESS)
    {
        status = LMM_SystemLmReset(0U, 0U, lm, false, graceful, &resetRec);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* LM reset reason command                                                  */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdLmReason(int32_t argc, const char * const argv[],
    uint32_t lm)
{
    int32_t status;
    lmm_rst_rec_t bootRec, shutdownRec;

    /* Get LM status */
    status = LM_SystemLmReason(0U, lm, &bootRec, &shutdownRec);

    if (status == SM_ERR_SUCCESS)
    {
        /* Reset? */
        if ((bootRec.valid == shutdownRec.valid)
            && (bootRec.reason == shutdownRec.reason)
            && (bootRec.validErr == shutdownRec.validErr)
            && (bootRec.errId == shutdownRec.errId)
            && (bootRec.validOrigin == shutdownRec.validOrigin)
            && (bootRec.origin == shutdownRec.origin))
        {
            /* Print shutdown reason */
            BRD_SM_ResetRecordPrint("Reset:", shutdownRec);
        }
        else
        {
            /* Print boot reason */
            BRD_SM_ResetRecordPrint("Boot:    ", bootRec);

            /* Print shutdown reason */
            BRD_SM_ResetRecordPrint("Shutdown:", shutdownRec);
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Power command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdPower(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t domain = 0U; domain < SM_NUM_POWER;
                    domain++)
                {
                    string domainNameAddr;
                    string stateNameAddr;
                    uint8_t powerState;
                    int32_t wName = 0;

                    status = LMM_PowerDomainNameGet(s_lm, domain,
                        &domainNameAddr, &wName);
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_PowerStateGet(s_lm, domain,
                            &powerState);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_PowerStateNameGet(s_lm, powerState,
                            &stateNameAddr, NULL);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        printf("%03u: %*s = %s\n", domain, -wName,
                            domainNameAddr, stateNameAddr);
                    }
                    MONITOR_Yield();
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t domain = 0U;
                uint32_t powerState;

                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &domain,
                        LMM_PowerDomainNameGet, SM_NUM_POWER);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    status = MONITOR_NameToId(argv[1], &powerState,
                        LMM_PowerStateNameGet, SM_NUM_POWER_STATE);
                }

                /* Set power state */
                if (status == SM_ERR_SUCCESS)
                {
                    status = LMM_PowerStateSet(s_lm, domain,
                        (uint8_t) powerState);
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Perf command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdPerf(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t domain = 0U; domain < SM_NUM_PERF;
                    domain++)
                {
                    string perfName;
                    uint32_t perfLevel;
                    dev_sm_perf_desc_t desc;
                    int32_t wName = 0;

                    status = LMM_PerfNameGet(s_lm, domain, &perfName,
                        &wName);
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_PerfLevelGet(s_lm, domain, &perfLevel);
                    }
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_PerfDescribe(s_lm, domain, perfLevel,
                            &desc);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        printf("%03u: %*s = %u (%7ukHz)\n", domain, -wName,
                            perfName, perfLevel, desc.value);
                    }
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t domain = 0U;

                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &domain,
                        LMM_PerfNameGet, SM_NUM_PERF);
                }

                /* Set performance level */
                if (status == SM_ERR_SUCCESS)
                {
                    errno = 0;
                    uint32_t perfLevel = strtoul(argv[1], NULL, 0);
                    if (errno == 0)
                    {
                        status = LMM_PerfLevelSet(s_lm, domain, perfLevel,
                            false);
                    }
                    else
                    {
                        status = SM_ERR_INVALID_PARAMETERS;
                    }
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Clock command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdClock(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                if (argc < 1)
                {
                    for (uint32_t clockId = 0U; clockId < SM_NUM_CLOCK;
                        clockId++)
                    {
                        string clockNameAddr;
                        uint64_t rate;
                        bool enabled = false;
                        int32_t wName = 0;

                        status = LMM_ClockNameGet(s_lm, clockId,
                            &clockNameAddr, &wName);
                        if (status == SM_ERR_SUCCESS)
                        {
                            status = LMM_ClockRateGet(s_lm, clockId,
                                &rate);
                        }
                        if (status == SM_ERR_SUCCESS)
                        {
                            status = LMM_ClockIsEnabled(s_lm, clockId,
                                &enabled);
                        }

                        if (status == SM_ERR_SUCCESS)
                        {
                            uint32_t enb = (enabled ? 1U : 0U);
                            string const displayModes[] =
                            {
                                "off",
                                "on"
                            };

                            if (SM_UINT64_H(rate) == 0U)
                            {
                                printf("%03u: %*s = %3s, %10uHz\n", clockId,
                                    -wName, clockNameAddr,
                                    displayModes[enb],
                                    SM_UINT64_L(rate));
                            }
                            else
                            {
                                printf("%03u: %*s = %3s, %10sHz\n",
                                    clockId,
                                    -wName, clockNameAddr,
                                    displayModes[enb],
                                    ">4G");
                            }
                        }
                        if (MONITOR_CharPending())
                        {
                            break;
                        }
                        MONITOR_Yield();
                    }
                }
                else
                {
                    string const subCmds[] =
                    {
                        "range",
                        "parent",
                        "ext"
                    };

                    uint8_t subCmd = (uint8_t) MONITOR_Find(subCmds,
                        (int32_t) ARRAY_SIZE(subCmds), argv[0]);

                    switch (subCmd)
                    {
                        /* range/parent */
                        case 0:
                        case 1:
                            for (uint32_t clockId = 0U; clockId < SM_NUM_CLOCK;
                                clockId++)
                            {
                                string clockNameAddr;
                                int32_t wName = 0;

                                status = LMM_ClockNameGet(s_lm, clockId,
                                    &clockNameAddr, &wName);

                                if (status == SM_ERR_SUCCESS)
                                {
                                    if (subCmd == 0U)
                                    {
                                        dev_sm_clock_range_t range;
                                        status = LMM_ClockDescribe(s_lm,
                                            clockId, &range);

                                        if (status == SM_ERR_SUCCESS)
                                        {
                                            uint32_t maxKHz = SM_UINT64_L(
                                                range.highestRate/1000UL);
                                            uint32_t minKHz = SM_UINT64_L(
                                                range.lowestRate/1000UL);
                                            printf("%03u: %*s MAX = %7uKHz,"
                                                " MIN = %7uKHz\n", clockId,
                                                -wName, clockNameAddr, maxKHz,
                                                minKHz);
                                        }
                                    }
                                    else
                                    {
                                        uint32_t parent;
                                        status = LMM_ClockParentGet(s_lm,
                                            clockId, &parent);

                                        if (status == SM_ERR_SUCCESS)
                                        {
                                            string parentNameAddr;
                                            if (LMM_ClockNameGet(s_lm, parent,
                                                &parentNameAddr, NULL)
                                                == SM_ERR_SUCCESS)
                                            {
                                                printf("%03u: %*s parent "
                                                    "= %u (%s)\n",
                                                    clockId, -wName,
                                                    clockNameAddr, parent,
                                                    parentNameAddr);
                                            }
                                        }
                                    }
                                }
                            }
                            break;

                        /* ext */
                        case 2:
                            {
                                errno = 0;
                                uint32_t ext = 0x80U;
                                if (argc > 1)
                                {
                                    ext = strtoul(argv[1], NULL, 0);
                                }

                                if (errno == 0)
                                {
                                    for (uint32_t clockId = 0U;
                                        clockId < SM_NUM_CLOCK; clockId++)
                                    {
                                        uint32_t extCfgValue = 0U;

                                        status = LMM_ClockExtendedGet(s_lm,
                                            clockId, ext, &extCfgValue);

                                        if (status == SM_ERR_SUCCESS)
                                        {
                                            string clockNameAddr;
                                            int32_t wName = 0;

                                            status = LMM_ClockNameGet(s_lm,
                                                clockId, &clockNameAddr,
                                                &wName);

                                            printf("%03u: %*s = 0x%08X \n",
                                                clockId, -wName, clockNameAddr,
                                                extCfgValue);
                                        }
                                    }
                                    status = SM_ERR_SUCCESS;
                                }
                                else
                                {
                                    status = SM_ERR_INVALID_PARAMETERS;
                                }
                            }
                            break;

                        default:
                            status = SM_ERR_INVALID_PARAMETERS;
                            break;
                    }
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t clockId = 0U;

                string const clockModes[] =
                {
                    "off",
                    "on",
                    "reparent",
                    "rate",
                    "ext"
                };


                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &clockId,
                        LMM_ClockNameGet, SM_NUM_CLOCK);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    uint8_t clockMode = (uint8_t) MONITOR_Find(clockModes,
                        (int32_t) ARRAY_SIZE(clockModes), argv[1]);

                    switch (clockMode)
                    {
                        /* on/off */
                        case 0:
                        case 1:
                            /* Enable clock */
                            status = LMM_ClockEnable(s_lm, clockId,
                                (clockMode != 0U));
                            break;

                        /* reparent */
                        case 2:
                            if (argc == 3)
                            {
                                errno = 0;
                                uint32_t parent = strtoul(argv[2], NULL, 0);
                                if (errno == 0)
                                {
                                    status = LMM_ClockParentSet(s_lm,
                                        clockId, parent);
                                }
                                else
                                {
                                    status = SM_ERR_INVALID_PARAMETERS;
                                }
                            }
                            else
                            {
                                status = SM_ERR_MISSING_PARAMETERS;
                            }
                            break;

                        /* rate */
                        case 3:
                            if (argc < 3)
                            {
                                status = SM_ERR_MISSING_PARAMETERS;
                            }
                            else
                            {
                                uint64_t rate;

                                status = MONITOR_ConvU64(argv[2], &rate);
                                if (status == SM_ERR_SUCCESS)
                                {
                                    uint32_t roundRule = DEV_SM_CLOCK_ROUND_DOWN;

                                    if (argc > 3)
                                    {
                                        string const roundRules[] =
                                        {
                                            "down",
                                            "up",
                                            "auto"
                                        };

                                        roundRule = (uint32_t) MONITOR_Find(
                                            roundRules, 3, argv[3]);

                                        if (roundRule >= 3U)
                                        {
                                            status = SM_ERR_INVALID_PARAMETERS;
                                        }
                                    }

                                    if (status == SM_ERR_SUCCESS)
                                    {
                                        /* Set clock rate */
                                        status = LMM_ClockRateSet(s_lm,
                                            clockId, rate, roundRule);
                                    }
                                }
                            }
                            break;

                        /* ext */
                        case 4:
                            if (argc == 4)
                            {
                                errno = 0;
                                uint32_t ext = strtoul(argv[2], NULL, 0);

                                if (errno == 0)
                                {
                                    uint32_t extConfigValue = strtoul(argv[3],
                                        NULL, 0);

                                    if (errno == 0)
                                    {
                                        status = LMM_ClockExtendedSet(s_lm,
                                            clockId, ext, extConfigValue);
                                    }
                                    else
                                    {
                                        status = SM_ERR_INVALID_PARAMETERS;
                                    }
                                }
                                else
                                {
                                    status = SM_ERR_INVALID_PARAMETERS;
                                }

                            }
                            else
                            {
                                status = SM_ERR_MISSING_PARAMETERS;
                            }
                            break;

                        default:
                            status = SM_ERR_INVALID_PARAMETERS;
                            break;

                    }
                }
            }
            break;

        case RESET:  /* reset */
            {
                uint32_t clockId = 0U;

                if (argc < 1)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &clockId,
                        LMM_ClockNameGet, SM_NUM_CLOCK);
                }

                /* Reset clock */
                if (status == SM_ERR_SUCCESS)
                {
                    status = LMM_ClockReset(s_lm, clockId);
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Sensor command                                                           */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdSensor(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    string const sensorModes[] =
    {
        "off",
        "on"
    };

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t sensor = 0U; sensor < SM_NUM_SENSOR; sensor++)
                {
                    string sensorNameAddr;
                    dev_sm_sensor_desc_t desc;
                    int64_t sensorValue;
                    uint64_t sensorTimestamp;
                    bool enabled = false;
                    bool timestampReporting;
                    int32_t wName = 0;

                    status = LMM_SensorNameGet(s_lm, sensor,
                        &sensorNameAddr, &wName);
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_SensorDescribe(s_lm, sensor,
                            &desc);
                    }
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_SensorIsEnabled(s_lm, sensor,
                            &enabled, &timestampReporting);
                    }
                    if (status == SM_ERR_SUCCESS)
                    {
                        if (enabled)
                        {
                            status = LMM_SensorReadingGet(s_lm, sensor,
                                &sensorValue, &sensorTimestamp);

                            if (status == SM_ERR_SUCCESS)
                            {
                                int64_t exponent = 1;
                                int64_t sensorWhole;
                                int64_t sensorFrac;

                                /* Calculate exponent factor */
                                if (desc.sensorExponent > 0)
                                {
                                    while (desc.sensorExponent > 0)
                                    {
                                        exponent *= 10;
                                        desc.sensorExponent--;
                                    }
                                    sensorWhole = sensorValue * exponent;
                                    sensorFrac = 0;
                                }
                                else
                                {
                                    while (desc.sensorExponent < 0)
                                    {
                                        exponent *= 10;
                                        desc.sensorExponent++;
                                    }
                                    sensorWhole = sensorValue / exponent;
                                    sensorFrac = sensorValue % exponent;
                                    sensorFrac = (sensorFrac < 0) ? -sensorFrac
                                        : sensorFrac;
                                }

                                /* Print status */
                                int32_t sensorWhole32 = (int32_t) sensorWhole;
                                int32_t sensorFrac32 = (int32_t) sensorFrac;
                                printf("%03u: %*s = %s, %d.%dC\n",
                                    sensor, -wName,
                                    sensorNameAddr, sensorModes[1],
                                    sensorWhole32, sensorFrac32);
                            }
                        }
                        else
                        {
                            printf("%03u: %*s = %s\n", sensor, -wName,
                                sensorNameAddr, sensorModes[0]);
                        }
                    }
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t sensor = 0U;
                int32_t enable = 0;

                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &sensor,
                        LMM_SensorNameGet, SM_NUM_SENSOR);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    enable = MONITOR_Find(sensorModes, 2, argv[1]);
                }
                if (enable == 2)
                {
                    status = SM_ERR_INVALID_PARAMETERS;
                }
                else
                {
                    /* Enable sensor */
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_SensorEnable(s_lm, sensor, (enable
                            != 0), false);
                    }
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Volt command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdVolt(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t domain = 0U; domain < SM_NUM_VOLT;
                    domain++)
                {
                    string voltName;
                    int32_t voltLevel;
                    uint8_t voltMode;
                    string modeNameAddr;
                    int32_t wName = 0;
                    int32_t wMode = 0;

                    status = LMM_VoltageNameGet(s_lm, domain, &voltName,
                        &wName);
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_VoltageLevelGet(s_lm, domain,
                            &voltLevel);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_VoltageModeGet(s_lm, domain,
                            &voltMode);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_VoltageModeNameGet(s_lm, voltMode,
                            &modeNameAddr, &wMode);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        printf("%03u: %*s = %*s, %7duV\n", domain, -wName,
                            voltName, wMode, modeNameAddr, voltLevel);
                    }
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t domain = 0U;

                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &domain,
                        LMM_VoltageNameGet, SM_NUM_VOLT);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    uint32_t voltMode;

                    status = MONITOR_NameToId(argv[1], &voltMode,
                        LMM_VoltageModeNameGet, SM_NUM_VOLT_MODE);

                    /* Set voltage mode */
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_VoltageModeSet(s_lm, domain,
                            (uint8_t) voltMode);
                    }
                    else
                    {
                        int32_t voltLevel;

                        status = MONITOR_ConvI32(argv[1], &voltLevel);
                        if (status == SM_ERR_SUCCESS)
                        {
                            status = LMM_VoltageLevelSet(s_lm, domain,
                                voltLevel);
                        }
                    }
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* BBNSM command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdBb(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    static string cmds[] =
    {
        "rtc",
        "ticks",
        "gpr",
    };

    /* Parse argument */
    if (argc != 0)
    {
        int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
            argv[0]);

        switch (sub)
        {
            case 0:  /* rtc */
                status = MONITOR_CmdBbRtc(argc - 1, &argv[1], rw);
                break;
            case 1:  /* lifecycle */
                status = MONITOR_CmdBbTicks(argc - 1, &argv[1], rw);
                break;
            case 2:  /* events */
                status = MONITOR_CmdBbGpr(argc - 1, &argv[1], rw);
                break;
            default:
                status = SM_ERR_INVALID_PARAMETERS;
                break;
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* BBNSM RTC command                                                        */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdBbRtc(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Parse argument */
    if (rw == READ)
    {
        for (uint32_t rtcId = 0U; rtcId < SM_NUM_RTC; rtcId++)
        {
            string rtcName;
            uint64_t sec;
            int32_t wName = 0;

            status = LMM_BbmRtcNameGet(s_lm, rtcId, &rtcName, &wName);
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmRtcTimeGet(s_lm, rtcId, &sec, false);
            }

            if (status == SM_ERR_SUCCESS)
            {
                uint32_t state = 0U;

                printf("%03u: %*s = %u seconds", rtcId, -wName,
                    rtcName, SM_UINT64_L(sec));

                status = LMM_BbmRtcStateGet(s_lm, rtcId, &state);

                if (status == SM_ERR_SUCCESS)
                {
                    if ((state & LMM_BBM_STATE_RESET) != 0U)
                    {
                        printf (" (reset)");
                    }
                    if ((state & LMM_BBM_STATE_BATT_LOW) != 0U)
                    {
                        printf (" (batt)");
                    }
                }

                printf ("\n");
            }
            status = SM_ERR_SUCCESS;
        }
    }
    else
    {
        uint32_t rtcId = 0U;

        if (argc >= 2)
        {
            status = MONITOR_NameToId(argv[0], &rtcId,
                LMM_BbmRtcNameGet, SM_NUM_RTC);
        }
        else
        {
            status = SM_ERR_MISSING_PARAMETERS;
        }

        if (status == SM_ERR_SUCCESS)
        {
            uint64_t sec;

            status = MONITOR_ConvU64(argv[1], &sec);
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmRtcTimeSet(s_lm, rtcId, sec, false);
            }
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* BBNSM Ticks command                                                      */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdBbTicks(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Parse argument */
    if (rw == READ)
    {
        for (uint32_t rtcId = 0U; rtcId < SM_NUM_RTC; rtcId++)
        {
            string rtcName;
            uint64_t ticks;
            int32_t wName = 0;

            status = LMM_BbmRtcNameGet(s_lm, rtcId, &rtcName, &wName);
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmRtcTimeGet(s_lm, rtcId, &ticks, true);
            }

            if (status == SM_ERR_SUCCESS)
            {
                printf("%03u: %*s = %u ticks\n", rtcId, -wName,
                    rtcName, SM_UINT64_L(ticks));
            }
            status = SM_ERR_SUCCESS;
        }
    }
    else
    {
        uint32_t rtcId = 0U;

        if (argc >= 2)
        {
            status = MONITOR_NameToId(argv[0], &rtcId,
                LMM_BbmRtcNameGet, SM_NUM_RTC);
        }
        else
        {
            status = SM_ERR_MISSING_PARAMETERS;
        }

        if (status == SM_ERR_SUCCESS)
        {
            uint64_t ticks;

            status = MONITOR_ConvU64(argv[1], &ticks);
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmRtcTimeSet(s_lm, rtcId, ticks, true);
            }
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* BBNSM GPR command                                                        */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdBbGpr(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    if (rw == READ)
    {
        uint32_t gprIdx = 0U;
        uint32_t gprVal = 0U;

        if (argc == 0)
        {
            while (LMM_BbmGprGet(s_lm, gprIdx, &gprVal) == SM_ERR_SUCCESS)
            {
                printf("   GPR[%u] = 0x%x\n", gprIdx, gprVal);
                gprIdx++;
            }
        }
        else
        {
            status = MONITOR_ConvU32(argv[0], &gprIdx);
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmGprGet(s_lm, gprIdx, &gprVal);
            }

            if (status == SM_ERR_SUCCESS)
            {
                printf("   GPR[%u] = 0x%x\n", gprIdx, gprVal);
            }
        }
    }
    else
    {
        if (argc >= 2)
        {
            uint32_t gprIdx;
            uint32_t gprVal;

            status = MONITOR_ConvU32(argv[0], &gprIdx);
            if (status == SM_ERR_SUCCESS)
            {
                status = MONITOR_ConvU32(argv[1], &gprVal);
            }

            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_BbmGprSet(s_lm, gprIdx, gprVal);
            }
        }
        else
        {
            status = SM_ERR_MISSING_PARAMETERS;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* CPU command                                                              */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdCpu(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t cpuId = 0U; cpuId < SM_NUM_CPU;
                    cpuId++)
                {
                    string cpuNameAddr;
                    uint32_t runMode, sleepMode;
                    uint64_t vector;
                    int32_t wName = 0;

                    status = LMM_CpuNameGet(s_lm, cpuId,
                        &cpuNameAddr, &wName);

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_CpuInfoGet(s_lm, cpuId, &runMode,
                            &sleepMode, &vector);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        string const runModes[] =
                        {
                            "RUN",
                            "WAIT",
                            "STOP",
                            "SLEEP"
                        };

                        string const sleepModes[] =
                        {
                            "RUN",
                            "WAIT",
                            "STOP",
                            "SUSP"
                        };

                        printf("%03u: %*s => run-mode = %5s, slp-mode = %4s, vector = 0x%08X_%08X\n",
                            cpuId, -wName, cpuNameAddr,
                            runModes[runMode], sleepModes[sleepMode],
                            SM_UINT64_H(vector), SM_UINT64_L(vector));
                    }
                    else
                    {
                        /* Swallow errors cluster-level CPU instances */
                        status = SM_ERR_SUCCESS;
                    }
                }
            }
            break;
        case WRITE:  /* write */
            {
                uint32_t cpuId = 0U;

                if (argc < 2)
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
                else
                {
                    status = MONITOR_NameToId(argv[0], &cpuId,
                        LMM_CpuNameGet, SM_NUM_CPU);
                }

                if (status == SM_ERR_SUCCESS)
                {
                    string const subCmds[] =
                    {
                        "start",
                        "hold",
                        "stop",
                        "vector"
                    };

                    uint8_t subCmd = (uint8_t) MONITOR_Find(subCmds,
                        (int32_t) ARRAY_SIZE(subCmds), argv[1]);

                    switch (subCmd)
                    {
                        /* start */
                        case 0U:
                            status = LMM_CpuStart(s_lm, cpuId);
                            break;

                        /* hold */
                        case 1U:
                            status = LMM_CpuHold(s_lm, cpuId);
                            break;

                        /* stop */
                        case 2U:
                            status = LMM_CpuStop(s_lm, cpuId);
                            break;

                        /* vector */
                        case 3U:
                            {
                                uint64_t resetVector;
                                status = MONITOR_ConvU64(argv[2],
                                    &resetVector);
                                if (status == SM_ERR_SUCCESS)
                                {
                                    status = LMM_CpuResetVectorSet(s_lm,
                                        cpuId, resetVector, true, true,
                                        true,false);
                                }
                            }
                            break;

                        default:
                            status = SM_ERR_INVALID_PARAMETERS;
                            break;
                    }
                }
                else
                {
                    status = SM_ERR_INVALID_PARAMETERS;
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Ctrl command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdCtrl(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            {
                for (uint32_t ctrl = 0U; ctrl < SM_NUM_CTRL;
                    ctrl++)
                {
                    uint32_t numRtn = 0U;
                    uint32_t rtn[24];

                    status = LMM_MiscControlGet(s_lm, ctrl, &numRtn, rtn);
                    if (status == SM_ERR_SUCCESS)
                    {
                        if (ctrl < DEV_SM_NUM_CTRL)
                        {
                            printf("0x%04X:", ctrl);
                        }
                        else
                        {
                            printf("0x%04X:", (ctrl
                                - (uint32_t) DEV_SM_NUM_CTRL)
                                | LMM_CTRL_FLAG_BRD);
                        }
                        for (uint32_t idx = 0U; idx < numRtn; idx++)
                        {
                            printf(" 0x%08X", rtn[idx]);
                        }
                        printf("\n");
                    }
                    status = SM_ERR_SUCCESS;
                }
            }
            break;
        case WRITE:  /* write */
            {
                if (argc >= 2)
                {
                    uint32_t ctrl;
                    uint32_t numVal = 0U;
                    uint32_t val[24] = { 0 };

                    status = MONITOR_ConvU32(argv[0], &ctrl);

                    if ((ctrl & LMM_CTRL_FLAG_BRD) != 0U)
                    {
                        ctrl &= ~LMM_CTRL_FLAG_BRD;
                        ctrl += DEV_SM_NUM_CTRL;
                    }

                    while ((status == SM_ERR_SUCCESS) && (numVal <
                        ((uint32_t) argc) - 1U))
                    {
                        status = MONITOR_ConvU32(argv[numVal + 1U],
                            &val[numVal]);
                        numVal++;
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_MiscControlSet(s_lm, ctrl, numVal,
                            val);
                    }

                }
                else
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
            }
            break;
        case NOTIFY:  /* notify */
            {
                if (argc >= 2)
                {
                    uint32_t ctrl;
                    uint32_t flags;

                    status = MONITOR_ConvU32(argv[0], &ctrl);
                    if (status == SM_ERR_SUCCESS)
                    {
                        status = MONITOR_ConvU32(argv[1], &flags);
                    }

                    if (status == SM_ERR_SUCCESS)
                    {
                        status = LMM_MiscControlFlagsSet(s_lm, ctrl,
                            flags);
                    }
                }
                else
                {
                    status = SM_ERR_MISSING_PARAMETERS;
                }
            }
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Extctrl command                                                          */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdExtCtrl(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    if (argc >= 2)
    {
        uint32_t ctrl;
        uint32_t addr;
        uint32_t len = 0U;
        uint32_t val[24];

        /* Get control */
        status = MONITOR_ConvU32(argv[0], &ctrl);

        if (status == SM_ERR_SUCCESS)
        {
            /* Convert control */
            if ((ctrl & LMM_CTRL_FLAG_BRD) != 0U)
            {
                ctrl &= ~LMM_CTRL_FLAG_BRD;
                ctrl += DEV_SM_NUM_CTRL;
            }

            /* Get address */
            status = MONITOR_ConvU32(argv[1], &addr);
        }

        if (rw == READ)
        {
            if (argc != 3)
            {
                status = SM_ERR_MISSING_PARAMETERS;
            }

            if (status == SM_ERR_SUCCESS)
            {
                /* Get length */
                status = MONITOR_ConvU32(argv[2], &len);
            }

            if (status == SM_ERR_SUCCESS)
            {
                /* Read data */
                status = LMM_MiscControlExtGet(s_lm, ctrl, addr,
                    len, val);
            }

            if (status == SM_ERR_SUCCESS)
            {
                if (ctrl < DEV_SM_NUM_CTRL)
                {
                    printf("0x%04X:", ctrl);
                }
                else
                {
                    printf("0x%04X:", (ctrl
                        - (uint32_t) DEV_SM_NUM_CTRL)
                        | LMM_CTRL_FLAG_BRD);
                }
                for (uint32_t idx = 0U; idx < len; idx++)
                {
                    printf(" 0x%02X", val[idx]);
                }
                printf("\n");
            }
        }
        else
        {
            /* Get data */
            while ((status == SM_ERR_SUCCESS) && (len <
                ((uint32_t) argc) - 2U))
            {
                status = MONITOR_ConvU32(argv[len + 2U],
                    &val[len]);
                len++;
            }

            /* Write to control */
            if (status == SM_ERR_SUCCESS)
            {
                status = LMM_MiscControlExtSet(s_lm, ctrl, addr,
                    len, val);
            }
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Memory dump command                                                      */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdMd(int32_t argc, const char * const argv[],
    int32_t len)
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t count = 64U / (uint32_t) len;

    /* Parse first argument */
    if (argc != 0)
    {
        errno = 0;
        uint32_t addr = strtoul(argv[0], NULL, 0);
        if (errno != 0)
        {
            addr = 0x80000000UL;
        }

        /* Parse second argument */
        if (argc > 1)
        {
            errno = 0;
            count = strtoul(argv[1], NULL, 0);
            if (errno != 0)
            {
                count = 64U / (uint32_t) len;
            }
        }

        switch (len)
        {
            case BYTE:
                {
                    uint8_t *x = (uint8_t*) addr;

                    for (uint32_t i = 0U; i < count; i++)
                    {
                        if ((i % 16U) == 0U)
                        {
                            printf("%08x: ", (uint32_t) x);
                        }

                        uint8_t v = 0U;
                        if (SystemMemoryProbe(x, &v, 8U) == 0U)
                        {
                            printf("%02x ", v);
                        }
                        else
                        {
                            printf("?? ");
                        }
                        x++;

                        if (((i+1U) % 16U) == 0U)
                        {
                            printf("\n");
                            if (MONITOR_CharPending())
                            {
                                break;
                            }
                            MONITOR_Yield();
                        }
                    }
                }
                break;
            case WORD:
                {
                    uint16_t *x = (uint16_t*) (addr & ~0x1U);

                    for (uint32_t i = 0U; i < count; i++)
                    {
                        if ((i % 8U) == 0U)
                        {
                            printf("%08x: ", (uint32_t) x);
                        }

                        uint16_t v = 0U;
                        if (SystemMemoryProbe(x, &v, 16U) == 0U)
                        {
                            printf("%04x ", v);
                        }
                        else
                        {
                            printf("???? ");
                        }
                        x++;

                        if (((i+1U) % 8U) == 0U)
                        {
                            printf("\n");
                            if (MONITOR_CharPending())
                            {
                                break;
                            }
                            MONITOR_Yield();
                        }
                    }
                }
                break;
            default:  /* LONG */
                {
                    uint32_t *x = (uint32_t*) (addr & ~0x3U);

                    for (uint32_t i = 0U; i < count; i++)
                    {
                        if ((i % 4U) == 0U)
                        {
                            printf("%08x: ", (uint32_t) x);
                        }

                        uint32_t v = 0U;
                        if (SystemMemoryProbe(x, &v, 32U) == 0U)
                        {
                            printf("%08x ", v);
                        }
                        else
                        {
                            printf("???????? ");
                        }
                        x++;

                        if (((i+1U) % 4U) == 0U)
                        {
                            printf("\n");
                            if (MONITOR_CharPending())
                            {
                                break;
                            }
                            MONITOR_Yield();
                        }
                    }
                }
                break;
        }
        if ((count % (16U / ((uint32_t) len))) != 0U)
        {
            printf("\n");
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Memory modify command                                                    */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdMm(int32_t argc, const char * const argv[],
    int32_t len)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Parse arguments */
    if (argc >= 2)
    {
        errno = 0;
        uint32_t addr = strtoul(argv[0], NULL, 0);
        if (errno != 0)
        {
            addr = 0x80000000UL;
        }

        errno = 0;
        uint32_t data = strtoul(argv[1], NULL, 0);
        if (errno != 0)
        {
            data = 0UL;
        }

        switch (len)
        {
            case BYTE:
                {
                    uint8_t v = 0U;
                    if (SystemMemoryProbe((void *) addr, &v, 8U) == 0U)
                    {
                        *((uint8_t*) addr) = (uint8_t)(data);
                    }
                    else
                    {
                        status = SM_ERR_DENIED;
                    }
                }
                break;
            case WORD:
                {
                    uint16_t v = 0U;
                    if (SystemMemoryProbe((void *) addr, &v, 16U) == 0U)
                    {
                        *((uint16_t*) addr) = (uint16_t)(data);
                    }
                    else
                    {
                        status = SM_ERR_DENIED;
                    }
                }
                break;
            default:  /* LONG */
                {
                    uint32_t v = 0U;
                    if (SystemMemoryProbe((void *) addr, &v, 32U) == 0U)
                    {
                        *((uint32_t*) addr) = (uint32_t)(data);
                    }
                    else
                    {
                        status = SM_ERR_DENIED;
                    }
                }
                break;
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Fuse command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdFuse(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Parse argument */
    if (argc >= 1)
    {
        uint32_t word;
        uint32_t addr;
        uint32_t data;

        /* Parse parameters */
        errno = 0;
        word = strtoul(argv[0], NULL, 0);
        if (errno != 0)
        {
            word = 0U;
        }

        /* Get fuse word address */
        status = DEV_SM_FuseInfoGet(word, &addr);

        if (status == SM_ERR_SUCCESS)
        {
            switch (rw)
            {
                default:  /* read */
                    {
                        /* Read fuse word directly */
                        if (SystemMemoryProbe((const void *) addr, &data, 32U) != 0U)
                        {
#ifdef DEVICE_HAS_ELE
                            /* Read fuse word via ELE */
                            ELE_FuseRead(word, &data);
                            status = g_eleStatus;
#else
                            status = SM_ERR_INVALID_PARAMETERS;
#endif
                        }

                        if (status == SM_ERR_SUCCESS)
                        {
                            printf("Fuse[%u] = 0x%08x\n", word, data);
                        }
                    }
                    break;
                case WRITE:  /* write */
                    {
#ifdef DEVICE_HAS_ELE
                        /* Check arguments */
                        if (argc >= 2)
                        {
                            /* Parse data */
                            data = strtoul(argv[1], NULL, 0);

                            /* Write fuse */
                            ELE_FuseWrite(word, data, false);
                            status = g_eleStatus;
                        }
                        else
                        {
                            status = SM_ERR_MISSING_PARAMETERS;
                        }
#else
                        status = SM_ERR_NOT_SUPPORTED;
#endif
                    }
                    break;
            }
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

#ifdef BOARD_HAS_PMIC
/*--------------------------------------------------------------------------*/
/* PMIC command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdPmic(int32_t argc, const char * const argv[],
    int32_t rw)
{
    int32_t status = SM_ERR_SUCCESS;

    switch (rw)
    {
        default:  /* read */
            if (argc < 1)
            {
                status = SM_ERR_MISSING_PARAMETERS;
            }
            else
            {
                errno = 0;
                uint8_t dev = (uint8_t) strtoul(argv[0], NULL, 0);
                if (errno != 0)
                {
                    dev = 0U;
                }

                uint8_t reg = 0U;
                uint8_t val = 0U;

                if (argc < 2)
                {
                    while (BRD_SM_PmicRead(dev, reg, &val)
                        == SM_ERR_SUCCESS)
                    {
                        printf("   REG[0x%02x] = 0x%02x\n", reg, val);
                        reg++;
                    }
                }
                else
                {
                    errno = 0;
                    reg = (uint8_t) strtoul(argv[1], NULL, 0);
                    if (errno != 0)
                    {
                        reg = 0U;
                    }

                    status = BRD_SM_PmicRead(dev, reg, &val);
                    if (status == SM_ERR_SUCCESS)
                    {
                        printf("   REG[0x%02x] = 0x%02x\n", reg, val);
                    }
                }
            }
            break;
        case WRITE:  /* write */
            if (argc < 3)
            {
                status = SM_ERR_MISSING_PARAMETERS;
            }
            else
            {
                uint8_t addr = strtoul(argv[0], NULL, 0);
                uint8_t reg  = strtoul(argv[1], NULL, 0);
                uint8_t data = strtoul(argv[2], NULL, 0);
                status = BRD_SM_PmicWrite(addr, reg, data, 0xFFU);
                if (status == SM_ERR_SUCCESS)
                {
                    printf("PMIC 0x%02x write register 0x%02x: 0x%02x\n",
                        addr, reg, data);
                }
            }
            break;
    }

    /* Return status */
    return status;
}
#endif

/*--------------------------------------------------------------------------*/
/* System idle command                                                      */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdIdle(int32_t argc, const char * const argv[])
{
#ifndef SIMU
    int32_t status;
    bool consoleResume = false;
    const board_uart_config_t *uartConfig = BOARD_GetDebugUart();

    /* Block waiting on console to resume */
    do
    {
        /* Grab sleep count to detect idle/sleep */
        uint32_t prevSleepCnt = g_syslog.sysSleepRecord.sleepCnt;

        /* Enter system idle */
        status = DEV_SM_SystemIdle();

        /* Check if system idle succeeded */
        if ((status == SM_ERR_SUCCESS) && (uartConfig != NULL))
        {
            /* Check if if system entered sleep */
            if (prevSleepCnt != g_syslog.sysSleepRecord.sleepCnt)
            {
                /* Check if system sleep wake source was console UART */
                if (g_syslog.sysSleepRecord.wakeSource ==
                    (uartConfig->irq + 16U))
                {
                    consoleResume = true;
                }
            }
            else
            {
                /* Check for console character */
                consoleResume = MONITOR_CharPending();
            }
        }
    } while ((status == SM_ERR_SUCCESS) && !consoleResume);

    /* Return status */
    return status;
#else
    /* Return status */
    return SM_ERR_NOT_SUPPORTED;
#endif
}

/*--------------------------------------------------------------------------*/
/* Assert command                                                           */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdAssert(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    if (argc < 1)
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }
    else
    {
        int32_t s;

        /* Parse data */
        s = strtol(argv[0], NULL, 0);

        printf("Assert %d\n", s);

        /* Do assert */
        ASSERT(false, s);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Syslog command                                                           */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdSyslog(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;
    uint32_t flags = 0U;

    if (argc > 0)
    {
        /* Parse data */
        flags = strtoul(argv[0], NULL, 0);
    }

    /* Dump data */
    status = SM_SYSLOGDUMP(flags);

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Group command                                                            */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdGroup(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    static string cmds[] =
    {
        "boot",
        "shutdown",
        "reset"
    };

    /* Check argument */
    if (argc != 0)
    {
        int32_t arg = 0;
        uint32_t grp = 0U;

        if (argc > 1)
        {
            int32_t temp_status = MONITOR_FindN(cmds,
                (int32_t) ARRAY_SIZE(cmds), argv[0]);
            if (temp_status == ARRAY_SIZE(cmds))
            {
                grp = strtoul(argv[0], NULL, 0);
                arg++;
            }
            else
            {
                grp = 0U;
            }
        }

        if (arg >= argc)
        {
            status = SM_ERR_MISSING_PARAMETERS;
        }
        else
        {
            bool graceful = false;
            bool noReturn = false;

            int32_t sub = MONITOR_FindN(cmds, (int32_t) ARRAY_SIZE(cmds),
                argv[arg]);
            arg++;

            /* Graceful? */
            if (arg < argc)
            {
                graceful = true;
            }

            switch (sub)
            {
                case 0:  /* boot */
                    status = LMM_SystemGrpBoot(0U, 0U, &g_swReason, grp);
                    break;
                case 1:  /* shutdown */
                    status = LMM_SystemGrpShutdown(0U, 0U, graceful,
                        &g_swReason, grp, &noReturn);
                    break;
                case 2:  /* reset */
                    status = LMM_SystemGrpReset(0U, 0U, graceful,
                        &g_swReason, grp, &noReturn);
                    break;
                default:
                    status = SM_ERR_INVALID_PARAMETERS;
                    break;
            }
        }
    }
    else
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* System sleep mode                                                        */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdSsm(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    if (argc < 2)
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }
    else
    {
        uint32_t mode, flags;

        /* Parse data */
        mode = strtoul(argv[0], NULL, 0);

        /* Parse data */
        flags = strtoul(argv[1], NULL, 0);

        /* Set system sleep mode/flags for the SM */
        status = LMM_SystemSleepModeSet(0U, mode, flags);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Custom command                                                           */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdCustom(int32_t argc, const char * const argv[])
{
    return BRD_SM_Custom(argc, argv);
}

/*--------------------------------------------------------------------------*/
/* Test command                                                             */
/*--------------------------------------------------------------------------*/
static int32_t MONITOR_CmdTest(int32_t argc, const char * const argv[])
{
    int32_t status = SM_ERR_SUCCESS;

    if (argc < 1)
    {
        status = SM_ERR_MISSING_PARAMETERS;
    }
    else
    {
        uint32_t testMode;

        /* Parse data */
        status = MONITOR_ConvU32(argv[0], &testMode);

        if (status == SM_ERR_SUCCESS)
        {
            /* Set test mode */
            SM_TestModeSet(testMode);
        }
    }

    /* Return status */
    return status;
}

