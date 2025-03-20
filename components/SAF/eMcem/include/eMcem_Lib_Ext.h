/**
*   @file    eMcem_Lib_Ext.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - IP wrapper header.
*   @details Contains declarations of the eMcem IP wrapper functions.
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
*   Copyright 2012, 2013, 2015 Freescale
*   Copyright 2017-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_LIB_EXT_H
#define EMCEM_LIB_EXT_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Lib_Ext_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Lib_Ext_h_REF_1403
* Violates MISRA 2012 Required Rule 14.3, Controlling expression shall not be invariant.
* Condition in this macro is just to secure that no other value than the test mode will
* be entered (e.g. other type-casted value).
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "eMcem_ExtDiagApi.h"
#include "eMcem_Lib_MIMX9.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*!
 * @name eMCEM Lib ext software version
 */
/** @{ */
/**
* @brief    eMCEM LIB extended software major version.
*/
#define EMCEM_LIB_EXT_SW_MAJOR_VERSION             0
/**
* @brief    eMCEM LIB extended software minor version.
*/
#define EMCEM_LIB_EXT_SW_MINOR_VERSION             8
/**
* @brief    eMCEM LIB extended software patch version.
*/
#define EMCEM_LIB_EXT_SW_PATCH_VERSION             4
/** @} */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_LIB_EXT_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_LIB_EXT_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_LIB_EXT_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Lib_Ext.h and MIMX9XX_SAF version are different"
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
* @brief    Macro marking the beginning of CODE section. This is memory section for code.
 */
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Lib_Ext_h_REF_0410 */
#include "eMcem_MemMap.h"

/*!
 * @name eMCEM Lib Ext module functions
 * @{
 */
/*!
* @brief      eMCEM Init functions.
* @details    Function initializing IPs using IPs config structures.
*
* @param[in]  pConfigPtr       Pointer to driver configuration structure.
*
*/
void eMcem_Init_Int( const eMcem_ConfigType *pConfigPtr );

/*!
* @brief      VFCCU init function.
* @details    Function initializing VFCCU using IPs config structures.
*
* @param[in,out] pConfigPtr   Pointer to driver configuration structure.
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      Driver has been initialized correctly and checked using readback.
* @retval           EMCEM_E_NOT_OK  Driver has not been initialized correctly, readback failed.
*
*/
Std_ReturnType eMcem_Vfccu_Init_Int( const eMcem_ConfigType *pConfigPtr );

/**
* @brief      Function to inject fake faults
* @details    Function is used to inject fake faults in order to test the reaction for each fault.
*
* @param[in]  nFaultId     The ID of the fault to be injected
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      Fault has been injected.
* @retval           EMCEM_E_NOT_OK  Fault has not been injected.
*
* @pre        nFaultId is valid
*
*/
Std_ReturnType eMcem_InjectFault_Int( eMcem_FaultType nFaultId );

/**
* @brief      Check if fault ID is valid
* @details    Function to check if fault ID is within range and if the fault is enabled
*
* @param[in]  nFaultId     The ID of the fault to be validated
*
* @return     boolean
*                   TRUE    Fault ID is valid (in range and enabled)
*                   FALSE   Fault ID is not valid (out of range or disabled)
*
* @pre        nFaultId is valid
*
*/
boolean eMcem_CheckValidFault_Int( eMcem_FaultType nFaultId );

/*!
* @brief      Get errors function
* @details    Function gets logged errors from the VFCCU IP and stores them in the error container
*
* @param[in,out] pErrorContainer  Error container where the errors shall be stored.
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK               No fault is pending.
* @retval           EMCEM_E_FAULT_DETECTED   There is at least one logged fault.
*
*/
Std_ReturnType eMcem_GetErrors_Int( eMcem_FaultContainerType *pErrorContainer );

/**
* @brief      Clear fault function
* @details    The function shall clear the specified fault. The fault can be cleared only if the fault
*             cause is eliminated and the fault is marked as software recoverable.
*
* @param[in]  nFaultId        The ID of the fault that shall be cleared
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      The fault has been successfully cleared
* @retval           EMCEM_E_NOT_OK  The fault has not been successfully cleared. Possible causes:
*                                   - the fault source has not been eliminated
*                                   - the fault occurred again
*
* @pre        nFaultId is valid
*
*/
Std_ReturnType eMcem_ClearFaults_Int( eMcem_FaultType nFaultId );

