/**
*   @file    eMcem_Eim.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - EIM IP source.
*   @details This file implements EIM IP functions for eMcem module.
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
*   Copyright 2020, 2023-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Eim_c_REF_0103
* Violates MISRA 2012 Required Rule 1.3, There shall be no occurrence of undefined behavior.
* This is not an undefined behavior.
*
* @section eMcem_Eim_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Eim_c_REF_0901
* Violates MISRA 2012 Mandatory Rule 9.1, All automatic variables shall have been assigned a value before
* being used.
* False positive.
*
* @section eMcem_Eim_c_REF_1003
* Violates MISRA 2012 Required Rule 10.3, The value of an expression shall not be assigned
* to an object with narrower type or different type category.
* No problem doing this as the value is within range of the narrower type.
*
* @section eMcem_Eim_c_REF_1005
* Violates MISRA 2012 Advisory Rule 10.5, The value of an expression should not be cast
* to an inappropriate type.
* No problem doing this as the value is within range of the cast type.
*
* @section eMcem_Eim_c_REF_1008
* Violates MISRA 2012 Required Rule 10.8, This is not a conversion violation.
*
* @section eMcem_Eim_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, A conversions should not be performed between a pointer to
* object and an integer type.
* Unavoidable when addressing memory mapped registers
*
* @section eMcem_Eim_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed between pointer to void
* and an arithmetic type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_Eim_c_REF_2001
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
#include "eMcem_Eim_Types.h"
#include "eMcem_Eim.h"
#include "eMcem_Cfg.h"
#include "eMcem_ExtDiagApi.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_EIM_SW_MAJOR_VERSION_C               0
#define EMCEM_EIM_SW_MINOR_VERSION_C               8
#define EMCEM_EIM_SW_PATCH_VERSION_C               4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_EIM_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_EIM_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_EIM_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Eim.c and MIMX9XX_SAF version are different"
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
/* @violates @ref eMcem_Eim_c_REF_0410 */
#include "eMcem_MemMap.h"

static Std_ReturnType eMcem_Eim_SetMaskBit( const eMcem_Eim_DescriptorType *pDescriptor, eMcem_FaultType nChannelId, uint16 u16BitPos, eMcem_Eim_ChannelCfgType *pChannelCfg );

