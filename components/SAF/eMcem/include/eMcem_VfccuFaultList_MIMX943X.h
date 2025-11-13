/**
*   @file    eMcem_VfccuFaultList_MIMX943X.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Specific VFCCU fault list header.
*   @details Contains list of specific VFCCU fault lines for eMcem module.
*
*   @addtogroup EMCEM_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : MIMX9XX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.8.4
*   Build Version        : MIMX9_SAF_0_8_4_20250110
*
*   Copyright 2024-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_VFCCUFAULTLIST_MIMX943X_H
#define EMCEM_VFCCUFAULTLIST_MIMX943X_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_VfccuFaultList_MIMX943X_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_VfccuFaultList_MIMX943X_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_VfccuFaultList_MIMX943X_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_VfccuFaultList_MIMX943X_h_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "SafetyBase_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*!
 * @name EMCEM VFCCU fault list definition SW version
 */
/** @{ */

/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0505 */
/*!
* @brief    eMCEM VFCCU fault list for MIMX943X - SW major version
*/
#define EMCEM_VFCCUFAULTLIST_MIMX943X_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0505 */
/*!
* @brief    eMCEM VFCCU fault list for MIMX943X - SW minor version
*/
#define EMCEM_VFCCUFAULTLIST_MIMX943X_SW_MINOR_VERSION             8
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_VfccuFaultList_MIMX943X_h_REF_0505 */
/*!
* @brief    eMCEM VFCCU fault list for MIMX943X - SW patch version
*/
#define EMCEM_VFCCUFAULTLIST_MIMX943X_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX_SAF version header file are of the same software version */
#if ((EMCEM_VFCCUFAULTLIST_MIMX943X_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_VFCCUFAULTLIST_MIMX943X_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_VFCCUFAULTLIST_MIMX943X_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_VfccuFaultList_MIMX943X.h and MIMX9XX_SAF version are different"
#endif

#if SAFETY_BASE_MIMX943X
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/*!
 * @name C_VFCCU fault lines
 */
/** @{ */

