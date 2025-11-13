/**
*   @file    eMcem_Ddr.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - DDR IP source.
*   @details This file implements DDR IP functions for eMcem module.
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
*   Copyright 2021-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Ddr_c_REF_0103
* Violates MISRA 2012 Required Rule 1.3, Taking address of near auto variable is safe operation
* on the target platform.
*
* @section eMcem_Ddr_c_REF_0203
* Violates MISRA 2012 Advisory Rule 2.3, Variables of the enum type do not necessarily need to be instantiated.
* Enum is rather used as a container for named constants.
*
* @section eMcem_Ddr_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Ddr_c_REF_0809
* Violates MISRA 2012 Advisory Rule 8.9, This variable was intentionally defined outside
* block scope not to clutter up function definition.
*
* @section eMcem_Ddr_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, A conversions should not be performed between a pointer to
* object and an integer type.
* Unavoidable when addressing memory mapped registers
*
* @section eMcem_Ddr_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed between pointer to void
* and an arithmetic type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_Ddr_c_REF_1902
* Violates MISRA 2012 Advisory Rule 19.2, Union is only used to access address mapped structure/register content.
*
* @section eMcem_Ddr_c_REF_2001
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
#include "eMcem_Types_Ext.h"
#include "eMcem_Lib_Ext.h"
#include "SafetyBase_StdRegMacros.h"
#include "eMcem_Ddr.h"
#include "SafetyBase.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_DDR_SW_MAJOR_VERSION_C               0
#define EMCEM_DDR_SW_MINOR_VERSION_C               8
#define EMCEM_DDR_SW_PATCH_VERSION_C               4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_DDR_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_DDR_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_DDR_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Ddr.c and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
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
/* @violates @ref eMcem_Ddr_c_REF_0410 */
/* @violates @ref eMcem_Ddr_c_REF_2001 */
#include "eMcem_MemMap.h"

static uint32 eMcem_Ddrc_GetErrAddr( eMcem_ChannelType nChannelId );

static uint8 eMcem_Ddrc_GetErrSyndrome( eMcem_ChannelType nChannelId );

static void eMcem_Ddrc_SetMaskBit( uint16 u16BitPos, eMcem_Ddrc_ChannelCfgType *pChannelCfg );

static uint8 eMcem_Ddrc_GetInstance( eMcem_ChannelType nChannelId );

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
* @brief      Return last correctable or non-correctable error address
* @details    Function gets address of last error, calculates system address and returns it
*
* @return     System address of DDRC error
*
*/
static uint32 eMcem_Ddrc_GetErrAddr( eMcem_ChannelType nChannelId )
{
    /* System address to be returned */
    uint32 u32SysAddr = 0UL;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    const volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    u32SysAddr = (uint32)( pDdrc->CAPTURE_ADDRESS.R );

    return u32SysAddr;
}

/**
* @brief      Return last error ECC syndrome
* @details    Function gets ECC syndrome of last error and returns it
*
* @return     Error syndrome value
*
*/
static uint8 eMcem_Ddrc_GetErrSyndrome( eMcem_ChannelType nChannelId )
{
    uint8 u8Syndrome = 0U;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    const volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* @violates @ref eMcem_Ddr_c_REF_1104 */
    /* @violates @ref eMcem_Ddr_c_REF_1106 */
    u8Syndrome = (uint8)( pDdrc->CAPTURE_ECC.R >> 24UL );

    return u8Syndrome;
}

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
static void eMcem_Ddrc_SetMaskBit( uint16 u16BitPos, eMcem_Ddrc_ChannelCfgType *pChannelCfg )
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
            pChannelCfg->EID_WORD[1] |= ( 1UL << ( u16BitPos & EMCEM_DDRC_EID_WORD_1_MASK ) );
        }
    }
    /* Fault to be injected using DATA checkbits */
    else
    {
        pChannelCfg->EID_WORD[2] |= ( 1UL << ( u16BitPos & EMCEM_DDRC_EID_WORD_2_MASK ) );
    }
}

