/**
*   @file    eMcem_ErmChannels_MIMX943X.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Specific ERM channels header.
*   @details Contains declarations of specific ERM channels for eMcem module.
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

#ifndef EMCEM_ERMCHANNELS_MIMX943X_H
#define EMCEM_ERMCHANNELS_MIMX943X_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_ErmChannels_MIMX943X_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_ErmChannels_MIMX943X_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_ErmChannels_MIMX943X_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_ErmChannels_MIMX943X_h_REF_0505
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
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0505 */
#define EMCEM_ERMCHANNELS_MIMX943X_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0505 */
#define EMCEM_ERMCHANNELS_MIMX943X_SW_MINOR_VERSION             8
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0501 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0502 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0504 */
/* @violates @ref eMcem_ErmChannels_MIMX943X_h_REF_0505 */
#define EMCEM_ERMCHANNELS_MIMX943X_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_ERMCHANNELS_MIMX943X_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_ERMCHANNELS_MIMX943X_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_ERMCHANNELS_MIMX943X_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_ErmChannels_MIMX943X.h and MIMX9XX_SAF version are different"
#endif

#if SAFETY_BASE_MIMX943X
/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* ERM channels base offset. Channels are aligned after SRAMC channels.
   Offset is a sum of VFCCU fault count, EIM channel count, SRAMC channel count and DDRC channel count.

   All memory and fault channels are aligned after each other to not overlap.
   The alignment of channels is following: VFCCU, EIM, SRAMC, DDRC, ERM,
   - the reason of aligning all channels is that SRAMC channels are used for both injection and detection functions
   - the IPs for which the injection is possible (VFCCU, EIM, SRAMC, DDRC) are at the beginning
     - different order would affect the eMcem_au32StaticFaultMasks variable (the mask would be longer as extra zeros would need to be placed there)
*/
#define EMCEM_ERM_CHANNELS_OFFSET                 ((128U) + (61U) + (1U) + (2U))

/* ERM Channels */
/* AON ERM */
#define EMCEM_ERM_AON_CH_0                        (0U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_1                        (1U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_2                        (2U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_3                        (3U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_4                        (4U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_5                        (5U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_6                        (6U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_7                        (7U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_8                        (8U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_AON_CH_9                        (9U + EMCEM_ERM_CHANNELS_OFFSET)

/* CM7_0 ERM */
#define EMCEM_ERM_CM7_0_CH_0                      (10U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_1                      (11U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_2                      (12U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_3                      (13U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_4_RESERVED             (14U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_5                      (15U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_6                      (16U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_0_CH_7                      (17U + EMCEM_ERM_CHANNELS_OFFSET)

/* CM7_1 ERM */
#define EMCEM_ERM_CM7_1_CH_0                      (18U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_1                      (19U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_2                      (20U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_3                      (21U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_4_RESERVED             (22U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_5                      (23U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_6                      (24U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_CM7_1_CH_7                      (25U + EMCEM_ERM_CHANNELS_OFFSET)

/* NPU ERM */
#define EMCEM_ERM_NPU_CH_0                        (26U + EMCEM_ERM_CHANNELS_OFFSET)

/* Wakeup ERM */
#define EMCEM_ERM_WAKEUP_CH_0                     (27U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_1_RESERVED            (28U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_2_RESERVED            (29U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_3_RESERVED            (30U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_4_RESERVED            (31U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_5_RESERVED            (32U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_6_RESERVED            (33U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_7_RESERVED            (34U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_8_RESERVED            (35U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_WAKEUP_CH_9                     (36U + EMCEM_ERM_CHANNELS_OFFSET)

/* NETC ERM */
#define EMCEM_ERM_NETC_CH_0                       (37U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_1                       (38U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_2                       (39U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_3                       (40U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_4                       (41U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_5                       (42U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_6                       (43U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_7                       (44U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_8                       (45U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_9                       (46U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_10_RESERVED             (47U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_11_RESERVED             (48U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_12_RESERVED             (49U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_13                      (50U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_14                      (51U + EMCEM_ERM_CHANNELS_OFFSET)
#define EMCEM_ERM_NETC_CH_15                      (52U + EMCEM_ERM_CHANNELS_OFFSET)

/* ERM Channels count */
#define EMCEM_ERM_CHANNEL_COUNT                   (53U)

/* ERM Instance count (AON, CM7_0, CM7_1, NPU, Wakeup, NETC) */
#define EMCEM_ERM_INSTANCE_COUNT                  (6U)

/* Mask size for ERM channel arrays */
#define EMCEM_ERM_MASK_SIZE                       ( ( ( EMCEM_ERM_CHANNEL_COUNT - 1U ) / 32U ) + 1U )

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


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

#endif /* EMCEM_ERMCHANNELS_MIMX943X_H */

/** @} */
