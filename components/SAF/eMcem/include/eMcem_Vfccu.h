/**
*   @file    eMcem_Vfccu.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - VFCCU IP header.
*   @details Contains declarations of VFCCU IP functions for eMcem module.
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
*   Copyright 2022-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_VFCCU_H
#define EMCEM_VFCCU_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Vfccu_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Vfccu_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Vfccu_h_REF_0505
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
#include "eMcem_Vfccu_Types.h"
#include "eMcem_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*!
 * @name eMCEM VFCCU internal function definitions SW version
 */
/** @{ */

/*!
* @brief    eMCEM VFCCU internal function definitions - SW major version
*/
#define EMCEM_VFCCU_SW_MAJOR_VERSION             0
/*!
* @brief    eMCEM VFCCU internal function definitions - SW minor version
*/
#define EMCEM_VFCCU_SW_MINOR_VERSION             8
/*!
* @brief    eMCEM VFCCU internal function definitions - SW patch version
*/
#define EMCEM_VFCCU_SW_PATCH_VERSION             4
/** @} */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_VFCCU_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_VFCCU_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_VFCCU_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Vfccu.h and MIMX9XX_SAF version are different"
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
/*!
* @brief    Macro marking the beginning of CODE section. The memory section for code.
*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Vfccu_h_REF_0410 */
#include "eMcem_MemMap.h"

/*!
* @brief      VFCCU Init function
* @details    Initialization function for the VFCCU IP
*
* @param[in]  pConfigPtr  Configuration pointer used for initialization
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      Initialization was executed correctly
* @retval           EMCEM_E_NOT_OK  Initialization was not executed correctly
*
*/
Std_ReturnType eMcem_Vfccu_Init( const eMcem_ConfigType *pConfigPtr );

/*!
* @brief      Get errors function
* @details    Function gets logged errors from the VFCCU IP and stores them in the error container
*
* @param[out] pFaultContainer    Error container where the errors will be stored
* @param[out] pFaultAccumulator  Accumulator where all fault bits are aggregated
*
*/
void eMcem_Vfccu_GetErrors( uint32 pFaultContainer[], uint32 *pFaultAccumulator );

/*!
* @brief      Clear fault function
* @details    Function shall clear error flag for a specified fault.
*
* @param[in]  nFaultId              The ID of the fault that shall be cleared
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      Fault was cleared successfully
* @retval           EMCEM_E_NOT_OK  Fault was not cleared
*
* @implements DD_eMcem_ClearFaults_seq
*
*/
Std_ReturnType eMcem_Vfccu_ClearFaults( eMcem_FaultType nFaultId );

/*!
* @brief      Read EOUT signal
* @details    A function to read one of the EOUT signals from EINOUT register. For testing.
*
* @param[in]  errorOutput    ID of EOUT signal to read.
*
* @return     EOUT signal value
*
*/
uint8 eMcem_Vfccu_ReadErrorOutput( eMcem_ErrorOutputType errorOutput );

/*!
* @brief      Write EOUT signal
* @details    A function to write one of the EOUT signals to GEOUTPNC register.
*
* @param[in]  errorOutput    ID of EOUT signal to write.
* @param[in]  value          EOUT signal value to write.
*
* @return     void
*
*/
void eMcem_Vfccu_WriteErrorOutput( eMcem_ErrorOutputType errorOutput, uint8 u8Value );

/*!
* @brief      Assert software VFCCU fault.
* @details    Sets reaction line for software fault.
*
* @param[in]  u8SwFaultId      ID of the SW fault that shall be asserted.
*
*/
void eMcem_Vfccu_AssertSWFault( uint8 u8SwFaultId );

/*!
* @brief      Deassert software VFCCU fault.
* @details    Clears the software fault on the corresponding reaction line.
*
* @param[in]  u8SwFaultId      ID of the SW fault that shall be deasserted.
*
*/
void eMcem_Vfccu_DeassertSWFault( uint8 u8SwFaultId );

/*!
* @brief      Activate or deactivate EOUT signaling.
* @details    A function to activate or deactivate the signaling of EOUT pins. Sets output buffer enable control
*             to either valid state (cannot be overridden) or invalid state (can be overridden)
*
* @param[in]  errorOutput   ID of EOUT pin to de/activate.
* @param[in]  state         State to set. Activate or deactivate EOUT signals.
*
* @return     EMCEM_E_OK    State has been changed
*
*/
Std_ReturnType eMcem_Vfccu_SetEOUTSignaling( eMcem_ErrorOutputType errorOutput, eMcem_EOUTStateType state );

/*!
* @brief      Control EOUT signaling mode.
* @details    A function to set the controlling mode of EOUT pins.
*
* @param[in]  errorOutput   ID of EOUT pin to de/activate.
* @param[in]  mode          Controlling mode to set. EOUT signals to be driven by FSM, LOW, or HIGH.
*
* @return     EMCEM_E_OK    Controlling mode has been changed
*
*/
Std_ReturnType eMcem_Vfccu_SetEOUTControlMode( eMcem_ErrorOutputType errorOutput, eMcem_EOUTModeType mode );

/*!
* @brief      VFCCU Alarm Interrupt routine.
* @details    An ALARM Interrupt is generated when a properly configured fault generates a transition
*             to the ALARM state. The status (fault triggering interrupt) can be obtained
*             through frozen status registers.
*
* @implements DD_eMcem_VFCCU_ALARM_ISR
*
* @violates @ref eMcem_cVfccu_Irq_c_REF_0807
*
*/
void VFCCU_ALARM_ISR( void );

/**
* @brief      Obtain status of Svr1 fault reaction from VFCCU
* @details    A function for filling given container of eMcem_ReactionStatusType type with values of VFCCU Global DID FSM Status,
*             Global Reaction Timer and Status registers.
*
* @param[out] pReactionStatus    Pointer to the structure to be filled with current values of VFCCU Global Reaction Timer
*                                Period, VFCCU Global Reaction Timer Status, and VFCCU Global DID FSM Status registers.
*
*/
void eMcem_Vfccu_GetReactionStatus( eMcem_ReactionStatusType *pReactionStatus );

/*!
* @brief    Macro marking the end of CODE section.
*/
#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Vfccu_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_VFCCU_H */

/** @} */