/**
* @brief      Get the instance ID
* @details    Function gets instance ID from provided local DDRC channel ID
*
* @param[in]  nChannelId            Channel ID of DDRC channel
*
* @return     Instance ID
*
*/
static uint8 eMcem_Ddrc_GetInstance( eMcem_ChannelType nChannelId )
{
    uint8 u8i;
    uint8 u8InstanceId = 0U;
    uint8 u8ChannelId = 0U;

    /* Get instance ID and instance channel ID  */
    for( u8i = 0U; u8i < EMCEM_DDRC_INSTANCE_COUNT; u8i++ )
    {
        u8ChannelId += eMcem_au8DdrcChannelsPerInstance[u8i];
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
* @brief      Get DDRC error info
* @details    Function gets error type, address, and ECC syndrome and puts it into the memory error info structure
*
* @param[in]  nChannelId      ID of DDRC channel
* @param[out] pInfo           Structure with type, address, and syndrome of the last memory error
*
* @return     Std_ReturnType
* @retval           E_OK      No error occurred
* @retval           E_NOT_OK  An error occurred (correctable or non-correctable flag is set)
*
*/
Std_ReturnType eMcem_Ddrc_GetErrorInfo( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_OK;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        if( EMCEM_DDRC_CORR_ERROR == nChannelId )
        {
            /* Check if single-bit error occurred */
            /* @violates @ref eMcem_Ddr_c_REF_1104 */
            /* @violates @ref eMcem_Ddr_c_REF_1106 */
            if( 0U < ( pDdrc->ERR_DETECT.R & EMCEM_DDRC_ERR_DETECT_SSBE_MASK ) )
            {
                /* Set error type */
                pInfo->errType = EMCEM_MEM_CORR_ERR;

                /* Get error address */
                pInfo->errAddrRaw = eMcem_Ddrc_GetErrAddr(nChannelId);

                /* Get error syndrome */
                pInfo->u8ErrSyndrome = eMcem_Ddrc_GetErrSyndrome(nChannelId);

                /* Clear correctable error status flag */
                /* @violates @ref eMcem_Ddr_c_REF_1104 */
                /* @violates @ref eMcem_Ddr_c_REF_1106 */
                pDdrc->ERR_DETECT.R &= EMCEM_DDRC_ERR_DETECT_SSBE_MASK;

                nReturnValue = (Std_ReturnType)E_NOT_OK;
            }
        }
        else /* EMCEM_DDRC_NON_CORR_ERROR */
        {
            /* Check if multi-bit error occurred */
            /* @violates @ref eMcem_Ddr_c_REF_1104 */
            /* @violates @ref eMcem_Ddr_c_REF_1106 */
            if( 0U < ( pDdrc->ERR_DETECT.R & EMCEM_DDRC_ERR_DETECT_MBE_MASK ) )
            {
                /* Set error type */
                pInfo->errType = EMCEM_MEM_NON_CORR_ERR;

                /* Get error address */
                pInfo->errAddrRaw = eMcem_Ddrc_GetErrAddr(nChannelId);

                /* Get error syndrome */
                pInfo->u8ErrSyndrome = eMcem_Ddrc_GetErrSyndrome(nChannelId);

                /* Clear uncorrectable error status flag */
                /* @violates @ref eMcem_Ddr_c_REF_1104 */
                /* @violates @ref eMcem_Ddr_c_REF_1106 */
                pDdrc->ERR_DETECT.R &= ( EMCEM_DDRC_ERR_DETECT_MBE_MASK );

                nReturnValue = (Std_ReturnType)E_NOT_OK;
            }
        }
    }
    /* This EENV does not own this DDRC Instance */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Get the correctable error count
* @details    Function gets number of correctable errors of DDRC channel
*
* @param[in]  nChannelId      ID of DDRC channel
*
* @return     Number of correctable errors
*
*/
uint16 eMcem_Ddrc_GetCorrErrCnt( eMcem_ChannelType nChannelId )
{
    uint16 u16ErrorCount = 0U;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    const volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        if( EMCEM_DDRC_CORR_ERROR == nChannelId )
        {
            /* @violates @ref eMcem_Ddr_c_REF_1104 */
            /* @violates @ref eMcem_Ddr_c_REF_1106 */
            u16ErrorCount = (uint16)(pDdrc->ERR_SBE.R & EMCEM_DDRC_ERR_SBE_SBEC_MASK);
        }
    }
    /* This EENV does not own this DDRC Instance */
    else
    {
        TODO_MESSAGE("nxf85804-20March2024: Add code which should be executed if DDRC instance is not owned by the EENV")
    }

    return u16ErrorCount;
}

/**
* @brief      Clear correctable error count
* @details    Function clears the correctable error counter of DDRC channel
*
* @param[in]  nChannelId      ID of DDRC channel
*
* @return     void
*
*/
void eMcem_Ddrc_ClrCorrErrCnt( eMcem_ChannelType nChannelId )
{
    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        if( EMCEM_DDRC_CORR_ERROR == nChannelId )
        {
            /* @violates @ref eMcem_Ddr_c_REF_1104 */
            /* @violates @ref eMcem_Ddr_c_REF_1106 */
            pDdrc->ERR_SBE.R &= ~(EMCEM_DDRC_ERR_SBE_SBEC_MASK);
        }
    }
    /* This EENV does not own this DDRC Instance */
    else
    {
        TODO_MESSAGE("nxf85804-20March2024: Add code which should be executed if DDRC instance is not owned by the EENV")
    }
}

