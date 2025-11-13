/**
 *   @file    sBase_Stubs.c
 *   @version 0.8.4
 *
 *   @brief   MIMX9XX_SAF Demo - MIMX9XX_SAF sBase stubs definitions.
 *   @details Contains definitions of the MIMX9XX_SAF sBase stub functions and variables to be implemented by the user.
 *
 * This file contains sample code only. It is not part of the production code deliverables.
 *
 * @addtogroup DEMO_COMPONENT
 * @{
 */
/*==================================================================================================
*   Project              : MIMX9XX_SAF
*   Platform             : CORTEXM
*
*   SW Version           : 0.8.4
*   Build Version        : MIMX95_SAF_0_8_4_20250110
*
*   Copyright 2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "SafetyBase.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**************************************************************************************************/
/*                                      sBase example code                                        */
/**************************************************************************************************/
#define SBASE_START_SEC_CODE
#include "sBase_MemMap.h"

/**
 * @brief This handle the spurious interrupt occurence
 */
void sBase_SpuriousIRQHandler(void)
{
    /* User code to notify about spurious interrupt occurence */
}

#define SBASE_STOP_SEC_CODE
#include "sBase_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
