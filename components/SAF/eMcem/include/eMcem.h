/**
*   @file    eMcem.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - API header
*   @details Contains declarations of the eMcem API functions.
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
*   Copyright 2012-2016 Freescale
*   Copyright 2016-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_H
#define EMCEM_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_h_REF_0205
* Violates MISRA 2012 Advisory Rule 2.5, There shall be no unused macros.
* This is an API function.
*
* @section eMcem_h_REF_0409
* Violates MISRA 2012 Advisory Rule 4.9, Usage of macros for faster retrieval of information about faults.
*
* @section eMcem_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
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
#include "eMcem_FailurePointList_Ext.h"
#include "eMcem_Erm.h"
#include "eMcem_ErmApi.h"
#include "eMcem_Cfg.h"
#include "eMcem_Lib_Ext.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*!
 * @name Overall eMCEM SW version
 */
/** @{ */

/*!
* @brief    Overall eMCEM - SW major version
*/
#define EMCEM_SW_MAJOR_VERSION             0
/*!
* @brief    Overall eMCEM - SW minor version.
*/
#define EMCEM_SW_MINOR_VERSION             8
/*!
* @brief    Overall eMCEM - SW patch version
*/
#define EMCEM_SW_PATCH_VERSION             4
/** @} */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief      Access macro for querying collected fault status.
* @details    This macro provides access to the individual fault status from the collection filled by a call to the eMcem_Geterrors() function.
*
* @param[in]  pErrorContainer Collected fault status structure (eMcem_FaultContainerType).
* @param[in]  nFaultId        Fault ID to be queried.
*
* @return     logical
* @retval           ==0       The given fault is not asserted or the ID is not valid.
* @retval           !=0       The given fault is asserted.
*
* @implements DD_eMcem_FAULT_PENDING
*
*/
/* @api        The object is an API and must be documented in the user manual. */
#define EMCEM_FAULT_PENDING( pErrorContainer, nFaultId ) (eMcem_FaultPending( pErrorContainer, nFaultId ))

/**
* @brief      Access macro for stored eMcem_Geterrors() return status.
* @details    This macro provides access to the stored return value as returned by the call to the eMcem_Geterrors() function.
*
* @param[in]  pErrorContainer          Collected fault status structure (eMcem_FaultContainerType).
*
* @return     Std_ReturnType
* @retval           E_OK               No fault is pending.
* @retval           E_FAULT_DETECTED   There is at least one logged fault.
*
* @implements DD_eMcem_GETERRORS_STATUS
*
*/
/* @api        The object is an API and must be documented in the user manual. */
#define EMCEM_GETERRORS_STATUS( pErrorContainer )    (eMcem_GetErrorsStatus( pErrorContainer ))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/**
* @brief    Macro marking the beginning of VAR_NO_INIT_UNSPECIFIED section. This is Memory Section
*           for variables, structures, arrays, when the SIZE (alignment) does not fit the criteria
*           of 8, 16 or 32 bit. These variables are not initialized with values after every reset.
*/
#define EMCEM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
/* @violates @ref eMcem_h_REF_0410 */
#include "eMcem_MemMap.h"

/**
* @brief          Driver state.
* @details        The eMCEM driver changes state during start-up or runtime from EMCEM_S_UINIT to EMCEM_S_INITIALIZED.
*/
extern eMcem_StateType eMcem_DriverState;

/**
* @brief    Macro marking the end of VAR_ZERO_INIT_UNSPECIFIED.
*/
#define EMCEM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
/* @violates @ref eMcem_h_REF_0410 */
#include "eMcem_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
* @brief    Macro marking the beginning of CODE section. This is memory section for code.
*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_h_REF_0410 */
#include "eMcem_MemMap.h"

/**
* @brief      Inline function used by the EMCEM_FAULT_PENDING macro (to prevent compiler warnings)
* @details    This function provides access to the individual fault status from the collection filled by a call to the eMcem_Geterrors() function.
*
* @param[in]  pErrorContainer Collected fault status structure (eMcem_FaultContainerType).
* @param[in]  nFaultId        Fault ID to be queried.
*
* @return     logical
* @retval           ==0       The given fault is not asserted or the ID is not valid.
* @retval           !=0       The given fault is asserted.
*
*/
static inline uint32 eMcem_FaultPending( const eMcem_FaultContainerType *pErrorContainer, eMcem_FaultType nFaultId )
{
    uint32 u32ReturnValue = 0UL;
    uint8 u8RegisterPosition = (uint8)( nFaultId >> EMCEM_FAULT_CONTAINER_SHIFT );
    uint8 u8BitPosition      = (uint8)( nFaultId &  EMCEM_FAULT_CONTAINER_MASK );

    if( EMCEM_FAULT_IN_RANGE( nFaultId ) )
    {
        u32ReturnValue = ( pErrorContainer->au32Faults[u8RegisterPosition] ) & ( 1UL << u8BitPosition );
    }

    return u32ReturnValue;
}

