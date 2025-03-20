/**
*   @file    eMcem_Erm.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - ERM IP header.
*   @details Contains declarations of ERM IP functions for eMcem module.
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

#ifndef EMCEM_ERM_H
#define EMCEM_ERM_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Erm_h_REF_0410
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
#include "eMcem_MemErr_Types_Ext.h"
#include "eMcem_ErmChannels_Ext.h"
#include "Reg_eSys_Erm.h"
#include "eMcem_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_ERM_SW_MAJOR_VERSION             0
#define EMCEM_ERM_SW_MINOR_VERSION             8
#define EMCEM_ERM_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_ERM_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_ERM_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_ERM_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Erm.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
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
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Erm_h_REF_0410 */
#include "eMcem_MemMap.h"

boolean eMcem_Erm_IsAddrProvided( eMcem_ChannelType nChannelId );

boolean eMcem_Erm_IsSynProvided( eMcem_ChannelType nChannelId );

void eMcem_Erm_GetInstanceAndChannel( eMcem_ChannelType nChannelId, uint32 *pu32InstanceId, uint32 *pu32InstanceChannelId );

void eMcem_Erm_Init( const eMcem_ConfigType *pConfigPtr );

Std_ReturnType eMcem_Erm_GetErrType( eMcem_ChannelType nChannelId, uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo );

void eMcem_Erm_ClrErrType( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo );

void eMcem_Erm_GetErrAddr( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo );

void eMcem_Erm_GetErrSyndrome( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo );

uint8 eMcem_Erm_GetCorrErrCnt( eMcem_ChannelType nChannelId );

void eMcem_Erm_ClrCorrErrCnt( eMcem_ChannelType nChannelId );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Erm_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_ERM_H */

/** @} */
