/**
*   @file    eMcem_TestApi.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Test API source.
*   @details This file implements functions for eMcem testing.
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
*   Copyright 2018-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_TestApi_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_TestApi_c_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_c_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_c_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_c_REF_0505
* Violates MISRA 2012 Required Rule 5.5, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_TestApi_c_REF_0807
* Violates MISRA 2012 Advisory Rule 8.7, Functions/variables should not be defined with external linkage.
* This is an internal API function/variable.
*
* @section eMcem_TestApi_c_REF_1008
* Violates MISRA 2012 Required Rule 10.8, A value of a composite expression shall not be cast to a different
* essential type category or a wider essential type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_TestApi_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, A conversions should not be performed between a pointer to
* object and an integer type.
* Unavoidable when addressing memory mapped registers
*
* @section eMcem_TestApi_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed between pointer to void
* and an arithmetic type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_TestApi_c_REF_2001
* Violates MISRA 2012 Advisory Rule 20.1, #include statements in a file should only be preceded by other
* preprocessor directives or comments.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "Platform_Types.h"
#include "eMcem_TestApi.h"
#include "Reg_eSys_Vfccu_MIMX9.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_TESTAPI_SW_MAJOR_VERSION_C           0
#define EMCEM_TESTAPI_SW_MINOR_VERSION_C           8
#define EMCEM_TESTAPI_SW_PATCH_VERSION_C           4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_TESTAPI_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_TESTAPI_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_TESTAPI_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_TestApi.c and MIMX9XX_SAF version are different"
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
/* @violates @ref eMcem_TestApi_c_REF_0501 */
/* @violates @ref eMcem_TestApi_c_REF_0502 */
/* @violates @ref eMcem_TestApi_c_REF_0504 */
/* @violates @ref eMcem_TestApi_c_REF_0505 */
#define EMCEM_START_SEC_VAR_NO_INIT_UNSPECIFIED
/* @violates @ref eMcem_TestApi_c_REF_0410 */
/* @violates @ref eMcem_TestApi_c_REF_2001 */
#include "eMcem_MemMap.h"

/**
* @brief      eMCEM Test handlers array.
*/
/* @violates @ref eMcem_TestApi_c_REF_0807 */
eMcem_FccuHandlerType eMcem_TestHandlers[EMCEM_VFCCU_FAULT_LINES_COUNT];

/* @violates @ref eMcem_TestApi_c_REF_0501 */
/* @violates @ref eMcem_TestApi_c_REF_0502 */
/* @violates @ref eMcem_TestApi_c_REF_0504 */
/* @violates @ref eMcem_TestApi_c_REF_0505 */
#define EMCEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/* @violates @ref eMcem_TestApi_c_REF_0410 */
/* @violates @ref eMcem_TestApi_c_REF_2001 */
#include "eMcem_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_TestApi_c_REF_0410 */
/* @violates @ref eMcem_TestApi_c_REF_2001 */
#include "eMcem_MemMap.h"

