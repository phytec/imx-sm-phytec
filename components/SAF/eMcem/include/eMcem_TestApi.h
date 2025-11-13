/**
*   @file    eMcem_TestApi.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Test API header.
*   @details Contains declarations of functions for eMcem testing.
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
*   Copyright 2018-2020, 2022-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_TESTAPI_H
#define EMCEM_TESTAPI_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_TestApi_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_TestApi_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_h_REF_0505
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
#include "SafetyBase_StdRegMacros.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_TESTAPI_SW_MAJOR_VERSION             0
#define EMCEM_TESTAPI_SW_MINOR_VERSION             8
#define EMCEM_TESTAPI_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_TESTAPI_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_TESTAPI_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_TESTAPI_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_TestApi.h and MIMX9XX_SAF version are different"
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
typedef struct
{
    uint32 Fault_Ncf_E;        /**< @brief NCF Enable bit */

} eMcem_FaultConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/* @violates @ref eMcem_TestApi_h_REF_0501 */
/* @violates @ref eMcem_TestApi_h_REF_0502 */
/* @violates @ref eMcem_TestApi_h_REF_0504 */
/* @violates @ref eMcem_TestApi_h_REF_0505 */
#define EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
/* @violates @ref eMcem_TestApi_h_REF_0410 */
#include "eMcem_MemMap.h"

extern eMcem_FccuHandlerType eMcem_TestHandlers[EMCEM_VFCCU_FAULT_LINES_COUNT];

/* @violates @ref eMcem_TestApi_h_REF_0501 */
/* @violates @ref eMcem_TestApi_h_REF_0502 */
/* @violates @ref eMcem_TestApi_h_REF_0504 */
/* @violates @ref eMcem_TestApi_h_REF_0505 */
#define EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/* @violates @ref eMcem_TestApi_h_REF_0410 */
#include "eMcem_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_TestApi_h_REF_0410 */
#include "eMcem_MemMap.h"

void eMcem_GetFaultConfig( eMcem_FaultType nFaultId, eMcem_FaultConfigType *faultConfig );

Std_ReturnType eMcem_InstallTestHandler( eMcem_FaultType nFaultId, eMcem_FccuHandlerType handler );

Std_ReturnType eMcem_UninstallTestHandler( eMcem_FaultType nFaultId );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_TestApi_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_TESTAPI_H */

/** @} */
