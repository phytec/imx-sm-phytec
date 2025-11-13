/**
*   @file    eMcem_FailurePointList_MIMX9.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Extended diagnostics specific failure point list header.
*   @details Contains list of specific failure points within eMcem module.
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
*   Copyright 2023-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_FAILUREPOINTLIST_MIMX9_H
#define EMCEM_FAILUREPOINTLIST_MIMX9_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_FailurePointList_MIMX9_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_FailurePointList_MIMX9_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_FailurePointList_MIMX9_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_FailurePointList_MIMX9_h_REF_0505
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
#include "Std_Types.h"
#include "eMcem_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*!
 * @name EMCEM external diagnostic failure point definition SW version
 */
/** @{ */

/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0505 */
/*!
* @brief    eMCEM external diagnostic failure point list - SW major version.
*/
#define EMCEM_FAILUREPOINTLIST_MIMX9_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0505 */
/*!
* @brief    eMCEM external diagnostic failure point list - SW minor version.
*/
#define EMCEM_FAILUREPOINTLIST_MIMX9_SW_MINOR_VERSION             8
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_FailurePointList_MIMX9_h_REF_0505 */
/*!
* @brief    eMCEM external diagnostic failure point list - SW patch version.
*/
#define EMCEM_FAILUREPOINTLIST_MIMX9_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_FAILUREPOINTLIST_MIMX9_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_FAILUREPOINTLIST_MIMX9_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_FAILUREPOINTLIST_MIMX9_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_FailurePointList_MIMX9.h and MIMX9XX_SAF version are different"
#endif

#if( STD_ON == EMCEM_EXT_DIAG_ENABLED )
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/*!
* @brief          eMCEM Driver Extended Diagnostics Failure Point Enum.
* @details        List of failure points within driver where the execution can fail.
*/
typedef enum
{
    EMCEM_FP_EMPTY = 0U, /*!< None FP */
    EMCEM_FP_INIT, /*!< Init eMCEM driver */
    EMCEM_FP_INJECT_FAULT, /*!< Inject fault */
    EMCEM_FP_GET_ERRORS, /*!< Get eMCEM errors */
    EMCEM_FP_CLEAR_FAULTS, /*!< Clear VFCCU faults or disable error injection channels */
    EMCEM_FP_ASSERT_SW_FAULT, /*!< Assert SW faults */
    EMCEM_FP_DEASSERT_SW_FAULT, /*!< Dessert SW faults */
    EMCEM_FP_READ_ERROR_OUTPUT, /*!< Get EOUT signal value */
    EMCEM_FP_WRITE_ERROR_OUTPUT, /*!< Set EOUT signal value */
    EMCEM_FP_SET_EOUT_SIGNALING, /*!< Set EOUT signal */
    EMCEM_FP_SET_EOUT_CONTROL_MODE, /*!< Set EOUT control mode */
    EMCEM_FP_SETUP_INJECTION_CHANNEL, /*!< Setup injection channel */
    EMCEM_FP_GET_MEM_ERR_INFO, /*!< Get memory error info */
    EMCEM_FP_VALIDATE_INIT_PTR, /*!< Validate initialization PTR to CFG */
    EMCEM_FP_VALIDATE_ERROR_PTR, /*!< Validate PTR to ERROR container */
    EMCEM_FP_VALIDATE_INFO_PTR, /*!< Validate PTR to MEMORY INFO */
    EMCEM_FP_VALIDATE_FAULT_ID_RANGE, /*!< Validate fault id - range */
    EMCEM_FP_VALIDATE_FAULT_ID_RESERVE, /*!< Validate fault id - reserve */
    EMCEM_FP_CHECK_STATE, /*!< Check eMCEM driver state */
    EMCEM_FP_VFCCU_INIT_CVFCCU, /*!< Initiliaze the C_VFCCU */
    EMCEM_FP_EIM_INJECT_FAULT, /*!< Inject fault in EIM channel */
    EMCEM_FP_SRAMCTL_INJECT_FAULT, /*!< Inject fault in SRAMCTL channel */
    EMCEM_FP_DDRC_INJECT_FAULT, /*!< Inject fault in DDRC channel */
    EMCEM_FP_EIM_SETUP_INJECTION_CHANNEL, /*!< Setup EIM injection channel */
    EMCEM_FP_SRAMCTL_SETUP_INJECTION_CHANNEL, /*!< Setup SRAMCTL injection channel */
    EMCEM_FP_DDRC_SETUP_INJECTION_CHANNEL, /*!< Setup DDRC injection channel */
    EMCEM_FP_VFCCU_CLEAR_FAULT, /*!< Clear VFCCU fault */
    EMCEM_FP_EIM_CLEAR_FAULT, /*!< Disable error injection in EIM channel */
    EMCEM_FP_SRAMCTL_CLEAR_FAULT, /*!< Disable error injection in SRAMCTL channel */
    EMCEM_FP_DDRC_CLEAR_FAULT, /*!< Disable error injection in DDRC channel */
    EMCEM_FP_INSTALL_TST_HANDLER_FAULT_EN, /*!< Install test handler - check fault enabling in CFG */
    EMCEM_FP_INSTALL_TST_HANDLER_FAULT_REACT, /*!< Install test handler - check fault reaction in CFG */
    EMCEM_FP_INSTALL_TST_HANDLER_FAULT_RECFG, /*!< Install test handler - reconfigure */
    EMCEM_FP_INSTALL_TST_HANDLER,  /*!< Install test handler */
    EMCEM_FP_UNINSTALL_TST_HANDLER_FAULT_EN, /*!< Install test handler - check fault enabling in CFG */
    EMCEM_FP_UNINSTALL_TST_HANDLER_FAULT_RECFG, /*!< Install test handler - reconfigure */
    EMCEM_FP_UNINSTALL_TST_HANDLER,  /*!< Uninstall test handler */
    EMCEM_FP_VFCCU_ALARM_ISR_DRV_STATE, /*!< Check eMCEM driver state in ALARM_ISR */
    EMCEM_FP_VFCCU_ALARM_ISR_VFCCU_STATE, /*!< Check VFCCU FSM state in ALARM_ISR */
    EMCEM_FP_VFCCU_ALARM_ISR_REG_FAULT, /*!< Check regular fault in ALARM_ISR */
    EMCEM_FP_VFCCU_ALARM_ISR_IRQ_REACT, /*!< Check set of IRQ reaction in ALARM_ISR */
    EMCEM_FP_VFCCU_ALARM_ISR_HANDLER_PTR, /*!< Check PTR to USER HANDLER in ALARM_ISR */
} eMcem_FailurePointType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#endif /* ( STD_ON == EMCEM_EXT_DIAG_ENABLED ) */

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_FAILUREPOINTLIST_MIMX9_H */

/** @} */