static Std_ReturnType eMcem_ReconfigureFccuRegs( uint32 u32RegisterPosition3b, uint32 u32BitPosition3b );
static Std_ReturnType eMcem_RestoreFccuRegs( uint32 u32RegisterPosition3b, uint32 u32BitPosition3b );

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Enable IRQ immediate reaction and reset delayed reaction registers
*
* @param[in]  u32RegisterPosition3b   Register index to configure
* @param[in]  u32BitPosition3b        Bit position to enable
*
* @return     Std_ReturnType
*                   E_OK      Fault related bits were enabled successfully
*                   E_NOT_OK  Fault related bits were not enabled
*
*/
static Std_ReturnType eMcem_ReconfigureFccuRegs( uint32 u32RegisterPosition3b, uint32 u32BitPosition3b )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;
    uint32 u32RegisterValue;
    uint32 exitLoop = 10UL;
    uint32 u32index = 0UL;

    do
    {
        /* Disable FHID before making any changes to the configuration in the FHID space */
        /* @violates @ref eMcem_TestApi_c_REF_1008 */
        /* @violates @ref eMcem_TestApi_c_REF_1104 */
        /* @violates @ref eMcem_TestApi_c_REF_1106 */
        SAFETYBASE_REG_WRITE32( FCCU_FHCFG0_ADDR32, 0 );

        /* Clear all SW-clearable faults. HW-clearable faults deassert when the fault line is cleared by the source */
        for (u32index = 0UL; u32index < EMCEM_VFCCU_FAULT_STATUS_REG_COUNT; u32index++)
        {
            SAFETYBASE_REG_WRITE32(FCCU_FHFLTS0_ADDR32(u32index), 0xFFFFFFFFU);
        }

        /* Decrement counter for exiting possible never-ending loop */
        exitLoop--;

        /* Check if fault is still pending for any FHID - the HW doesn't allow the FHID to be disabled in this case */
        u32RegisterValue = SAFETYBASE_REG_READ32(FCCU_FHCFG0_ADDR32);
        for (u32index = 0UL; u32index < EMCEM_VFCCU_FAULT_STATUS_REG_COUNT; u32index++)
        {
            u32RegisterValue += SAFETYBASE_REG_READ32(FCCU_FHFLTS0_ADDR32(u32index));
        }
    }
    while (( u32RegisterValue != 0UL ) && ( exitLoop != 0UL ));

    if (exitLoop != 0UL)
    {
        nReturnValue = (Std_ReturnType)E_OK;
    }

    /* Read the reaction set for given fault line */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    u32RegisterValue = SAFETYBASE_REG_READ32( FCCU_FHFLTRKC0_ADDR32( u32RegisterPosition3b ) );

    /* Clear specific reaction set */
    u32RegisterValue &= ~( FCCU_REG_MASK_U3 << u32BitPosition3b );

    /* Set the reaction set to zero for given fault line */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHFLTRKC0_ADDR32( u32RegisterPosition3b ), u32RegisterValue );

    /* Set IRQ as immediate reaction for a corresponding reaction set (0) */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHIMRKC0_ADDR32( 0 ), FCCU_IRQ0_REACT_MASK );

    /* Set Reset as delayed reaction for a corresponding reaction set (0) */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHDLRKC0_ADDR32( 0 ), FCCU_RES_REACT_MASK );

    /* Enable FHID back and restart fault reaction signaling */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHCFG0_ADDR32, 1 );

    return nReturnValue;
}

