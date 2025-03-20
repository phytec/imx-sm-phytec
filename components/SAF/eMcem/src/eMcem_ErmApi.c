/**
*   @file    eMcem_ErmApi.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - ERM API source.
*   @details This file implements ERM IP specific API functions for eMcem module.
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
*   Copyright 2019-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_ErmApi_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_ErmApi_c_REF_0807
* Violates MISRA 2012 Advisory Rule 8.7, Functions should not be defined with external linkage.
* This is an API function.
*
* @section eMcem_ErmApi_c_REF_2001
* Violates MISRA 2012 Advisory Rule 20.1, #include statements are not preceded only by preprocessor
* directives and comments because it otherwise would not work.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "eMcem_ErmApi.h"
#include "eMcem_Lib_Ext.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_ERMAPI_SW_MAJOR_VERSION_C           0
#define EMCEM_ERMAPI_SW_MINOR_VERSION_C           8
#define EMCEM_ERMAPI_SW_PATCH_VERSION_C           4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_ERMAPI_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_ERMAPI_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_ERMAPI_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_ErmApi.c and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_ErmApi_c_REF_0410 */
#include "eMcem_MemMap.h"

/**
* @brief      Get the correctable error count
* @details    Function gets number of correctable errors of ERM channel
*
* @param[in]  nChannelId      Global ID of ERM channel
*
* @return     Number of correctable errors
*
* @api        The object is an API and must be documented in the user manual.
*
* @implements DD_eMcem_GetCorrMemErrCnt
*
* @violates @ref eMcem_ErmApi_c_REF_0807
*
*/
uint16 eMcem_GetCorrMemErrCnt( eMcem_ChannelType nChannelId )
{
    uint16 u16ErrorCount = 0U;

    u16ErrorCount = eMcem_GetCorrMemErrCnt_Int( nChannelId );

    return u16ErrorCount;
}

/**
* @brief      Clear correctable error count
* @details    Function clears the correctable error counter of ERM channel
*
* @param[in]  nChannelId      Global ID of ERM channel
*
* @return     void
*
* @api        The object is an API and must be documented in the user manual.
*
* @implements DD_eMcem_ClrCorrMemErrCnt
*
* @violates @ref eMcem_ErmApi_c_REF_0807
*
*/
void eMcem_ClrCorrMemErrCnt( eMcem_ChannelType nChannelId )
{
    eMcem_ClrCorrMemErrCnt_Int( nChannelId );
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_ErmApi_c_REF_0410 */
/* @violates @ref eMcem_ErmApi_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