/**
* @brief      Inline function for stored eMcem_Geterrors() return status.
* @details    This function provides access to the stored return value as returned by the call to the eMcem_Geterrors() function.
*
* @param[in]  pErrorContainer          Collected fault status structure (eMcem_FaultContainerType).
*
* @return     Std_ReturnType
* @retval           E_OK               No fault is pending.
* @retval           E_FAULT_DETECTED   There is at least one logged fault.
*
*/
static inline Std_ReturnType eMcem_GetErrorsStatus( const eMcem_FaultContainerType *pErrorContainer )
{
    return pErrorContainer->nErrorStatus;
}

/**
* @brief      Initialize the eMCEM driver.
* @details    The function initializes the eMCEM driver according to
*             the configuration passed as parameter (post-build) or according to
*             the static one (pre-compile).
*
* @param[in]  pConfigPtr      Configuration pointer referring to the
*                             configuration structure.
*
* @return     Std_ReturnType
* @retval           E_OK      Initialization of the driver succeeded. The driver
*                             is functional and its state is EMCEM_S_INITIALIZED.
* @retval           E_NOT_OK  Initialization of the driver did not succeed.
*                             Configuration timeout expired, or the register
*                             configuration failed. Driver state is
*                             EMCEM_S_UNINIT.
*/
Std_ReturnType eMcem_Init( const eMcem_ConfigType *pConfigPtr );

/**
* @brief      Inject a fault.
* @details    Implements mechanism of the eMCEM driver to inject faults into the hardware and test the reaction.
*
* @param[in]  nFaultId        ID of the fault that shall be injected.

* @return     Std_ReturnType
* @retval           E_OK      Fault has been injected.
* @retval           E_NOT_OK  Fault has not been injected.
*
* @pre        Driver shall be initialized.
*/
Std_ReturnType eMcem_InjectFault( eMcem_FaultType nFaultId );

/**
* @brief      Return logged error status.
* @details    Function stores status of each NCF into a container provided by
*             the application.
*
* @param[out] pErrorContainer         Error container pointer.
*
* @return     Std_ReturnType
* @retval           E_OK              No fault is pending.
* @retval           E_FAULT_DETECTED  There is at least one logged fault.
* @retval           E_NOT_OK          Otherwise (error container pointer is not
*                                     valid).
*/
Std_ReturnType eMcem_GetErrors( eMcem_FaultContainerType *pErrorContainer );

/**
* @brief      Clear software recoverable fault.
* @details    When a software recoverable fault occurs, a software routine shall
*             remove the fault cause and then it shall clear the fault status
*             using this function.
*
* @param[in]  nFaultId        ID of the fault that shall be cleared. If the
*                             fault is not marked as software recoverable, the
*                             request is ignored.
*
* @return     Std_ReturnType
* @retval           E_OK      Fault was cleared successfully.
* @retval           E_NOT_OK  Fault was not cleared.
*/
Std_ReturnType eMcem_ClearFaults( eMcem_FaultType nFaultId );

/**
* @brief      Read EOUT signal
* @details    A function to read one of the EOUT signals from EINOUT register. For testing.
*
* @param[in]  errorOutput     ID of EOUT signal to read.
*
* @return     EOUT signal value
*/
uint8 eMcem_ReadErrorOutput( eMcem_ErrorOutputType errorOutput );

/**
* @brief      Write EOUT signal
* @details    A function to write one of the EOUT signals to EINOUT register. For testing.
*
* @param[in]  errorOutput     ID of EOUT signal to write.
* @param[in]  value           value to write.
*/
void eMcem_WriteErrorOutput( eMcem_ErrorOutputType errorOutput, uint8 value );

/**
* @brief      Assert FCCU software fault.
* @details    Set SW_NCF register bit to trigger a software fault into FCCU.
*             Note: When interacting with SW fault NCFs other than for CM33 in AONMIX,
*             please make sure that FCCU_SW_FAULTS register of the relevant
*             MIX is accessible (e.g. write access allowed by TRDC configuration, MIX being powered-up and clocked, etc.)
*             and that potential race conditions are avoided by application.
*
* @param[in]  nFaultId        ID of the SW fault that shall be asserted.
*
* @return     Std_ReturnType
* @retval           E_OK      SW fault has been asserted successfully.
* @retval           E_NOT_OK  SW fault has not been asserted.
*/
Std_ReturnType eMcem_AssertSWFault( eMcem_FaultType nFaultId );