/**
* @brief      Restore specific bit in delayed and immediate reaction registers
*
* @param[in]  u32RegisterPosition3b   Register index to configure
* @param[in]  u32BitPosition3b        Bit position to reconfigure
*
* @return     Std_ReturnType
*                   E_OK      Fault related bits were reconfigured successfully
*                   E_NOT_OK  Fault related bits were not reconfigured
*
*/
static Std_ReturnType eMcem_RestoreFccuRegs( uint32 u32RegisterPosition3b, uint32 u32BitPosition3b)
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;
    uint32 u32RegisterValue;
    uint32 exitLoop = 10UL;
    uint32 u32index = 0UL;

    do
    {
        /* Disable FHID before making any changes to the configuration in the FHID space */
        /* @violates @ref eMcem_TestApi_c_REF_1008 */
        /* @violates @ref eMcem_TestApi_c_REF_1104 */
        /* @violates @ref eMcem_TestApi_c_REF_1106 */
        SAFETYBASE_REG_WRITE32( FCCU_FHCFG0_ADDR32, 0 );

        /* Clear all SW-clearable faults. HW-clearable faults deassert when the fault line is cleared by the source */
        for (u32index = 0UL; u32index < EMCEM_VFCCU_FAULT_STATUS_REG_COUNT; u32index++)
        {
            SAFETYBASE_REG_WRITE32(FCCU_FHFLTS0_ADDR32(u32index), 0xFFFFFFFFU);
        }

        /* Decrement counter for exiting possible never-ending loop */
        exitLoop--;

        /* Check if fault is still pending for any FHID - the HW doesn't allow the FHID to be disabled in this case */
        u32RegisterValue = SAFETYBASE_REG_READ32(FCCU_FHCFG0_ADDR32);
        for (u32index = 0UL; u32index < EMCEM_VFCCU_FAULT_STATUS_REG_COUNT; u32index++)
        {
            u32RegisterValue += SAFETYBASE_REG_READ32(FCCU_FHFLTS0_ADDR32(u32index));
        }
    }
    while (( u32RegisterValue != 0UL ) && ( exitLoop != 0UL ));

    if (exitLoop != 0UL)
    {
        nReturnValue = (Std_ReturnType)E_OK;
    }

    /* Get the reaction set for given fault line */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    u32RegisterValue = SAFETYBASE_REG_READ32( FCCU_FHFLTRKC0_ADDR32( u32RegisterPosition3b ) );

    /* Clear specific reaction set */
    u32RegisterValue &= ~( FCCU_REG_MASK_U3 << u32BitPosition3b );

    /* Set specific reaction set from configuration */
    u32RegisterValue |= (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultReactionSet[u32RegisterPosition3b] & ( FCCU_REG_MASK_U3 << u32BitPosition3b ));

    /* Store specific reaction set */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHFLTRKC0_ADDR32( u32RegisterPosition3b ), u32RegisterValue );

    /* Get the current immediate reaction setting for selected reaction set */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    u32RegisterValue = SAFETYBASE_REG_READ32( FCCU_FHIMRKC0_ADDR32( 0 ));

    /* Clear specific immediate reaction */
    u32RegisterValue &= ~FCCU_IRQ0_3_REACT_MASK;

    /* Set specific immediate reaction from configuration */
    u32RegisterValue |= (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32ImmReaction[0]);

    /* Store immediate reaction for a corresponding reaction set */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHIMRKC0_ADDR32( 0 ), u32RegisterValue );

    /* Get the current delayed reaction setting for selected reaction set */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    u32RegisterValue = SAFETYBASE_REG_READ32( FCCU_FHDLRKC0_ADDR32( 0 ));

    /* Clear specific delayed reaction */
    u32RegisterValue &= ~FCCU_RES_REACT_MASK;

    /* Set specific delayed reaction from configuration */
    u32RegisterValue |= (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32DelReaction[0]);

    /* Store delayed reaction for a corresponding reaction set */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHDLRKC0_ADDR32( 0 ), u32RegisterValue );

    /* Enable FHID back and restart fault reaction signaling */
    /* @violates @ref eMcem_TestApi_c_REF_1008 */
    /* @violates @ref eMcem_TestApi_c_REF_1104 */
    /* @violates @ref eMcem_TestApi_c_REF_1106 */
    SAFETYBASE_REG_WRITE32( FCCU_FHCFG0_ADDR32, 1 );

    return nReturnValue;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Get fault configuration
* @details    Get configuration of specific fault
*
* @param[in]  nFaultId        ID of fault to disable
* @param[out] faultConfig     Fault specific configuration
*
* @return     void
*
* @api        The object is an API and must be documented in the user manual.
*
* @implements DD_eMcem_GetFaultConfig
*
* @violates @ref eMcem_TestApi_c_REF_0807
*
*/
void eMcem_GetFaultConfig( eMcem_FaultType nFaultId, eMcem_FaultConfigType *faultConfig )
{
    uint32 u32RegisterPosition  = (uint32)nFaultId >> FCCU_REG_SHIFT_U8;
    uint32 u32BitPosition       = (uint32)nFaultId &  FCCU_REG_MASK_U8;

    /* Get fault configuration bits from FCCU config and set them into faultConfig structure */
    /* Get NCF Enable bit */
    faultConfig->Fault_Ncf_E = eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultEnabled[u32RegisterPosition] & ( 1UL << u32BitPosition );
}

