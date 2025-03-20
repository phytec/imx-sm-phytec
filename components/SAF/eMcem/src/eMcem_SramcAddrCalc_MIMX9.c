/**
*   @file    eMcem_SramcAddrCalc_MIMX9.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - SRAMC IP specific source.
*   @details This file implements SRAMC IP specific functions for eMcem module.
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

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, Conversion between pointer and integer should not be performed.
* We need to access this address mapped structure.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, Cast between pointer to void and arithmetic type shall not be performed.
* We need to access this address mapped structure.
*
* @section eMcem_SramcAddrCalc_MIMX9_c_REF_2001
* Violates MISRA 2012 Advisory Rule 20.1, #include statements are not preceded only by
* preprocessor directives and comments because it otherwise would not work.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "eMcem_Cfg.h"
#include "eMcem_SramcAddrCalc_MIMX9.h"
#include "eMcem_SramcChannels_MIMX9.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_SRAMCADDRCALC_MIMX9_C_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0501 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0502 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0504 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0505 */
#define EMCEM_SRAMCADDRCALC_MIMX9_C_SW_MINOR_VERSION             8
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0501 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0502 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0504 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0505 */
#define EMCEM_SRAMCADDRCALC_MIMX9_C_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_SRAMCADDRCALC_MIMX9_C_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_SRAMCADDRCALC_MIMX9_C_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_SRAMCADDRCALC_MIMX9_C_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_SramcAddrCalc_MIMX9.c and MIMX9XX_SAF version are different"
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
#define EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0410 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_2001 */
#include "eMcem_MemMap.h"

eMcem_Sramc_ChannelAddressType eMcem_tSramcChannelAddress[EMCEM_SRAMC_CHANNEL_COUNT] =
{
    /* NOC */
    {
        OCRAM_BASE_ADDR,
        EMCEM_OCRAM_END_ADDR
    }
};

#define EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_0410 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_c_REF_2001 */
#include "eMcem_MemMap.h"
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

#ifdef __cplusplus
}
#endif

/** @} */
