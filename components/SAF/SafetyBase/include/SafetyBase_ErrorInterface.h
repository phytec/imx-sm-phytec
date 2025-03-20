/**
*   @file    SafetyBase_ErrorInterface.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF SafetyBase - Error interface.
*   @details This file provides wrapper functions to handle/notify/report internal SAF errors.
*
*   @addtogroup SAFETY_BASE_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : MIMX9XX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.8.4
*   Build Version        : MIMX9_SAF_0_8_4_20250110
*
*   Copyright 2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef SBASE_ERROR_INTERFACE_H
#define SBASE_ERROR_INTERFACE_H

#ifdef __cplusplus
extern "C"{
#endif

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section safetybase_error_interface_h_REF0410
 * Violates MISRA 2012 Required Rule 4.10, Inclusion of "sBase_MemMap.h" is required here because
 * of its functionality.
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
#define SBASE_ERROR_SW_MAJOR_VERSION             0
#define SBASE_ERROR_SW_MINOR_VERSION             8
#define SBASE_ERROR_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((SBASE_ERROR_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (SBASE_ERROR_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (SBASE_ERROR_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
#error "Software Version Numbers of SafetyBase_ErrorInterface.h and MIMX9XX_SAF version are different"
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
#define SBASE_START_SEC_CODE
/* @violates @ref safetybase_error_interface_h_REF0410 */
#include "sBase_MemMap.h"

/**
 * @brief Notify about spurious interrupt occurrence
 *
 * @return void
 */
void sBase_SpuriousIRQHandler(void);

#define SBASE_STOP_SEC_CODE
/* @violates @ref safetybase_error_interface_h_REF0410 */
#include "sBase_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*SBASE_ERROR_INTERFACE_H*/

/** @} */
