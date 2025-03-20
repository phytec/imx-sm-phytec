/**
*   @file    eMcem_SramcAddrCalc_MIMX9.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - SRAMC IP specific header.
*   @details Contains declarations of SRAMC IP specific functions for eMcem module.
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

#ifndef EMCEM_SRAMCADDRCALC_MIMX9_H
#define EMCEM_SRAMCADDRCALC_MIMX9_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_SramcAddrCalc_MIMX9_h_REF_2001
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
#include "SafetyBase.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0505 */
#define EMCEM_SRAMCADDRCALC_MIMX9_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0505 */
#define EMCEM_SRAMCADDRCALC_MIMX9_SW_MINOR_VERSION             8
#define EMCEM_SRAMCADDRCALC_MIMX9_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_SRAMCADDRCALC_MIMX9_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_SRAMCADDRCALC_MIMX9_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_SRAMCADDRCALC_MIMX9_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_SramcAddrCalc_MIMX9.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief This structure abstracts SRAMC channel Start and End address
 */
typedef struct
{
    /** @brief Start Address of SRAMC channel */
    uint32 u32StartAddr;
    /** @brief End Address of SRAMC channel */
    uint32 u32EndAddr;
} eMcem_Sramc_ChannelAddressType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define EMCEM_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0410 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_2001 */
#include "eMcem_MemMap.h"

extern eMcem_Sramc_ChannelAddressType eMcem_tSramcChannelAddress[EMCEM_SRAMC_CHANNEL_COUNT];

#define EMCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_0410 */
/* @violates @ref eMcem_SramcAddrCalc_MIMX9_h_REF_2001 */
#include "eMcem_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_SRAMCADDRCALC_MIMX9_H */

/** @} */