/**
* @brief      Install test handler
* @details    Install high-priority Alarm Interrupt Handler. This will be used instead of the user alarm handler
*
* @param[in]  nFaultId        ID of handler to install
* @param[in]  handler         High-priority Alarm Interrupt Handler function to install
*
* @return     Std_ReturnType
*                   E_OK      Fault handler was installed successfully
*                   E_NOT_OK  Fault handler has not been installed
*
* @api        The object is an API and must be documented in the user manual.
*
* @implements DD_eMcem_InstallTestHandler
*
* @violates @ref eMcem_TestApi_c_REF_0807
*
*/
Std_ReturnType eMcem_InstallTestHandler( eMcem_FaultType nFaultId, eMcem_FccuHandlerType handler )
{
    Std_ReturnType nReturnValue  = (Std_ReturnType)E_NOT_OK;
    uint32 u32RegisterPosition   = (uint32)nFaultId >> FCCU_REG_SHIFT_U8;
    uint32 u32BitPosition        = (uint32)nFaultId &  FCCU_REG_MASK_U8;
    uint32 u32RegisterPosition3b = (uint32)nFaultId >> FCCU_REG_SHIFT_U3;
    uint32 u32BitPosition3b      = ((uint32)nFaultId % FCCU_REACTION_SETS_PER_REG) * FCCU_SHIFT_REACTION_SET_IN_REG;
    uint32 u32ReactionSet3b;

    /* Check if NCF fault channel is enabled */
    if( (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultEnabled[u32RegisterPosition] & ( 1UL << u32BitPosition )) > 0UL )
    {
        /* Read & decode reaction set */
        u32ReactionSet3b = eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultReactionSet[u32RegisterPosition3b] & ( FCCU_REG_MASK_U3 << u32BitPosition3b );
        u32ReactionSet3b = u32ReactionSet3b >> u32BitPosition3b;

        /* Check if severity 1 fault has IRQ immediate reaction enabled + severity 3 fault has RESET delayed reaction enabled */
        TODO_MESSAGE("nxf85804-11122024: Check whether Delayed Interrupt reaction condition is safe.")
        if ((((eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32ImmReaction[u32ReactionSet3b] & FCCU_IRQ0_3_REACT_MASK) > 0UL ) &&
           ((eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32DelReaction[u32ReactionSet3b] & FCCU_RES_REACT_MASK) > 0UL )) ||
           ((eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32DelReaction[u32ReactionSet3b] & FCCU_IRQ0_3_REACT_MASK) > 0UL ))
        {
            /* Severity 1 + severity 3 faults - Install handler only */
            eMcem_TestHandlers[nFaultId] = handler;

            nReturnValue = (Std_ReturnType)E_OK;
        }
        /* Check if severity 3 fault has RESET immediate reaction enabled */
        else if ((eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32ImmReaction[u32ReactionSet3b] & FCCU_RES_REACT_MASK) > 0UL )
        {
            /* Enable IRQ immediate reaction and reset delayed reaction registers */
            nReturnValue = eMcem_ReconfigureFccuRegs( u32RegisterPosition3b, u32BitPosition3b );

            if( (Std_ReturnType)E_OK == nReturnValue )
            {
                /* Install handler */
                eMcem_TestHandlers[nFaultId] = handler;
            }
        }
        else
        {
            /* Do nothing. */
        }
    }

    return nReturnValue;
}

