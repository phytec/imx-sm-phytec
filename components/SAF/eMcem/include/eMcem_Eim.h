/**
*   @file    eMcem_Eim.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - EIM IP header.
*   @details Contains declarations of EIM IP functions for eMcem module.
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
*   Copyright 2020-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_EIM_H
#define EMCEM_EIM_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Eim_h_REF_0410
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
#define EMCEM_EIM_SW_MAJOR_VERSION             0
#define EMCEM_EIM_SW_MINOR_VERSION             8
#define EMCEM_EIM_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_EIM_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_EIM_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_EIM_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
#error "Software Version Numbers of eMcem_Eim.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define EMCEM_EIM_BIT_NOT_VALID        (65535U)

/* EIM Masks and Offsets */
#define EMCEM_EIM_EICHD_WORD_MASK      (0x1FUL)
#define EMCEM_EIM_EIMCR_GEIEN_MASK     (0x1UL)

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
/* @violates @ref eMcem_Eim_h_REF_0410 */
#include "eMcem_MemMap.h"

Std_ReturnType eMcem_Eim_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 );

Std_ReturnType eMcem_Eim_InjectFault( eMcem_FaultType nChannelId );

Std_ReturnType eMcem_Eim_ClearFault( eMcem_FaultType nChannelId );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Eim_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_EIM_H */

/** @} */
