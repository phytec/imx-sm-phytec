/**
 *   @file    eMcem_Stubs.c
 *   @version 0.8.4
 *
 *   @brief   MIMX9XX_SAF Demo - MIMX9XX_SAF eMcem stubs definitions.
 *   @details Contains definitions of the MIMX9XX_SAF eMcem stub functions and variables to be implemented by the user.
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
#include "eMcem.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**************************************************************************************************/
/*                                      eMcem example code                                        */
/**************************************************************************************************/
#define EMCEM_START_SEC_CODE
#include "eMcem_MemMap.h"

/**
 * @brief This handle the failed severity1 fault recovery
 */
void eMcem_FailedSvr1FaultHandler (eMcem_FaultType nFaultId)
{
    (void)nFaultId;

    /* User code to handle the failed severity1 fault recovery */
}

#define EMCEM_STOP_SEC_CODE
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
