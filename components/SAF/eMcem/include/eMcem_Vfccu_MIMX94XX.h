/**
*   @file    eMcem_Vfccu_MIMX94XX.h
*   @version 0.4.0
*
*   @brief   MIMX_SAF eMcem - IP wrapper specific header.
*   @details Contains declarations of the eMcem IP wrapper specific functions.
*
*   @addtogroup EMCEM_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : MIMX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.4.0
*   Build Version        : MIMX9X_SAF_0_4_0
*
*   Copyright 2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_VFCCU_MIMX94XX_H
#define EMCEM_VFCCU_MIMX94XX_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Vfccu_MIMX94XX_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Vfccu_MIMX94XX_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_MIMX94XX_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_MIMX94XX_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_MIMX94XX_h_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX_SAF_Version.h"
#include "SafetyBase_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0501 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0502 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0504 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0505 */
#define EMCEM_VFCCU_MIMX94XX_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0501 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0502 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0504 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0505 */
#define EMCEM_VFCCU_MIMX94XX_SW_MINOR_VERSION             4
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0501 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0502 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0504 */
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0505 */
#define EMCEM_VFCCU_MIMX94XX_SW_PATCH_VERSION             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX_SAF version header file are of the same software version */
#if ((EMCEM_VFCCU_MIMX94XX_SW_MAJOR_VERSION != MIMX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_VFCCU_MIMX94XX_SW_MINOR_VERSION != MIMX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_VFCCU_MIMX94XX_SW_PATCH_VERSION != MIMX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Vfccu_MIMX94XX.h and MIMX_SAF version are different"
#endif

#if defined(SAFETY_BASE_MIMX94XX)
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
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0410 */
#include "eMcem_MemMap.h"

void eMcem_Vfccu_Specific_AssertSWFault( uint8 u8SWRegIdx, uint8 u8BitIdx );
void eMcem_Vfccu_Specific_DeassertSWFault( uint8 u8SWRegIdx, uint8 u8BitIdx );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Vfccu_MIMX94XX_h_REF_0410 */
#include "eMcem_MemMap.h"

#endif /* defined(SAFETY_BASE_MIMX94XX) */

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_VFCCU_MIMX94XX_H */

/** @} */