/**
* @brief      eMcem_AssertSWFault_Int
* @details    Asserts SW fault triggering to FCCU if the faultID is correct (in proper range)
*
* @param[in]  nFaultId   The ID of SW fault to assert
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      SW fault has been asserted successfully.
* @retval           EMCEM_E_NOT_OK  SW fault has not been asserted.
*
*/
Std_ReturnType eMcem_AssertSWFault_Int( eMcem_FaultType nFaultId );

/**
* @brief      eMcem_DeassertSWFault_Int
* @details    Deasserts SW fault triggering to FCCU if the faultID is correct (in proper range)
*
* @param[in]  nFaultId   The ID of SW fault to deassert
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      SW fault has been asserted successfully.
* @retval           EMCEM_E_NOT_OK  SW fault has not been asserted.
*
*/
Std_ReturnType eMcem_DeassertSWFault_Int( eMcem_FaultType nFaultId );

/**
* @brief      Get memory error info
* @details    Function retrieves the type, address and ECC syndrome of the last memory error. If available for any channel, provides
*             validated address (in defined address range), otherwise provides only raw data read from error address register.
*
* @param[in]  nChannelId      Global ID of ERM channel
* @param[out] pInfo           Structure with type, raw address data, validated address (if available), and syndrome of the last memory error
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK      No error occurred
* @retval           EMCEM_E_NOT_OK  An error occurred (correctable, non-correctable or both flags are set)
*
*/
Std_ReturnType eMcem_GetMemErrInfo_Int( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo );

/**
* @brief      eMcem_ReadErrorOutput_Int
* @details    A function to read one of the EOUT signals.
*             For testing purposes.
*
* @param[in]  errorOutput    ID of EOUT signal to read.
*
* @return     EOUT signal value
*
*/
static inline uint8 eMcem_ReadErrorOutput_Int( eMcem_ErrorOutputType errorOutput )
{
    uint8 u8ReturnValue = 0U;

    /* Check whether EOUT is in range */
    if( errorOutput <= EMCEM_FCCU_EOUT1 )
    {
        u8ReturnValue = eMcem_Vfccu_ReadErrorOutput( errorOutput );
    }
    else
    {
        /* Log extended diagnostic data */
        EMCEM_DIAG_STORE_FAILURE_POINT( EMCEM_E_NOT_OK, EMCEM_FP_READ_ERROR_OUTPUT, 0U )

        TODO_MESSAGE("nxf85804-20March2024: What should be the return value in case of out of range EOUT?")
        u8ReturnValue = 0U;
    }

    return u8ReturnValue;
}

/**
* @brief      eMcem_WriteErrorOutput_Int
* @details    A function to write one of the EOUT signals.
*             For testing purposes.
*
* @param[in]  errorOutput    ID of EOUT signal to write.
* @param[in]  value          value to write.
*
* @return     void
*
*/
static inline void eMcem_WriteErrorOutput_Int( eMcem_ErrorOutputType errorOutput, uint8 value )
{
    /* Check whether EOUT is in range */
    if( errorOutput <= EMCEM_FCCU_EOUT1 )
    {
        eMcem_Vfccu_WriteErrorOutput( errorOutput, value );
    }
    else
    {
        /* Log extended diagnostic data */
        EMCEM_DIAG_STORE_FAILURE_POINT( EMCEM_E_NOT_OK, EMCEM_FP_WRITE_ERROR_OUTPUT, 0U )
    }
}

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
*
*/
static inline Std_ReturnType eMcem_SetEOUTSignaling_Int( eMcem_ErrorOutputType errorOutput, eMcem_EOUTStateType state )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* @violates @ref eMcem_Lib_Ext_h_REF_1403 */
    if( ( errorOutput <= EMCEM_FCCU_EOUT1 ) && ( state <= EMCEM_FCCU_EOUT_ACTIVATE ) )
    {
        nReturnValue = eMcem_Vfccu_SetEOUTSignaling( errorOutput, state );
    }

    return nReturnValue;
}

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
*
*/
static inline Std_ReturnType eMcem_SetEOUTControlMode_Int( eMcem_ErrorOutputType errorOutput, eMcem_EOUTModeType mode )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* @violates @ref eMcem_Lib_Ext_h_REF_1403 */
    if( ( errorOutput <= EMCEM_FCCU_EOUT1 ) && ( mode <= EMCEM_FCCU_EOUT_HIGH ) )
    {
        nReturnValue = eMcem_Vfccu_SetEOUTControlMode( errorOutput, mode );
    }

    return nReturnValue;
}

/**
* @brief    Macro marking the end of CODE section.
*/
#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Lib_Ext_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_LIB_EXT_H */

/** @} */