/**
* @brief      Initialize the DDRC
* @details    Function clears all error status flags
*
* @param[in]  pConfigPtr      Configuration pointer referring to the configuration structure.
*
* @return     void
*
*/
void eMcem_Ddrc_Init( const eMcem_ConfigType *pConfigPtr )
{
    uint8 u8i;
    sBase_PointerSizeType addr;

    /* Go through instances */
    for( u8i = 0U; u8i < EMCEM_DDRC_INSTANCE_COUNT; u8i++ )
    {
        /* Skip initialization of not owned DDRC instances */
        if( 0UL == ( ( pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8i ) ) )
        {
            continue;
        }

        /* Get error status register address by providing base address */
        addr = EMCEM_DDRC_ERR_DETECT_ADDR32( eMcem_u32DdrcBaseAddress[u8i] );

        /* Clear the status register */
        SAFETYBASE_REG_WRITE32( addr, EMCEM_DDRC_ERR_DETECT_CLEAR_VAL_U32);
    }
}

/**
* @brief      Configures DDRC error injection words
* @details    Function configures error injection words for given DDRC instance. Up to two bits to inject
*
* @param[in]  nChannelId     ID of the DDRC instance, where to set the error injection bit
* @param[in]  u16BitPos1     First bit position within DDRC instance to set. To not inject, set this to EMCEM_DDRC_BIT_NOT_VALID
* @param[in]  u16BitPos2     Second bit position within DDRC instance to set. To not inject, set this to EMCEM_DDRC_BIT_NOT_VALID
*
* @return     Std_ReturnType
* @retval           E_OK      Error injection word has been successfully set.
* @retval           E_NOT_OK  Error injection word has not been set.
*
*/
Std_ReturnType eMcem_Ddrc_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Initialize injection word descriptor */
    eMcem_Ddrc_ChannelCfgType channelCfg = { 0 };

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if DDRC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* If the first bit is valid, prepare its descriptor mask */
        if( u16BitPos1 < EMCEM_DDRC_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Ddr_c_REF_0103 */
            eMcem_Ddrc_SetMaskBit( u16BitPos1, &channelCfg );
            nReturnValue = (Std_ReturnType)E_OK;
        }
        /* If the second bit is valid, prepare its descriptor mask */
        if( u16BitPos2 < EMCEM_DDRC_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Ddr_c_REF_0103 */
            eMcem_Ddrc_SetMaskBit( u16BitPos2, &channelCfg );
            nReturnValue = (Std_ReturnType)E_OK;
        }

        /* Check if injected bits were in proper range before writing into DDRC injection registers */
        if( (Std_ReturnType)E_OK == nReturnValue )
        {
            /* @violates @ref eMcem_Ddr_c_REF_0901 */
            pDdrc->DATA_ERR_INJECT_LO.R = channelCfg.EID_WORD[0];
            /* @violates @ref eMcem_Ddr_c_REF_0901 */
            pDdrc->DATA_ERR_INJECT_HI.R = channelCfg.EID_WORD[1];
            /* @violates @ref eMcem_Ddr_c_REF_0901 */
            pDdrc->ERR_INJECT.R = channelCfg.EID_WORD[2];
        }
    }
    /* This DDRC instance is not owned by EENV */
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
* @param[in]  nChannelId     ID of the DDRC instance, where to set the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully enabled.
* @retval           E_NOT_OK  Fault injection has not been successfully enabled.
*
*/
Std_ReturnType eMcem_Ddrc_InjectFault( eMcem_FaultType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if DDRC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* Enable DDRC */
        pDdrc->DDR_SDRAM_CFG.R |= EMCEM_DDRC_SDRAM_CFG_MEM_EN_MASK;

        /* Check whether the fault should be DDRC Internal fault */
        if( EMCEM_DDRC_INTERNAL_ERROR_LOCAL != nChannelId )
        {
            /* Enable DDRC error injection */
            pDdrc->ERR_INJECT.R |= EMCEM_DDRC_ERR_INJECT_ECC_MASK;
            /* Enable DDRC ECC enable */
            pDdrc->ERR_EN.R |= EMCEM_DDRC_ERR_EN_ECC_MASK;
            /* Enable DDRC Multi-bit and Single-bit error interrupts */
            pDdrc->ERR_INT_EN.R |= EMCEM_DDRC_ERR_INT_EN_MASK;
        }
        else
        {
            /* Enable DDRC error injection */
            pDdrc->ERR_INJECT.R |= EMCEM_DDRC_ERR_INJECT_INTERNAL_MASK;
            /* Enable DDRC ECC */
            pDdrc->ERR_EN.R |= EMCEM_DDRC_ERR_EN_INTERNAL_MASK;
            /* Enable DDRC Multi-bit and Single-bit error interrupts */
            pDdrc->ERR_INT_EN.R |= EMCEM_DDRC_ERR_INT_EN_MASK;
        }

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* This DDRC instance is not owned by EENV */
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
* @param[in]  nChannelId     ID of the DDRC instance, where to set the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully disabled.
* @retval           E_NOT_OK  Fault injection has not been successfully disabled.
*
*/
Std_ReturnType eMcem_Ddrc_ClearFault( eMcem_FaultType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get DDRC instace for given channel */
    uint8 u8InstanceId = eMcem_Ddrc_GetInstance( nChannelId );

    /* Get DDRC instance base address */
    volatile struct DDR_DDRC_tag * const pDdrc = eMcem_DdrcBaseAddress[u8InstanceId];

    /* Check if DDRC instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledDdrcInstances ) & ( 1UL << u8InstanceId ) ) )
    {
        /* Disable DDRC Multi-bit and Single-bit error interrupts */
        pDdrc->ERR_INT_EN.R &= ~(EMCEM_DDRC_ERR_INT_EN_MASK);
        /* Disable DDRC error injection */
        pDdrc->ERR_INJECT.R &= ~(EMCEM_DDRC_ERR_INJECT_DISABLE_MASK);
        /* Disable DDRC ECC */
        pDdrc->ERR_EN.R &= ~(EMCEM_DDRC_ERR_EN_DISABLE_MASK);
        /* Disable DDRC */
        pDdrc->DDR_SDRAM_CFG.R &= ~(EMCEM_DDRC_SDRAM_CFG_MEM_EN_MASK);

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* This DDRC instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Ddr_c_REF_0410 */
/* @violates @ref eMcem_Ddr_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
