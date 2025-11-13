/**
*   @file    eMcem_Lib_MIMX9.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - IP wrapper specific header.
*   @details Contains declarations of the eMcem IP wrapper specific functions.
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

#ifndef EMCEM_LIB_MIMX9_H
#define EMCEM_LIB_MIMX9_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Lib_MIMX9_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Lib_MIMX9_h_REF_0501
* Violates MISRA 2012 Required Rule 5.1, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Lib_MIMX9_h_REF_0502
* Violates MISRA 2012 Required Rule 5.2, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Lib_MIMX9_h_REF_0504
* Violates MISRA 2012 Required Rule 5.4, Supported compilers don't enforce maximum symbol length to be less than 32 characters.
*
* @section eMcem_Lib_MIMX9_h_REF_0505
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
#include "eMcem_Cfg.h"
#include "eMcem_Types_Ext.h"
#include "eMcem_Vfccu.h"
#include "eMcem_Ddr.h"
#include "eMcem_Erm.h"
#include "eMcem_Eim.h"
#include "eMcem_Sramc.h"
#include "SafetyBase_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0505 */
#define EMCEM_LIB_MIMX9_SW_MAJOR_VERSION             0
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0505 */
#define EMCEM_LIB_MIMX9_SW_MINOR_VERSION             8
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0501 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0502 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0504 */
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0505 */
#define EMCEM_LIB_MIMX9_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_LIB_MIMX9_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_LIB_MIMX9_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_LIB_MIMX9_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Lib_MIMX9.h and MIMX9XX_SAF version are different"
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

#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0410 */
#include "eMcem_MemMap.h"

/**
* @brief      Correct correctable error
* @details    Function corrects (reads and writes the value) the correctable error of ERM or SRAMC channel
*
* @param[in]  u32Addr    The address at which the error should be corrected
*
* @return     void
*
*/
void eMcem_CorrectCorrErr( uint32 u32Addr );

/**
* @brief      eMcem_GetCorrMemErrCnt_Int
* @details    Gets correctable error count
*
* @param[in]  nChannelId    The ID of ERM channel
*
* @return     Number of correctable errors
*
*/
static inline uint16 eMcem_GetCorrMemErrCnt_Int( eMcem_ChannelType nChannelId )
{
    uint16 u16ErrorCount = 0U;

    if( EMCEM_CHANNEL_IN_ERM_RANGE( nChannelId ) )
    {
        u16ErrorCount = eMcem_Erm_GetCorrErrCnt( (uint16)( nChannelId - EMCEM_ERM_CHANNELS_OFFSET ));
    }
    else if( EMCEM_FAULT_IN_SRAMC_RANGE( nChannelId ) )
    {
        u16ErrorCount = eMcem_Sramc_GetCorrErrCnt( (uint16)( nChannelId - EMCEM_SRAMC_CHANNELS_OFFSET ));
    }
    else if( EMCEM_CHANNEL_IN_DDRC_RANGE( nChannelId ) )
    {
        u16ErrorCount = eMcem_Ddrc_GetCorrErrCnt( (uint16)( nChannelId - EMCEM_DDRC_CHANNELS_OFFSET ));
    }
    else
    {
        /* No action needed */
    }

    return u16ErrorCount;
}

/**
* @brief      eMcem_ClrCorrMemErrCnt_Int
* @details    Clears correctable error count
*
* @param[in]  nChannelId    The ID of ERM channel
*
* @return     void
*
*/
static inline void eMcem_ClrCorrMemErrCnt_Int( eMcem_ChannelType nChannelId )
{
    if( EMCEM_CHANNEL_IN_ERM_RANGE( nChannelId ) )
    {
        eMcem_Erm_ClrCorrErrCnt( (uint16)( nChannelId - EMCEM_ERM_CHANNELS_OFFSET ));
    }
    else if( EMCEM_FAULT_IN_SRAMC_RANGE( nChannelId ) )
    {
        eMcem_Sramc_ClrCorrErrCnt( (uint16)( nChannelId - EMCEM_SRAMC_CHANNELS_OFFSET ));
    }
    else if( EMCEM_CHANNEL_IN_DDRC_RANGE( nChannelId ) )
    {
        eMcem_Ddrc_ClrCorrErrCnt( (uint16)( nChannelId - EMCEM_DDRC_CHANNELS_OFFSET ));
    }
    else
    {
        /* No action needed */
    }
}

/**
* @brief      eMcem_CorrectCorrMemErr_Int
* @details    Corrects (reads and writes the value) correctable error
*
* @param[in]  addr    The address at which the error should be corrected
*
* @return     void
*
*/
static inline void eMcem_CorrectCorrMemErr_Int( uint32 addr )
{
    eMcem_CorrectCorrErr( addr );
}

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
*
*/
static inline Std_ReturnType eMcem_SetupInjectionChannel_Int( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    if( EMCEM_FAULT_IN_EIM_RANGE( nChannelId ) )
    {
        nReturnValue = eMcem_Eim_SetupInjectionChannel( (uint16)( nChannelId - EMCEM_EIM_CHANNELS_OFFSET ), u16BitPos1, u16BitPos2 );
    }
    else if( EMCEM_FAULT_IN_SRAMC_RANGE( nChannelId ) )
    {
        nReturnValue = eMcem_Sramc_SetupInjectionChannel( (uint16)( nChannelId - EMCEM_SRAMC_CHANNELS_OFFSET ), u16BitPos1, u16BitPos2 );
    }
    else if( EMCEM_FAULT_IN_DDRC_RANGE( nChannelId ) )
    {
        nReturnValue = eMcem_Ddrc_SetupInjectionChannel( (uint16)( nChannelId - EMCEM_DDRC_CHANNELS_OFFSET ), u16BitPos1, u16BitPos2 );
    }
    else
    {
        /* No action needed */
    }

    return nReturnValue;
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Lib_MIMX9_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_LIB_MIMX9_H */

/** @} */