/**
* @brief      Uninstall test handler
* @details    Remove high-priority Alarm Interrupt Handler
*
* @param[in]  nFaultId        ID of handler to remove
*
* @return     Std_ReturnType
*                   E_OK      Fault handler was restored successfully
*                   E_NOT_OK  Fault handler has not been restored
*
* @api        The object is an API and must be documented in the user manual.
*
* @implements DD_eMcem_UninstallTestHandler
*
* @violates @ref eMcem_TestApi_c_REF_0807
*
*/
Std_ReturnType eMcem_UninstallTestHandler( eMcem_FaultType nFaultId )
{
    Std_ReturnType nReturnValue  = (Std_ReturnType)E_NOT_OK;
    uint32 u32RegisterPosition   = (uint32)nFaultId >> FCCU_REG_SHIFT_U8;
    uint32 u32BitPosition        = (uint32)nFaultId &  FCCU_REG_MASK_U8;
    uint32 u32RegisterPosition3b = (uint32)nFaultId >> FCCU_REG_SHIFT_U3;
    uint32 u32BitPosition3b      = ((uint32)nFaultId % FCCU_REACTION_SETS_PER_REG) * FCCU_SHIFT_REACTION_SET_IN_REG;
    uint32 u32ImmReactionValue;
    uint32 u32DelReactionValue;
    uint32 u32FltReactSet;

    /* Check if NCF fault channel is enabled */
    if( ( eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultEnabled[u32RegisterPosition] & ( 1UL << u32BitPosition )) > 0UL )
    {
        /* Get the reaction set for given fault line */
        /* @violates @ref eMcem_TestApi_c_REF_1008 */
        /* @violates @ref eMcem_TestApi_c_REF_1104 */
        /* @violates @ref eMcem_TestApi_c_REF_1106 */
        u32FltReactSet = (SAFETYBASE_REG_READ32( FCCU_FHFLTRKC0_ADDR32( u32RegisterPosition3b )));

        /* Get the immediate reaction settings for selected reaction set */
        /* @violates @ref eMcem_TestApi_c_REF_1008 */
        /* @violates @ref eMcem_TestApi_c_REF_1104 */
        /* @violates @ref eMcem_TestApi_c_REF_1106 */
        u32ImmReactionValue = SAFETYBASE_REG_READ32( FCCU_FHIMRKC0_ADDR32( 0 ));

        /* Get the delayed reaction settings for selected reaction set */
        /* @violates @ref eMcem_TestApi_c_REF_1008 */
        /* @violates @ref eMcem_TestApi_c_REF_1104 */
        /* @violates @ref eMcem_TestApi_c_REF_1106 */
        u32DelReactionValue = SAFETYBASE_REG_READ32( FCCU_FHDLRKC0_ADDR32( 0 ));

        /* Check if delayed and/or immediate reaction enable registers needs to be reconfigured */
        TODO_MESSAGE("nxf85804-11122024: Check whether Delayed Interrupt reaction condition is safe.")
        if (((((u32ImmReactionValue & FCCU_IRQ0_3_REACT_MASK) == (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32ImmReaction[0] & FCCU_IRQ0_3_REACT_MASK)) &&
           ((u32DelReactionValue & FCCU_RES_REACT_MASK) == (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32DelReaction[0] & FCCU_RES_REACT_MASK))) ||
           ((u32DelReactionValue & FCCU_IRQ0_3_REACT_MASK) == (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32DelReaction[0] & FCCU_IRQ0_3_REACT_MASK))) &&
           (u32FltReactSet == (eMcem_pConfigPtr->eMcem_CVfccuCfg->eMcem_FhidCfg.u32FaultReactionSet[u32RegisterPosition3b])))
        {
            /* No need to reconfigure delayed and immediate reaction registers, just uninstall the handler */
            eMcem_TestHandlers[nFaultId] = NULL_PTR;

            nReturnValue = (Std_ReturnType)E_OK;
        }
        else
        {
            /* Reconfigure specific bit in delayed and immediate reaction registers */
            nReturnValue = eMcem_RestoreFccuRegs( u32RegisterPosition3b, u32BitPosition3b );

            /* Uninstall handler */
            eMcem_TestHandlers[nFaultId] = NULL_PTR;
        }
    }

    return nReturnValue;
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_TestApi_c_REF_0410 */
/* @violates @ref eMcem_TestApi_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