static void eMcem_Eim_GetInstanceAndChannel( eMcem_ChannelType nChannelId, uint16 *pu16InstanceId, uint16 *pu16InstanceChannelId );
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Prepares injection data
* @details    Function prepares injection data. The bit position decides if the injected bit would be into DATA_MASK or CHKBIT_MASK
*
* @param[in]       pDescriptor     EIM descriptor
* @param[in]       nChannelId      ID of the EIM channel, where to set the error injection bit
* @param[in]       u16BitPos       Bit position within EIM channel to be set
* @param[in/out]   pChannelCfg     EIM error injection pattern
*
* @return          Std_ReturnType
* @retval               E_OK      Descriptor has been successfully set.
* @retval               E_NOT_OK  Descriptor has not been set.
*
*/
static Std_ReturnType eMcem_Eim_SetMaskBit( const eMcem_Eim_DescriptorType *pDescriptor, eMcem_FaultType nChannelId, uint16 u16BitPos, eMcem_Eim_ChannelCfgType *pChannelCfg )
{
    uint32 u32Tmp;
    uint32 u32DataMaskWidth;
    uint32 u32ChkBitMaskWidth;
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get DataMask channel bit width */
    u32DataMaskWidth = pDescriptor->au16ChannelDataMask[nChannelId];

    /* Fault to be injected using DATA_MASK */
    if( u16BitPos < u32DataMaskWidth )
    {
        /**
         * Fault to be injected using DATA_MASK
         * Calculate DWORD register index to be used. Higher index values are located in the
         * lower DWORD indexes, e.g.
         *
         * u16BitPos: 127           *..................................................
         * DATA_MASK: 128 bits     |MSB......LSB|MSB......LSB|MSB......LSB|MSB......LSB|
         *                               W1           W2           W3           W4
         */
        u32Tmp = ( ( u32DataMaskWidth + 31UL ) >> 5U ) - ( (uint32)u16BitPos >> 5U );
        pChannelCfg->EICHD_WORD[u32Tmp] |= ( 1UL << ( u16BitPos & EMCEM_EIM_EICHD_WORD_MASK ) );

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* Fault to be injected using CHKBIT_MASK, which is always WORD0 */
    else
    {
        /* Get ChkBit channel bit width */
        u32ChkBitMaskWidth = pDescriptor->au8ChannelChkBitMask[nChannelId];
        u32Tmp = u16BitPos - u32DataMaskWidth;
        if( u32Tmp < u32ChkBitMaskWidth )
        {
            /* The mask is left aligned to WORD0's MSB */
            pChannelCfg->EICHD_WORD[0U] |= ( ( 1UL << ( 32UL - u32ChkBitMaskWidth ) ) << ( u32Tmp & EMCEM_EIM_EICHD_WORD_MASK ) );

            nReturnValue = (Std_ReturnType)E_OK;
        }
    }

    return nReturnValue;
}

/**
* @brief      Get the instance ID and channel ID
* @details    Function gets instance and channel IDs from provided global channel ID
*
* @param[in]  nChannelId            Global ID of EIM channel
* @param[out] u32InstanceId         ID of EIM instance to which the channel belongs
* @param[out] u32InstanceChannelId  Local ID of EIM channel (within the instance)
*
* @return     void
*
*/
static void eMcem_Eim_GetInstanceAndChannel( eMcem_ChannelType nChannelId, uint16 *pu16InstanceId, uint16 *pu16InstanceChannelId )
{
    uint16 u16i;
    *pu16InstanceChannelId = 0U;

    /* Get instance ID and instance channel ID  */
    for( u16i = 0U; u16i < EMCEM_EIM_INSTANCE_COUNT; u16i++ )
    {
        *pu16InstanceChannelId += au8EimChannelsPerInstance[u16i];
        if( *pu16InstanceChannelId > nChannelId )
        {
            *pu16InstanceId = u16i;
            *pu16InstanceChannelId = nChannelId - ( *pu16InstanceChannelId - au8EimChannelsPerInstance[u16i] );
            break;
        }
    }
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
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
Std_ReturnType eMcem_Eim_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get EIM instance and EIM channel from nChannelId */
    uint16 u16EimId = 0U;
    uint16 u16EimChannel = 0U;
    eMcem_Eim_GetInstanceAndChannel( nChannelId, &u16EimId, &u16EimChannel );

    /* Retrieve EIM instance pointer */
    const eMcem_Eim_DescriptorType *pDescriptor = &eMcem_Eim_arrDescriptors[u16EimId];
    eMcem_Eim_TagType *pEim = pDescriptor->pEim;
    eMcem_Eim_ChannelCfgType channelCfg = { 0 };

    uint32 u32RegCount;
    uint32 u32i;

    /* Check if EIM instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledEimInstances ) & ( 1UL << u16EimId) ) )
    {
        /* If the first bit is valid, prepare its descriptor mask */
        if( u16BitPos1 < EMCEM_EIM_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Eim_c_REF_0103 */
            nReturnValue = eMcem_Eim_SetMaskBit( pDescriptor, u16EimChannel, u16BitPos1, &channelCfg );
        }
        EMCEM_DIAG_STORE_FAILURE_POINT_REGISTER_DATA( nReturnValue, (uint32)u16BitPos1 )

        /* If the second bit is valid, prepare its descriptor mask */
        if( u16BitPos2 < EMCEM_EIM_BIT_NOT_VALID )
        {
            /* @violates @ref eMcem_Eim_c_REF_0103 */
            if( ( (Std_ReturnType)E_OK == eMcem_Eim_SetMaskBit( pDescriptor, u16EimChannel, u16BitPos2, &channelCfg ) ) &&
                ( (Std_ReturnType)E_NOT_OK == nReturnValue )
              )
            {
                nReturnValue = (Std_ReturnType)E_OK;
            }
        }
        EMCEM_DIAG_STORE_FAILURE_POINT_REGISTER_DATA( nReturnValue, (uint32)u16BitPos2 )

        /* Check if injected bits were in proper range before applying the calculated descriptors */
        if( (Std_ReturnType)E_OK == nReturnValue )
        {
            /* Write CHKBIT_MASK to the WORD0 register of the EIM channel */
            if( pDescriptor->au8ChannelChkBitMask[u16EimChannel] > 0U )
            {
                /* @violates @ref eMcem_Eim_c_REF_0901 */
                pEim->EICHD[u16EimChannel].WORD[0] = channelCfg.EICHD_WORD[0];
            }

            /* Write DATA_MASK to the WORD registers of the EIM channel */
            u32RegCount = ( pDescriptor->au16ChannelDataMask[u16EimChannel] + 31UL ) >> 5U;
            for( u32i = 1UL; u32i <= u32RegCount; u32i++ )
            {
                /* @violates @ref eMcem_Eim_c_REF_0901 */
                pEim->EICHD[u16EimChannel].WORD[u32i] = channelCfg.EICHD_WORD[u32i];
            }
        }

        /* Log extended diagnostic data */
        EMCEM_DIAG_STORE_FAILURE_POINT( nReturnValue, EMCEM_FP_EIM_SETUP_INJECTION_CHANNEL, 0U )
    }
    /* This EIM instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Enabling of fault injection
* @details    Function enabling fault injection for specified channel. Also enables global error injection bit
*
* @param[in]  nChannelId     ID of the EIM channel, where to set the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully enabled.
* @retval           E_NOT_OK  Fault injection has not been successfully enabled.
*
*/
Std_ReturnType eMcem_Eim_InjectFault( eMcem_FaultType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get EIM instance and EIM channel from nChannelId */
    uint16 u16EimId = 0U;
    uint16 u16EimChannel = 0U;
    eMcem_Eim_GetInstanceAndChannel( nChannelId, &u16EimId, &u16EimChannel );

    /* Retrieve EIM instance pointer */
    eMcem_Eim_TagType *pEim = eMcem_Eim_arrDescriptors[u16EimId].pEim;

    /* Check if EIM instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledEimInstances ) & ( 1UL << u16EimId) ) )
    {
        /* Enable injection for specific EIM channel */
        pEim->EICHEN.R = (volatile uint32)( 0x80000000UL >> u16EimChannel );
        /* Enable global error injection bit */
        pEim->EIMCR.R |= EMCEM_EIM_EIMCR_GEIEN_MASK;

        nReturnValue = (Std_ReturnType)E_OK;
    }
    /* This EIM instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Disabling of fault injection
* @details    Function disabling fault injection for specified channel. Also disables global error injection bit if no channel is being injected into
*
* @param[in]  nChannelId     ID of the EIM channel, where to clear the error injection bit
*
* @return     Std_ReturnType
* @retval           E_OK      Fault injection has been successfully disabled.
* @retval           E_NOT_OK  Fault injection has not been successfully disabled.
*
*/
Std_ReturnType eMcem_Eim_ClearFault( eMcem_FaultType nChannelId )
{
    Std_ReturnType nReturnValue = (Std_ReturnType)E_NOT_OK;

    /* Get EIM instance and EIM channel from nChannelId */
    uint16 u16EimId = 0U;
    uint16 u16EimChannel = 0U;
    eMcem_Eim_GetInstanceAndChannel( nChannelId, &u16EimId, &u16EimChannel );

    /* Retrieve EIM instance pointer */
    eMcem_Eim_TagType *pEim = eMcem_Eim_arrDescriptors[u16EimId].pEim;

    /* Check if EIM instance is owned by the EENV */
    if( 0UL < ( ( eMcem_pConfigPtr->u32ControlledEimInstances ) & ( 1UL << u16EimId) ) )
    {
        /* Disable injection for specific EIM channel */
        pEim->EICHEN.R &= ~( 0x80000000UL >> u16EimChannel );
        /* If there is no EIM channel enabled left. Disable global error injection bit */
        if( 0UL == pEim->EICHEN.R )
        {
            pEim->EIMCR.R &= ~(EMCEM_EIM_EIMCR_GEIEN_MASK);

            nReturnValue = (Std_ReturnType)E_OK;
        }
    }
    /* This EIM instance is not owned by EENV */
    else
    {
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Eim_c_REF_0410 */
/* @violates @ref eMcem_Eim_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
