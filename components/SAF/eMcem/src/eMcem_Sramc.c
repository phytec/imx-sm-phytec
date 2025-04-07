/**
*   @file    eMcem_Sramc.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - SRAMC IP source.
*   @details This file implements SRAMC IP functions for eMcem module.
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
* @section eMcem_Sramc_c_REF_0103
* Violates MISRA 2012 Required Rule 1.3, There shall be no occurrence of undefined behavior.
* This is not an undefined behavior.
*
* @section eMcem_Sramc_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Sramc_c_REF_0901
* Violates MISRA 2012 Mandatory Rule 9.1, All automatic variables shall have been assigned a value before
* being used.
* False positive.
*
* @section eMcem_Sramc_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, A conversions should not be performed between a pointer to
* object and an integer type.
* Unavoidable when addressing memory mapped registers
*
* @section eMcem_Sramc_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed between pointer to void
* and an arithmetic type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_Sramc_c_REF_2001
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
#include "eMcem_Cfg.h"
#include "eMcem_ExtDiagApi.h"
#include "eMcem_Sramc.h"
#include "eMcem_SramcChannels_MIMX9.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_SRAMC_SW_MAJOR_VERSION_C               0
#define EMCEM_SRAMC_SW_MINOR_VERSION_C               8
#define EMCEM_SRAMC_SW_PATCH_VERSION_C               4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_SRAMC_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_SRAMC_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_SRAMC_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Sramc.c and MIMX9XX_SAF version are different"
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
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Sramc_c_REF_0410 */
#include "eMcem_MemMap.h"

static void eMcem_Sramc_SetMaskBit( uint16 u16BitPos, eMcem_Sramc_ChannelCfgType *pChannelCfg );

static uint8 eMcem_Sramc_GetInstance( eMcem_ChannelType nChannelId );

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
* @brief      Prepares injection data
* @details    Function prepares injection data. The bit position decides if the injected bit would be into data words or data checkbit
*
* @param[in]  u16BitPos         Bit position to be set
* @param[in/out] pChannelCfg    Channel configuration - data words and checkbits
*
* @return     void
*
*/
static void eMcem_Sramc_SetMaskBit( uint16 u16BitPos, eMcem_Sramc_ChannelCfgType *pChannelCfg )
{
    /* Fault to be injected using DATA words */
    if( u16BitPos < 64UL )
    {
        if( u16BitPos < 32UL )
        {
            pChannelCfg->EID_WORD[0] |= ( 1UL << u16BitPos );
        }
        else
        {
            pChannelCfg->EID_WORD[1] |= ( 1UL << ( u16BitPos & EMCEM_SRAMC_EID_WORD_1_MASK ) );
        }
    }
    /* Fault to be injected using DATA checkbits */
    else
    {
        pChannelCfg->EID_WORD[2] |= ( 1UL << ( u16BitPos & EMCEM_SRAMC_EID_WORD_2_MASK ) );
    }
}

/**
* @brief      Get the instance ID
* @details    Function gets instance ID from provided local SRAMC channel ID
*
* @param[in]  nChannelId            Channel ID of SRAMC channel
*
* @return     Instance ID
*
*/
static uint8 eMcem_Sramc_GetInstance( eMcem_ChannelType nChannelId )
{
    uint8 u8i;
    uint8 u8InstanceId = 0U;
    uint8 u8ChannelId = 0U;

    /* Get instance ID and instance channel ID (ID within instance) */
    for( u8i = 0U; u8i < EMCEM_SRAMC_INSTANCE_COUNT; u8i++ )
    {
        u8ChannelId += eMcem_au8SramcChannelsPerInstance[u8i];
        if( u8ChannelId > nChannelId )
        {
            u8InstanceId = u8i;
            break;
        }
    }
    return u8InstanceId;
}
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Initialize SRAMC
* @details    Function clears error status flags.
*
* @return     void
*
*/
void eMcem_Sramc_Init( const eMcem_ConfigType *pConfigPtr )
{
    uint8 u8i;
    sBase_PointerSizeType addr;

    /* Go through instances */
    for( u8i = 0U; u8i < EMCEM_SRAMC_INSTANCE_COUNT; u8i++ )
    {
        /* Skip initialization of not owned SRAMC instances */
        if( 0UL == ( ( pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8i ) ) )
        {
            continue;
        }

        /* Get error status register address by providing base address */
        addr = EMCEM_SRAMC_RAMSR_ADDR32( eMcem_u32SramcBaseAddress[u8i] );

        /* Clear the status register */
        SAFETYBASE_REG_WRITE32( addr, EMCEM_SRAMC_RAMSR_CLEAR_VAL_U32);
    }
}