/**
* @brief      Deassert FCCU software fault.
* @details    Clear SW_NCF register bit to stop the triggering of software fault
*             into FCCU.
*             Note: When interacting with SW fault NCFs other than for CM33 in AONMIX,
*             please make sure that FCCU_SW_FAULTS register of the relevant
*             MIX is accessible (e.g. write access allowed by TRDC configuration, MIX being powered-up and clocked, etc.)
*             and that potential race conditions are avoided by application.
*
* @param[in]  nFaultId        ID of the SW fault that shall be deasserted.
*
* @return     Std_ReturnType
* @retval           E_OK      SW fault has been deasserted successfully.
* @retval           E_NOT_OK  SW fault has not been deasserted.
*/
Std_ReturnType eMcem_DeassertSWFault( eMcem_FaultType nFaultId );

/**
* @brief      Correct correctable error
* @details    Function corrects (reads and writes the value) the correctable error of ERM channel
*
* @param[in]  addr         The address at which the error should be corrected
*/
void eMcem_CorrectCorrMemErr( uint32 addr );

/**
* @brief      Get memory error info
* @details    Function retrieves the type, address and ECC syndrome of the last memory error. If available for any channel, provides
*             validated address (in defined address range), otherwise provides only raw data read from error address register.
*
* @param[in]  nChannelId      Memory error source ID
* @param[out] pInfo           Structure with type, raw address data, validated address (if available), and syndrome of the last memory error
*
* @return     Std_ReturnType
* @retval           E_OK      No error occurred
* @retval           E_NOT_OK  An error occurred (correctable, non-correctable or both flags are set) or the pInfo is not initialized.
*
* @pre        pInfo pointer shall not be null.
*/
Std_ReturnType eMcem_GetMemErrInfo( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo );

#if( STD_ON == EMCEM_EXT_DIAG_ENABLED )
/**
* @brief      Get extended diagnostic data.
* @details    A function to retrieve last API call error diagnostic data.
*
* @param[out] pExtDiagData   Structure with diagnostic data
*
* @pre        pExtDiagData pointer shall not be null.
*/
void eMcem_GetExtDiagData( eMcem_ExtDiagDataType *pExtDiagData );
#endif

/**
* @brief      Activate or deactivate EOUT signaling.
* @details    A function to activate or deactivate the signaling of EOUT pins.
*
* @param[in]  errorOutput ID of EOUT pin to de/activate.
* @param[in]  state       State to set. Activate or deactivate EOUT signals.
*
* @return     Std_ReturnType
* @retval           E_OK      State has been changed
* @retval           E_NOT_OK  State has not been changed.
*/
Std_ReturnType eMcem_SetEOUTSignaling( eMcem_ErrorOutputType errorOutput, eMcem_EOUTStateType state );

/**
* @brief      Control EOUT signaling mode.
* @details    A function to set the controlling mode of EOUT pins.
*
* @param[in]  errorOutput ID of EOUT pin to de/activate.
* @param[in]  mode        Controlling mode to set. EOUT signals to be driven by FSM, LOW, or HIGH.
*
* @return     Std_ReturnType
* @retval           E_OK      Controlling mode has been changed
* @retval           E_NOT_OK  Controlling mode has not been changed.
*/
Std_ReturnType eMcem_SetEOUTControlMode( eMcem_ErrorOutputType errorOutput, eMcem_EOUTModeType mode );

/**
* @brief      Configures channel's descriptor words
* @details    Function configures descriptor words for given EIM channel. Up to two bits to inject
*
* @param[in]  nChannelId     ID of the EIM channel, where to set the error injection bit
* @param[in]  u16BitPos1     First bit position within EIM channel to be set. To not inject, set this to EMCEM_EIM_BIT_NOT_VALID
* @param[in]  u16BitPos2     Second bit position within EIM channel to be set. To not inject, set this to EMCEM_EIM_BIT_NOT_VALID
*
* @return     Std_ReturnType
* @retval           E_OK      Descriptor has been successfully set.
* @retval           E_NOT_OK  Descriptor has not been set.
*/
Std_ReturnType eMcem_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 );

/**
* @brief      Obtain status of Svr1 fault reaction from VFCCU
* @details    API for filling given container of eMcem_ReactionStatusType type with values of VFCCU Global DID FSM Status,
*             Global Reaction Timer and Status registers.
*
* @param[out] pReactionStatus    Pointer to the structure to be filled with current values of VFCCU Global Reaction Timer
*                                Period, VFCCU Global Reaction Timer Status, and VFCCU Global DID FSM Status registers.
*/
void eMcem_GetReactionStatus( eMcem_ReactionStatusType *pReactionStatus );

/*!
 * @brief    User-defined failed Severity 1 fault handler. Function is called when
 *           user-defined fault handler function or default handler function
 *           returns EMCEM_ERR_NOT_RECOVERED.
 *
 * @param[in]     nFaultId      Id of the fault
 */
extern void eMcem_FailedSvr1FaultHandler( eMcem_FaultType nFaultId );

/**
* @brief    Macro marking the end of CODE section.
*/
#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_H */

/** @} */