/*!
* @brief    NCF[0] Temperature sensor critical over-temperature (ANA)
*/
#define EMCEM_FCCU_FLT_TEMP_HIGH                         (0U)
/*!
* @brief    NCF[1] Temperature sensor critical over-temperature (CORTEXA)
*/
#define EMCEM_FCCU_FLT_TEMP2_HIGH                        (1U)
/*!
* @brief    NCF[2] DRAM controller internal fault
*/
#define EMCEM_FCCU_FLT_DDRC                              (2U)
/*!
* @brief    NCF[3] External DRAM array multi-bit uncorrected error
*/
#define EMCEM_FCCU_FLT_DDR_MBE                           (3U)
/*!
* @brief    NCF[4] Always-ON OCRAM Multi-Bit Uncorrected Error
*/
#define EMCEM_FCCU_FLT_OCRAM_MBE                         (4U)
/*!
* @brief    NCF[5] NPU SRAM Multi-Bit Uncorrected Error
*/
#define EMCEM_FCCU_FLT_NPUSRAM_MBE                       (5U)
/*!
* @brief    NCF[6] M33 TCM Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M33TCM_MBE                        (6U)
/*!
* @brief    NCF[7] M33 Cache (system/code, data/tag) Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M33CACHE_MBE                      (7U)
/*!
* @brief    NCF[8] M7 TCM Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M7TCM_MBE                         (8U)
/*!
* @brief    NCF[9] M7 Cache (instruction/data, data/tag) Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M7CACHE_MBE                       (9U)
/*!
* @brief    NCF[10] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_10                       (10U)
/*!
* @brief    NCF[11] eDMA2 SRAM TCD Multi-Bit Uncorrected Error
*/
#define EMCEM_FCCU_FLT_EDMA2TCD_MBE                      (11U)
/*!
* @brief    NCF[12] SRAM Controller Safety Alarm
*/
#define EMCEM_FCCU_FLT_OCRAM_CTRL_ALARM                  (12U)
/*!
* @brief    NCF[13] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_13                       (13U)
/*!
* @brief    NCF[14] Debug mode activation
*/
#define EMCEM_FCCU_FLT_DEBUG_EN                          (14U)
/*!
* @brief    NCF[15] Unintended Test mode activation
*/
#define EMCEM_FCCU_FLT_TEST_EN                           (15U)
/*!
* @brief    NCF[16] Unintended MTR activation
*/
#define EMCEM_FCCU_FLT_MTR_EN                            (16U)
/*!
* @brief    NCF[17] Unintended STCU activation
*/
#define EMCEM_FCCU_FLT_STCU_EN                           (17U)
/*!
* @brief    NCF[18] WDOG2 timeout (Watchdog reset request)
*/
#define EMCEM_FCCU_FLT_WDOG2                             (18U)
/*!
* @brief    NCF[19] WDOG3 timeout (Watchdog reset request)
*/
#define EMCEM_FCCU_FLT_WDOG3                             (19U)
/*!
* @brief    NCF[20] WDOG4 timeout (Watchdog reset request)
*/
#define EMCEM_FCCU_FLT_WDOG4                             (20U)
/*!
* @brief    NCF[21] WDOG5 timeout (Watchdog reset request)
*/
#define EMCEM_FCCU_FLT_WDOG5                             (21U)
/*!
* @brief    NCF[22] Software Generated Fault 0 (Group 0, Fault 0)
*/
#define EMCEM_FCCU_FLT_SWNCF00                           (22U)
/*!
* @brief    NCF[23] Software Generated Fault 1 (Group 0, Fault 1)
*/
#define EMCEM_FCCU_FLT_SWNCF01                           (23U)
/*!
* @brief    NCF[24] Software Generated Fault 2 (Group 0, Fault 2)
*/
#define EMCEM_FCCU_FLT_SWNCF02                           (24U)
/*!
* @brief    NCF[25] Software Generated Fault 3 (Group 0, Fault 3)
*/
#define EMCEM_FCCU_FLT_SWNCF03                           (25U)
/*!
* @brief    NCF[26] Software Generated Fault 4 (Group 0, Fault 4)
*/
#define EMCEM_FCCU_FLT_SWNCF04                           (26U)
/*!
* @brief    NCF[27] Software Generated Fault 5 (Group 0, Fault 5)
*/
#define EMCEM_FCCU_FLT_SWNCF05                           (27U)
/*!
* @brief    NCF[28] Software Generated Fault 6 (Group 1, Fault 0)
*/
#define EMCEM_FCCU_FLT_SWNCF06                           (28U)
/*!
* @brief    NCF[29] Software Generated Fault 7 (Group 1, Fault 1)
*/
#define EMCEM_FCCU_FLT_SWNCF07                           (29U)
/*!
* @brief    NCF[30] Software Generated Fault 8 (Group 1, Fault 2)
*/
#define EMCEM_FCCU_FLT_SWNCF08                           (30U)
/*!
* @brief    NCF[31] Software Generated Fault 9 (Group 1, Fault 3)
*/
#define EMCEM_FCCU_FLT_SWNCF09                           (31U)
/*!
* @brief    NCF[32] Software Generated Fault 10 (Group 1, Fault 4)
*/
#define EMCEM_FCCU_FLT_SWNCF10                           (32U)
/*!
* @brief    NCF[33] Software Generated Fault 11 (Group 1, Fault 5)
*/
#define EMCEM_FCCU_FLT_SWNCF11                           (33U)
/*!
* @brief    NCF[34] M33 Lockup Error
*/
#define EMCEM_FCCU_FLT_M33_LOCKUP                        (34U)
/*!
* @brief    NCF[35] Unintended M33 Reset assertion
*/
#define EMCEM_FCCU_FLT_M33_RST                           (35U)
/*!
* @brief    NCF[36] Unintended M33 Debug activation )
*/
#define EMCEM_FCCU_FLT_M33_DBG                           (36U)
/*!
* @brief    NCF[37] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_37                       (37U)
/*!
* @brief    NCF[38] M7 Lockup Error
*/
#define EMCEM_FCCU_FLT_M7_LOCKUP                         (38U)
/*!
* @brief    NCF[39] Unintended M7 Reset assertion
*/
#define EMCEM_FCCU_FLT_M7_RST                            (39U)
/*!
* @brief    NCF[40] Unintended M7 Debug activation
*/
#define EMCEM_FCCU_FLT_M7_DBG                            (40U)
/*!
* @brief    NCF[41] Security CRRM AWDT expiry notification before reset
*/
#define EMCEM_FCCU_FLT_SECURITY_CRRM_AWDT                (41U)
/*!
* @brief    NCF[42] Security Fault (s4v1_lmda_sys_fail)
*/
#define EMCEM_FCCU_FLT_SECURITY                          (42U)
/*!
* @brief    NCF[43] OCOTP Uncorrectable error from Fuse read
*/
#define EMCEM_FCCU_FLT_OCOTP_FUSE_ERROR                  (43U)
/*!
* @brief    NCF[44] Frequency loss or too low fault from an ANAMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_ANA_LOSS_LOW                  (44U)
/*!
* @brief    NCF[45] Frequency too high from an ANAMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_ANA_HIGH                      (45U)
/*!
* @brief    NCF[46] Frequency loss or too low fault from an AONMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_AON_LOSS_LOW                  (46U)
/*!
* @brief    NCF[47] Frequency too high from an AONMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_AON_HIGH                      (47U)
/*!
* @brief    NCF[48] Frequency loss or too low fault from a WAKEUPMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_WAKEUP_LOSS_LOW               (48U)
/*!
* @brief    NCF[49] Frequency too high from a WAKEUPMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_WAKEUP_HIGH                   (49U)
/*!
* @brief    NCF[50] Frequency loss or too low fault from a M7MIX0 CMU
*/
#define EMCEM_FCCU_FLT_CMU_M7_0_LOSS_LOW                 (50U)
/*!
* @brief    NCF[51] Frequency too high from a M7MIX0 CMU
*/
#define EMCEM_FCCU_FLT_CMU_M7_0_HIGH                     (51U)
/*!
* @brief    NCF[52] Frequency loss or too low fault from a DDRMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_DDR_LOSS_LOW                  (52U)
/*!
* @brief    NCF[53] Frequency too high from a DDRMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_DDR_HIGH                      (53U)
/*!
* @brief    NCF[54] Frequency loss or too low fault from a NOCMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_NOC_LOSS_LOW                  (54U)
/*!
* @brief    NCF[55] Frequency too high from a NOCMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_NOC_HIGH                      (55U)
/*!
* @brief    NCF[56] Voltage detector (VDET) low voltage detected
*/
#define EMCEM_FCCU_FLT_VDET_LVD                          (56U)
/*!
* @brief    NCF[57] Voltage detector (VDET) high voltage detected
*/
#define EMCEM_FCCU_FLT_VDET_HVD                          (57U)
/*!
* @brief    NCF[58] FlexNOC_Main Mission Fault
*/
#define EMCEM_FCCU_FLT_NOC_MAIN                          (58U)
/*!
* @brief    NCF[59] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_59                       (59U)
/*!
* @brief    NCF[60] FlexNOC_Central Mission Fault
*/
#define EMCEM_FCCU_FLT_NOC_CENTRAL                       (60U)
/*!
* @brief    NCF[61] Parity fault from parity checkers around AXBS_M33_0
*/
#define EMCEM_FCCU_FLT_PARITY_AXBS_M33                   (61U)
/*!
* @brief    NCF[62] Parity fault from parity checkers around AXBS AON
*/
#define EMCEM_FCCU_FLT_PARITY_AXBS_AON                   (62U)
/*!
* @brief    NCF[63] INTM Interrupt Monitor Fault
*/
#define EMCEM_FCCU_FLT_INTM                              (63U)
/*!
* @brief    NCF[64] Parity fault from all parity gaskets in AONMIX (except parity gaskets around AXMB_M33_0 and AXBS_AON)
*/
#define EMCEM_FCCU_FLT_PARITY_AONMIX                     (64U)
/*!
* @brief    NCF[65] Parity fault from all parity gaskets in WAKEUPMIX
*/
#define EMCEM_FCCU_FLT_PARITY_WAKEUPMIX                  (65U)
/*!
* @brief    NCF[66] Parity fault from all parity gaskets in NOCMIX
*/
#define EMCEM_FCCU_FLT_PARITY_NOCMIX                     (66U)
/*!
* @brief    NCF[67] Parity fault from all parity gaskets in M7MIX0
*/
#define EMCEM_FCCU_FLT_PARITY_M7MIX0                     (67U)
/*!
* @brief    NCF[68] Parity fault from all parity gaskets in DDRMIX
*/
#define EMCEM_FCCU_FLT_PARITY_DDRMIX                     (68U)
/*!
* @brief    NCF[69] Parity fault from all parity gaskets in NPUMIX
*/
#define EMCEM_FCCU_FLT_PARITY_NPUMIX                     (69U)
/*!
* @brief    NCF[70] ATU_A lock-step error
*/
#define EMCEM_FCCU_FLT_RCCU_ATU_A                        (70U)
/*!
* @brief    NCF[71] ATU_M7_0 lock-step error
*/
#define EMCEM_FCCU_FLT_RCCU_ATU_M7_0                     (71U)
/*!
* @brief    NCF[72] M7 TCM Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M7_1_TCM_MBE                      (72U)
/*!
* @brief    NCF[73] M7 Cache (instruction/data, data/tag) Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M7_1_CACHE_MBE                    (73U)
/*!
* @brief    NCF[74] M7 Lockup Error
*/
#define EMCEM_FCCU_FLT_M7_1_LOCKUP                       (74U)
/*!
* @brief    NCF[75] Unintended M7 Reset assertion
*/
#define EMCEM_FCCU_FLT_M7_1_RST                          (75U)
/*!
* @brief    NCF[76] Unintended M7 Debug activation
*/
#define EMCEM_FCCU_FLT_M7_1_DBG                          (76U)
/*!
* @brief    NCF[77] Frequency loss or too low fault from a M7MIX1 CMU
*/
#define EMCEM_FCCU_FLT_CMU_M7_1_LOSS_LOW                 (77U)
/*!
* @brief    NCF[78] Frequency too high from a M7MIX1 CMU
*/
#define EMCEM_FCCU_FLT_CMU_M7_1_HIGH                     (78U)
/*!
* @brief    NCF[79] Parity fault from all parity gaskets in M7MIX1
*/
#define EMCEM_FCCU_FLT_PARITY_M7MIX1                     (79U)
/*!
* @brief    NCF[80] M33_Sync TCM Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M33_SYNC_TCM_MBE                  (80U)
/*!
* @brief    NCF[81] M33_Sync Cache (system/code, data/tag) Uncorrected Multi Bit Error
*/
#define EMCEM_FCCU_FLT_M33_SYNC_CACHE_MBE                (81U)
/*!
* @brief    NCF[82] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_82                       (82U)
/*!
* @brief    NCF[83] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_83                       (83U)
/*!
* @brief    NCF[84] WDOG6 timeout
*/
#define EMCEM_FCCU_FLT_WDOG6                             (84U)
/*!
* @brief    NCF[85] WDOG7 timeout
*/
#define EMCEM_FCCU_FLT_WDOG7                             (85U)
/*!
* @brief    NCF[86] WDOG8 timeout
*/
#define EMCEM_FCCU_FLT_WDOG8                             (86U)
/*!
* @brief    NCF[87] M33_Sync Lockup Error
*/
#define EMCEM_FCCU_FLT_M33_SYNC_LOCKUP                   (87U)
/*!
* @brief    NCF[88] Unintended M33_Sync Reset assertion
*/
#define EMCEM_FCCU_FLT_M33_SYNC_RST                      (88U)
/*!
* @brief    NCF[89] Unintended M33_Sync Debug activation
*/
#define EMCEM_FCCU_FLT_M33_SYNC_DBG                      (89U)
/*!
* @brief    NCF[90] Frequency loss or too low fault from a NETCMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_NETC_LOSS_LOW                 (90U)
/*!
* @brief    NCF[91] Frequency too high from a NETCMIX CMU
*/
#define EMCEM_FCCU_FLT_CMU_NETC_HIGH                     (91U)
/*!
* @brief    NCF[92] Parity fault from parity checkers around AXBS_M33_Sync
*/
#define EMCEM_FCCU_FLT_PARITY_AXBS_M33_Sync              (92U)
/*!
* @brief    NCF[93] Parity fault from parity checkers around AXBS_NETC
*/
#define EMCEM_FCCU_FLT_PARITY_AXBS_NETC                  (93U)
/*!
* @brief    NCF[94] Parity fault from all parity gaskets in NETCMIX
*           (except parity gaskets around AXBS_M33_Sync and AXBS_NETC)
*/
#define EMCEM_FCCU_FLT_PARITY_NETCMIX                    (94U)
/*!
* @brief    NCF[95] ATU_M33S lock-step error
*/
#define EMCEM_FCCU_FLT_RCCU_ATU_M33S                     (95U)
/*!
* @brief    NCF[96] 1.5MB OCSRAM Multi-Bit Uncorrected Error
*/
#define EMCEM_FCCU_FLT_NETC_OCSRAM_MBE                   (96U)
/*!
* @brief    NCF[97] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_97                       (97U)
/*!
* @brief    NCF[98] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_98                       (98U)
/*!
* @brief    NCF[99] eDMA4 SRAM TCD Multi-Bit Uncorrected Error
*/
#define EMCEM_FCCU_FLT_EDMA4TCD_MBE                      (99U)
/*!
* @brief    NCF[100] ATU_M7_1 lock-step error
*/
#define EMCEM_FCCU_FLT_RCCU_ATU_M7_1                     (100U)
/*!
* @brief    NCF[101] Software Generated Fault 12 (Group 2, Fault 0)
*/
#define EMCEM_FCCU_FLT_SWNCF12                           (101U)
/*!
* @brief    NCF[102] Software Generated Fault 13 (Group 2, Fault 1)
*/
#define EMCEM_FCCU_FLT_SWNCF13                           (102U)
/*!
* @brief    NCF[103] Software Generated Fault 14 (Group 2, Fault 2)
*/
#define EMCEM_FCCU_FLT_SWNCF14                           (103U)
/*!
* @brief    NCF[104] Software Generated Fault 15 (Group 2, Fault 3)
*/
#define EMCEM_FCCU_FLT_SWNCF15                           (104U)
/*!
* @brief    NCF[105] Software Generated Fault 16 (Group 2, Fault 4)
*/
#define EMCEM_FCCU_FLT_SWNCF16                           (105U)
/*!
* @brief    NCF[106] Software Generated Fault 17 (Group 2, Fault 5)
*/
#define EMCEM_FCCU_FLT_SWNCF17                           (106U)
/*!
* @brief    NCF[107] Software Generated Fault 18 (Group 3, Fault 0)
*/
#define EMCEM_FCCU_FLT_SWNCF18                           (107U)
/*!
* @brief    NCF[108] Software Generated Fault 19 (Group 3, Fault 1)
*/
#define EMCEM_FCCU_FLT_SWNCF19                           (108U)
/*!
* @brief    NCF[109] Software Generated Fault 20 (Group 3, Fault 2)
*/
#define EMCEM_FCCU_FLT_SWNCF20                           (109U)
/*!
* @brief    NCF[110] Software Generated Fault 21 (Group 3, Fault 3)
*/
#define EMCEM_FCCU_FLT_SWNCF21                           (110U)
/*!
* @brief    NCF[111] Software Generated Fault 22 (Group 3, Fault 4)
*/
#define EMCEM_FCCU_FLT_SWNCF22                           (111U)
/*!
* @brief    NCF[112] Software Generated Fault 23 (Group 3, Fault 5)
*/
#define EMCEM_FCCU_FLT_SWNCF23                           (112U)
/*!
* @brief    NCF[113] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_113                      (113U)
/*!
* @brief    NCF[114] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_114                      (114U)
/*!
* @brief    NCF[115] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_115                      (115U)
/*!
* @brief    NCF[116] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_116                      (116U)
/*!
* @brief    NCF[117] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_117                      (117U)
/*!
* @brief    NCF[118] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_118                      (118U)
/*!
* @brief    NCF[119] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_119                      (119U)
/*!
* @brief    NCF[120] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_120                      (120U)
/*!
* @brief    NCF[121] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_121                      (121U)
/*!
* @brief    NCF[122] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_122                      (122U)
/*!
* @brief    NCF[123] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_123                      (123U)
/*!
* @brief    NCF[124] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_124                      (124U)
/*!
* @brief    NCF[125] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_125                      (125U)
/*!
* @brief    NCF[126] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_126                      (126U)
/*!
* @brief    NCF[127] Reserved
*/
#define EMCEM_FCCU_FLT_RESERVED_127                      (127U)

/*!
* @brief    Total VFCCU fault lines count
*/
#define EMCEM_VFCCU_FAULT_LINES_COUNT                    (128U)
/** @} */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#endif /* SAFETY_BASE_MIMX943X */

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_VFCCUFAULTLIST_MIMX943X_H */

/** @} */
