/**
*   @file    SafetyBase_PmicWrapper.h
*   @version 0.8.4
*
*   @brief   Safety SDK SafetyBase - PMIC wrapper.
*   @details This file provides wrapper functions to access PMIC driver.
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
*   Copyright 2017-2019,2023-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef SBASE_PMIC_WRAPPER_H
#define SBASE_PMIC_WRAPPER_H

#ifdef __cplusplus
extern "C"{
#endif

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section safetybase_pmic_wrapper_h_REF0410
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
#define SBASE_PMIC_SW_MAJOR_VERSION             0
#define SBASE_PMIC_SW_MINOR_VERSION             8
#define SBASE_PMIC_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((SBASE_PMIC_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (SBASE_PMIC_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (SBASE_PMIC_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
#error "Software Version Numbers of SafetyBase_PmicWrapper.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define PMIC_DRIVER_PRESENT     (STD_ON)

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
/* @violates @ref safetybase_pmic_wrapper_h_REF0410 */
#include "sBase_MemMap.h"

Std_ReturnType sBase_Pmic_ReadRegister(const uint8 u8RegAddr, uint8 * pu8ValueOut);

#define SBASE_STOP_SEC_CODE
/* @violates @ref safetybase_pmic_wrapper_h_REF0410 */
#include "sBase_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*SBASE_PMIC_WRAPPER_H*/

/** @} */
