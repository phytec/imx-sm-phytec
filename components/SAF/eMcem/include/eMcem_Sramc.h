/**
*   @file    eMcem_Sramc.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - SRAMC IP header.
*   @details Contains declarations of SRAMC IP functions for eMcem module.
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
*   Copyright 2018-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_SRAMC_H
#define EMCEM_SRAMC_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Sramc_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "eMcem_Types_Ext.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_SRAMC_SW_MAJOR_VERSION             0
#define EMCEM_SRAMC_SW_MINOR_VERSION             8
#define EMCEM_SRAMC_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_SRAMC_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_SRAMC_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_SRAMC_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Sramc.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* Maximum bit position for injection into SRAMC. Width is 2 DATA words (64bit) and 8 DATA checkbits */
#define EMCEM_SRAMC_BIT_NOT_VALID           (72U)

/* SRAMC Status Register n address */
#define EMCEM_SRAMC_RAMSR_ADDR32(instance)  ((uint32)((instance) + (uint32)0xCUL))
/* SRAMC Status Register Value For Clearing */
#define EMCEM_SRAMC_RAMSR_CLEAR_VAL_U32     (0x000000EAUL)
/* SRAMC register value for clearing Correctable Error Count register */
#define EMCEM_SRAMC_RAMECCNT_CLEAR_VAL_U32  (0x000000FFUL)

/* SRAMC Masks and Offsets */
#define EMCEM_SRAMC_EID_WORD_1_MASK         (0x1FUL)
#define EMCEM_SRAMC_EID_WORD_2_MASK         (0x7UL)
#define EMCEM_SRAMC_MLTERR_MASK             (0x40UL)
#define EMCEM_SRAMC_SGLERR_MASK             (0x80UL)
#define EMCEM_SRAMC_SYND_MASK               (0xFF00UL)
#define EMCEM_SRAMC_ECCNT_MASK              (0xFFUL)
#define EMCEM_SRAMC_EID_EN_OFFSET           (31U)
#define EMCEM_SRAMC_EIP_EN_OFFSET           (24U)
#define EMCEM_SRAMC_SYND_OFFSET             (8U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief This structure abstracts SRAMC channel configuration.
 */
typedef struct
{
    /** @brief Data word and checkbit configuration */
    uint32 EID_WORD[3];
} eMcem_Sramc_ChannelCfgType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Sramc_h_REF_0410 */
#include "eMcem_MemMap.h"

void eMcem_Sramc_Init(const eMcem_ConfigType *pConfigPtr);


Std_ReturnType eMcem_Sramc_InjectFault( eMcem_ChannelType nChannelId );

Std_ReturnType eMcem_Sramc_ClearFault( eMcem_ChannelType nChannelId );

Std_ReturnType eMcem_Sramc_GetErrorInfo( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo );

Std_ReturnType eMcem_Sramc_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 );

uint8 eMcem_Sramc_GetCorrErrCnt( eMcem_ChannelType nChannelId );

void eMcem_Sramc_ClrCorrErrCnt( eMcem_ChannelType nChannelId );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Sramc_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_SRAMC_H */

/** @} */