/**
* @brief      Configures SRAMC error injection words
* @details    Function configures error injection words for given SRAMC instance. Up to two bits to inject
*
* @param[in]  nChannelId     ID of the SRAMC instance, where to set the error injection bit
* @param[in]  u16BitPos1     First bit position within SRAMC instance to set. To not inject, set this to EMCEM_SRAMC_BIT_NOT_VALID
* @param[in]  u16BitPos2     Second bit position within SRAMC instance to set. To not inject, set this to EMCEM_SRAMC_BIT_NOT_VALID
*
* @return     Std_ReturnType
* @retval           E_OK      Error injection word has been successfully set.
* @retval           E_NOT_OK  Error injection word has not been set.
*
*/
Std_ReturnType eMcem_Sramc_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Initialize injection word descriptor */
    eMcem_Sramc_ChannelCfgType channelCfg = { 0 };
    /* Get SRAMC instance base address base on channel */
    volatile struct SRAMCTL_tag * const pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if SRAMC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* If the first bit is valid, prepare its descriptor mask */
        if( u16BitPos1 < EMCEM_SRAMC_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Sramc_c_REF_0103 */
            eMcem_Sramc_SetMaskBit( u16BitPos1, &channelCfg );
            nReturnValue = (Std_ReturnType)E_OK;
        }
        EMCEM_DIAG_STORE_FAILURE_POINT_REGISTER_DATA( nReturnValue, u16BitPos1 )

        /* If the second bit is valid, prepare its descriptor mask */
        if( u16BitPos2 < EMCEM_SRAMC_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Sramc_c_REF_0103 */
            eMcem_Sramc_SetMaskBit( u16BitPos2, &channelCfg );
            nReturnValue = (Std_ReturnType)E_OK;
        }
        EMCEM_DIAG_STORE_FAILURE_POINT_REGISTER_DATA( nReturnValue, u16BitPos2 )

        /* Check if injected bits were in proper range before writing into SRAMC injection registers */
        if( (Std_ReturnType)E_OK == nReturnValue )
        {
            /* @violates @ref eMcem_Sramc_c_REF_0901 */
            pSramc->RAMEID0.R = channelCfg.EID_WORD[0];
            /* @violates @ref eMcem_Sramc_c_REF_0901 */
            pSramc->RAMEID1.R = channelCfg.EID_WORD[1];
            /* @violates @ref eMcem_Sramc_c_REF_0901 */
            pSramc->RAMEIDC.R = channelCfg.EID_WORD[2];
        }

        /* Log extended diagnostic data */
        EMCEM_DIAG_STORE_FAILURE_POINT( nReturnValue, EMCEM_FP_EIM_SETUP_INJECTION_CHANNEL, 0U )
    }
    /* This SRAMC instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }
    return nReturnValue;
}

/**
* @brief      Enabling of fault injection
* @details    Function enabling fault injection for specified instance. Enables data injection and injection pipeline
*
* @param[in]  nChannelId     ID of the SRAMC instance, where to set the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully enabled.
* @retval           E_NOT_OK  Fault injection has not been successfully enabled.
*
*/
Std_ReturnType eMcem_Sramc_InjectFault( eMcem_ChannelType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get SRAMC base address from given channel */
    volatile struct SRAMCTL_tag *pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if SRAMC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* Enable data injection */
        pSramc->RAMEIDC.R |= ( 1UL << EMCEM_SRAMC_EID_EN_OFFSET );
        /* Enable injection pipeline */
        pSramc->RAMEIDC.R |= ( 1UL << EMCEM_SRAMC_EIP_EN_OFFSET );

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* This SRAMC instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Disabling of fault injection
* @details    Function disabling fault injection for specified instance. Disables data injection and injection pipeline
*
* @param[in]  nChannelId     ID of the SRAMC instance, where to set the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully disabled.
* @retval           E_NOT_OK  Fault injection has not been successfully disabled.
*
*/
Std_ReturnType eMcem_Sramc_ClearFault( eMcem_ChannelType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get SRAMC base address from given channel */
    volatile struct SRAMCTL_tag *pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if SRAMC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* Disable injection pipeline */
        pSramc->RAMEIDC.R &= ~( 1UL << EMCEM_SRAMC_EIP_EN_OFFSET );
        /* Disable data injection */
        pSramc->RAMEIDC.R &= ~( 1UL << EMCEM_SRAMC_EID_EN_OFFSET );

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* This SRAMC instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Get memory error info from SRAMC
* @details    Function retrieves error type, address, and syndrome values for given memory channel.
*
* @param[in]  nChannelId     ID of SRAMC channel
* @param[in/out] pInfo       Structure with type, raw address data, validated address (if available), and syndrome of the last memory error
*
* @return     Std_ReturnType
* @retval           EMCEM_E_OK             Error was not detected for given channel.
* @retval           EMCEM_E_NOT_OK         Error was detected for given channel.
*
*/
Std_ReturnType eMcem_Sramc_GetErrorInfo( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_OK;

    /* Get SRAMC instance from given channel */
    volatile struct SRAMCTL_tag *pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if multi bit error occurred */
    if( ( pSramc->RAMSR.R & EMCEM_SRAMC_MLTERR_MASK ) > 0UL )
    {
        /* Set proper error type */
        pInfo->errType = EMCEM_MEM_NON_CORR_ERR;

        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }
    /* Check if single error has occurred */
    else if( ( pSramc->RAMSR.R & EMCEM_SRAMC_SGLERR_MASK ) > 0UL )
    {
        /* Set proper error type */
        pInfo->errType = EMCEM_MEM_CORR_ERR;

        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* No action needed */
    }

    /* Check if error was detected. Fill pInfo structure with error address and ECC syndrome value */
    if( (Std_ReturnType)E_NOT_OK == nReturnValue )
    {
        /* Retrieve the system error address */
        pInfo->errAddrRaw = pSramc->RAMSYSA.R;

        /* Retrieve error syndrome value */
        pInfo->u8ErrSyndrome = (uint8)(( pSramc->RAMSR.R & EMCEM_SRAMC_SYND_MASK ) >> EMCEM_SRAMC_SYND_OFFSET);

        /* Check if SRAMC instance is owned by the EENV */
        if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
        {
            /* Clear RAMSR error bits */
            pSramc->RAMSR.R |= EMCEM_SRAMC_RAMSR_CLEAR_VAL_U32;
        }
        /* This SRAMC instance is not owned by EENV */
        else
        {
            TODO_MESSAGE("nxf85804-4March2024: Add code which should be executed if SRAMC instance is not owned by the EENV")
        }
    }

    return nReturnValue;
}

/**
* @brief      Get the correctable error count
* @details    Function gets number of correctable errors of SRAMC channel
*
* @param[in]  nChannelId      Local ID of SRAMC channel
*
* @return     Number of correctable errors
*
*/
uint8 eMcem_Sramc_GetCorrErrCnt( eMcem_ChannelType nChannelId )
{
    uint8 u8ErrorCount = 0U;

    /* Get SRAMC instance from given channel */
    const volatile struct SRAMCTL_tag *pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* @violates @ref eMcem_Sramc_c_REF_1104 */
        /* @violates @ref eMcem_Sramc_c_REF_1106 */
        u8ErrorCount = (uint8)( pSramc->RAMECCNT.R & EMCEM_SRAMC_ECCNT_MASK );
    }
    /* This SRAMC instance is not owned by EENV */
    else
    {
        TODO_MESSAGE("nxf85804-4April2024: Add code which should be executed if SRAMC instance is not owned by the EENV")
    }

    return u8ErrorCount;
}

/**
* @brief      Clear correctable error count
* @details    Function clears the correctable error counter of SRAMC channel
*
* @param[in]  nChannelId      Local ID of SRAMC channel
*
* @return     void
*
*/
void eMcem_Sramc_ClrCorrErrCnt( eMcem_ChannelType nChannelId )
{
    /* Get SRAMC instance from given channel */
    volatile struct SRAMCTL_tag *pSramc = eMcem_SramcBaseAddress[nChannelId];

    /* Get SRAMC instace for given channel */
    uint8 u8InstanceId = eMcem_Sramc_GetInstance( nChannelId );

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledSramcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* Clear RAMECCNT error bits */
        pSramc->RAMECCNT.R &= ~(EMCEM_SRAMC_RAMECCNT_CLEAR_VAL_U32);
    }
    /* This SRAMC instance is not owned by EENV */
    else
    {
        TODO_MESSAGE("nxf85804-4March2024: Add code which should be executed if SRAMC instance is not owned by the EENV")
    }
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Sramc_c_REF_0410 */
/* @violates @ref eMcem_Sramc_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
