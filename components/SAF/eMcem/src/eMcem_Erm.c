/**
*   @file    eMcem_Erm.c
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - ERM IP source.
*   @details This file implements ERM IP functions for eMcem module.
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
*   Copyright 2018-2020, 2023-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Erm_c_REF_0103
* Violates MISRA 2012 Required Rule 1.3, There shall be no occurrence of undefined behavior.
* This is not an undefined behavior.
*
* @section eMcem_Erm_c_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Erm_c_REF_1003
* Violates MISRA 2012 Required Rule 10.3, The value of an expression shall not be assigned
* to an object with narrower type or different type category.
* No problem doing this as the value is within range of the narrower type.
*
* @section eMcem_Erm_c_REF_1005
* Violates MISRA 2012 Advisory Rule 10.5, The value of an expression should not be cast
* to an inappropriate type.
* No problem doing this as the value is within range of the cast type.
*
* @section eMcem_Erm_c_REF_1008
* Violates MISRA 2012 Required Rule 10.8, This is not a conversion violation.
*
* @section eMcem_Erm_c_REF_1104
* Violates MISRA 2012 Advisory Rule 11.4, A conversions should not be performed between a pointer to
* object and an integer type.
* Unavoidable when addressing memory mapped registers
*
* @section eMcem_Erm_c_REF_1106
* Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed between pointer to void
* and an arithmetic type.
* Unavoidable when addressing memory mapped registers.
*
* @section eMcem_Erm_c_REF_2001
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
#include "eMcem_Erm.h"
#include "SafetyBase.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_ERM_SW_MAJOR_VERSION_C               0
#define EMCEM_ERM_SW_MINOR_VERSION_C               8
#define EMCEM_ERM_SW_PATCH_VERSION_C               4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_ERM_SW_MAJOR_VERSION_C != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_ERM_SW_MINOR_VERSION_C != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_ERM_SW_PATCH_VERSION_C != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Erm.c and MIMX9XX_SAF version are different"
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
/* @violates @ref eMcem_Erm_c_REF_0410 */
#include "eMcem_MemMap.h"

static boolean eMcem_Erm_IsSCStatusProvided( eMcem_ChannelType nChannelId );

static boolean eMcem_Erm_IsNCStatusProvided( eMcem_ChannelType nChannelId );


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Get the correctable error status provided info
* @details    Function checks if the correctable error status information is provided or not
*
* @param[in]  nChannelId     ID of ERM channel
*
* @return     boolean
* @retval           TRUE        Information is provided
* @retval           FALSE       Information is not provided
*
*/
static boolean eMcem_Erm_IsSCStatusProvided( eMcem_ChannelType nChannelId )
{
    /* @violates @ref eMcem_Erm_c_REF_1008 */
    return (boolean)( ( ( au32SCStatusProvidedMask[nChannelId >> 5U] & ( 1UL << ( nChannelId % 32U ) ) ) > 0UL ) ? TRUE : FALSE );
}

/**
* @brief      Get the non-correctable error status provided info
* @details    Function checks if the non-correctable error status information is provided or not
*
* @param[in]  nChannelId     ID of ERM channel
*
* @return     boolean
* @retval           TRUE        Information is provided
* @retval           FALSE       Information is not provided
*
*/
static boolean eMcem_Erm_IsNCStatusProvided( eMcem_ChannelType nChannelId )
{
    /* @violates @ref eMcem_Erm_c_REF_1008 */
    return (boolean)( ( ( au32NCStatusProvidedMask[nChannelId >> 5U] & ( 1UL << ( nChannelId % 32U ) ) ) > 0UL ) ? TRUE : FALSE );
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
* @brief      Get the error address provided info
* @details    Function checks if the error address information is provided or not
*
* @param[in]  nChannelId     ID of ERM channel
*
* @return     boolean
* @retval           TRUE        Information is provided
* @retval           FALSE       Information is not provided
*
*/
boolean eMcem_Erm_IsAddrProvided( eMcem_ChannelType nChannelId )
{
    /* @violates @ref eMcem_Erm_c_REF_1008 */
    return (boolean)( ( ( au32AddrProvidedMask[nChannelId >> 5U] & ( 1UL << ( nChannelId % 32U ) ) ) > 0UL ) ? TRUE : FALSE );
}

/**
* @brief      Get the error syndrome provided info
* @details    Function checks if the error syndrome information is provided or not
*
* @param[in]  nChannelId     ID of ERM channel
*
* @return     boolean
* @retval           TRUE        Information is provided
* @retval           FALSE       Information is not provided
*
*/
boolean eMcem_Erm_IsSynProvided( eMcem_ChannelType nChannelId )
{
    /* @violates @ref eMcem_Erm_c_REF_1008 */
    return (boolean)( ( ( au32SynProvidedMask[nChannelId >> 5U] & ( 1UL << ( nChannelId % 32U ) ) ) > 0UL ) ? TRUE : FALSE );
}

/**
* @brief      Get the instance ID and channel ID
* @details    Function gets instance and channel IDs from provided global channel ID
*
* @param[in]  nChannelId            Global ID of ERM channel
* @param[out] u32InstanceId         ID of ERM instance to which the channel belongs
* @param[out] u32InstanceChannelId  Local ID of ERM channel (within the instance)
*
* @return     void
*
*/
void eMcem_Erm_GetInstanceAndChannel( eMcem_ChannelType nChannelId, uint32 *pu32InstanceId, uint32 *pu32InstanceChannelId )
{
    uint32 u32i;
    *pu32InstanceId = 0UL;
    *pu32InstanceChannelId = 0UL;

    /* Get instance ID and instance channel ID (ID within instance) */
    for( u32i = 0UL; u32i < EMCEM_ERM_INSTANCE_COUNT; u32i++ )
    {
        *pu32InstanceChannelId += au8ChannelsPerInstance[u32i];
        if( *pu32InstanceChannelId > nChannelId )
        {
            *pu32InstanceId = u32i;
            *pu32InstanceChannelId = nChannelId - ( *pu32InstanceChannelId - au8ChannelsPerInstance[u32i] );
            break;
        }
    }
}

/**
* @brief      Initialize the ERM
* @details    Function clears all error status flags and sets control registers (if FCCU faults are configured)
*
* @param[in]  pConfigPtr      Configuration pointer referring to the configuration structure.
*
* @return     void
*
*/
void eMcem_Erm_Init( const eMcem_ConfigType *pConfigPtr )
{
    uint32 u32i;
    uint8 u8j;
    uint8 u8RegCount;
    sBase_PointerSizeType addr;
    /* Prevent unused variable warning */
    (void)pConfigPtr;

    /* Go through instances */
    for( u32i = 0UL; u32i < EMCEM_ERM_INSTANCE_COUNT; u32i++ )
    {
        /* Skip initialization of not owned ERM instances */
        if( 0UL == ( ( pConfigPtr->u32ControlledErmInstances ) & ( 1UL << u32i ) ) )
        {
            continue;
        }

        /* Clear status registers */
        /* Get registers count for specific ERM instance */
        u8RegCount = ( au8ChannelsPerInstance[u32i] > 0U ) ? ( ( ( au8ChannelsPerInstance[u32i] - 1U ) / 8U ) + 1U ) : 0U;

        /* Go through ERM Status registers */
        for( u8j = 0U; u8j < u8RegCount; u8j++ )
        {
            /* Get register address by providing base address and register idx */
            addr = ERM_SR_ADDR32( au32InstanceBaseAddr[u32i], u8j );

            /* Clear the status register */
            /* @violates @ref eMcem_Erm_c_REF_1104 */
            /* @violates @ref eMcem_Erm_c_REF_1106 */
            SAFETYBASE_REG_WRITE32( addr, ERM_SR_CLEAR_VAL_U32 );
        }
    }
}

/**
* @brief      Return last error type
* @details    Function gets type of last error and stores it to the info structure
*
* @param[in]  nChannelId             Global ID of ERM channel
* @param[in]  u32InstanceId          ID of ERM instance to which the channel belongs
* @param[in]  u32InstanceChannelId   Local ID of ERM channel (within the instance)
* @param[out] pInfo                  Structure with type, address, and syndrome of the last memory error
*
* @return     Std_ReturnType
* @retval           E_OK      No error occurred
* @retval           E_NOT_OK  An error occurred (correctable, non-correctable or both flags are set)
*
*/
Std_ReturnType eMcem_Erm_GetErrType( eMcem_ChannelType nChannelId, uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo )
{
    sBase_PointerSizeType addr;
    uint32 u32Status;
    uint32 u32StatusMask;
    uint32 u32Shift;
    Std_ReturnType nReturnValue = (Std_ReturnType)E_OK;

    /* Get register address by providing base address and register idx */
    addr = ERM_SR_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId >> 3UL ) );

    /* Get status register */
    /* @violates @ref eMcem_Erm_c_REF_1104 */
    /* @violates @ref eMcem_Erm_c_REF_1106 */
    u32Status = SAFETYBASE_REG_READ32( addr );

    /* Create status available mask */
    u32StatusMask = (uint32)eMcem_Erm_IsNCStatusProvided( nChannelId ) | ( (uint32)eMcem_Erm_IsSCStatusProvided( nChannelId ) << 1UL );

    /* Calculate bit shift to get specific channel status bits from status register */
    u32Shift = ( ( 7UL - ( u32InstanceChannelId & 7UL ) ) << 2UL ) + 2UL;
    u32Status = ( u32Status >> u32Shift ) & u32StatusMask;

    /* Check if an error occurred */
    if( u32Status > 0UL )
    {
        /* @violates @ref eMcem_Erm_c_REF_1003 */
        /* @violates @ref eMcem_Erm_c_REF_1005 */
        pInfo->errType = (eMcem_MemErrType)u32Status;
        nReturnValue = (Std_ReturnType)E_NOT_OK;
    }

    return nReturnValue;
}

/**
* @brief      Clear last error type
* @details    Function checks if last error status flag has not changed and clears it if so
*
* @param[in]  u32InstanceId          ID of ERM instance to which the channel belongs
* @param[in]  u32InstanceChannelId   Local ID of ERM channel (within the instance)
* @param[out] pInfo                  Structure with type, address, and syndrome of the last memory error
*
* @return     void
*
*/
void eMcem_Erm_ClrErrType( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo )
{
    sBase_PointerSizeType addr;
    uint32 u32Status;
    uint32 u32Shift;

    /* Get register address by providing base address and register idx */
    addr = ERM_SR_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId >> 3UL ) );

    /* Get status register */
    /* @violates @ref eMcem_Erm_c_REF_1104 */
    /* @violates @ref eMcem_Erm_c_REF_1106 */
    u32Status = SAFETYBASE_REG_READ32( addr );

    /* Calculate bit shift to get specific channel status bits from status register */
    u32Shift = ( ( 7UL - ( u32InstanceChannelId & 7UL ) ) << 2UL ) + 2UL;
    u32Status = ( u32Status >> u32Shift ) & 3UL;

    /* Add newly read status to the old one.
     * The status flags could have changed during the error info retrieval so adding of the new value to the previously
     * retrieved one is a way to preserve the information that the error happened, even though it can be unclear
     * which one is the last (corr or non-corr). Thus the new retrieval of address and syndrome is not being done. */
    u32Status |= (uint32)pInfo->errType;
    /* @violates @ref eMcem_Erm_c_REF_1003 */
    /* @violates @ref eMcem_Erm_c_REF_1005 */
    pInfo->errType = (eMcem_MemErrType)u32Status;

    /* Check if Instance is controlled by this EENV */
    if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledErmInstances ) & ( 1UL << u32InstanceId ) ) )
    {
        /* Clear the status flags */
        /* @violates @ref eMcem_Erm_c_REF_1104 */
        /* @violates @ref eMcem_Erm_c_REF_1106 */
        SAFETYBASE_REG_WRITE32( addr, ( u32Status << u32Shift ) );
    }
    /* This EENV does not own this ERM Instance */
    else
    {
        TODO_MESSAGE("nxf85804-1March2024: Add code which should be executed if ERM instance is not owned by the EENV")
    }
}

/**
* @brief      Return last error address
* @details    Function gets address of last error and stores it to the info structure
*
* @param[in]  u32InstanceId          ID of ERM instance to which the channel belongs
* @param[in]  u32InstanceChannelId   Local ID of ERM channel (within the instance)
* @param[out] pInfo                  Structure with type, address, and syndrome of the last memory error
*
* @return     void
*
*/
void eMcem_Erm_GetErrAddr( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo )
{
    sBase_PointerSizeType addr;

    /* Get register address by providing base address and register idx */
    addr = ERM_EAR_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId ) );

    /* Read error address */
    /* @violates @ref eMcem_Erm_c_REF_1104 */
    /* @violates @ref eMcem_Erm_c_REF_1106 */
    pInfo->errAddrRaw = SAFETYBASE_REG_READ32( addr );
}

/**
* @brief      Return last error ECC syndrome
* @details    Function gets ECC syndrome of last error and stores it to the info structure
*
* @param[in]  u32InstanceId          ID of ERM instance to which the channel belongs
* @param[in]  u32InstanceChannelId   Local ID of ERM channel (within the instance)
* @param[out] pInfo                  Structure with type, address, and syndrome of the last memory error
*
* @return     void
*
*/
void eMcem_Erm_GetErrSyndrome( uint32 u32InstanceId, uint32 u32InstanceChannelId, eMcem_MemErrInfoType *pInfo )
{
    sBase_PointerSizeType addr;

    /* Get register address by providing base address and register idx */
    addr = ERM_SYN_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId ) );

    /* Read error syndrome */
    /* @violates @ref eMcem_Erm_c_REF_1104 */
    /* @violates @ref eMcem_Erm_c_REF_1106 */
    pInfo->u8ErrSyndrome = (uint8)( SAFETYBASE_REG_READ32( addr ) >> 24UL );
}

/**
* @brief      Get the correctable error count
* @details    Function gets number of correctable errors of ERM channel
*
* @param[in]  nChannelId      Global ID of ERM channel
*
* @return     Number of correctable errors
*
*/
uint8 eMcem_Erm_GetCorrErrCnt( eMcem_ChannelType nChannelId )
{
    uint32 u32InstanceId;
    uint32 u32InstanceChannelId;
    sBase_PointerSizeType addr;
    uint8 u8ErrorCount = 0U;

    /* If the info is provided */
    if( (boolean)TRUE == eMcem_Erm_IsSCStatusProvided( nChannelId ) )
    {
        /* Get instance ID and instance channel ID (ID within instance) */
        /* @violates @ref eMcem_Erm_c_REF_0103 */
        eMcem_Erm_GetInstanceAndChannel( nChannelId, &u32InstanceId, &u32InstanceChannelId );

        /* Get address by providing base address and register idx */
        addr = ERM_CORR_ERR_CNT_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId ) );

        /* Check if Instance is controlled by this EENV */
        if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledErmInstances ) & ( 1UL << u32InstanceId ) ) )
        {
            /* @violates @ref eMcem_Erm_c_REF_1104 */
            /* @violates @ref eMcem_Erm_c_REF_1106 */
            u8ErrorCount = (uint8)SAFETYBASE_REG_READ32( addr );
        }
        /* This EENV does not own this ERM Instance */
        else
        {
            TODO_MESSAGE("nxf85804-1March2024: Add code which should be executed if ERM instance is not owned by the EENV")
        }
    }
    return u8ErrorCount;
}

/**
* @brief      Clear correctable error count
* @details    Function clears the correctable error counter of ERM channel
*
* @param[in]  nChannelId      Global ID of ERM channel
*
* @return     void
*
*/
void eMcem_Erm_ClrCorrErrCnt( eMcem_ChannelType nChannelId )
{
    uint32 u32InstanceId;
    uint32 u32InstanceChannelId;
    sBase_PointerSizeType addr;

    /* If the info is provided */
    if( (boolean)TRUE == eMcem_Erm_IsSCStatusProvided( nChannelId ) )
    {
        /* Get instance ID and instance channel ID (ID within instance) */
        /* @violates @ref eMcem_Erm_c_REF_0103 */
        eMcem_Erm_GetInstanceAndChannel( nChannelId, &u32InstanceId, &u32InstanceChannelId );

        /* Get address by providing base address and register idx */
        addr = ERM_CORR_ERR_CNT_ADDR32( au32InstanceBaseAddr[u32InstanceId], ( u32InstanceChannelId ) );

        /* Check if Instance is controlled by this EENV */
        if( 0UL != ( ( eMcem_pConfigPtr->u32ControlledErmInstances ) & ( 1UL << u32InstanceId ) ) )
        {
            /* @violates @ref eMcem_Erm_c_REF_1104 */
            /* @violates @ref eMcem_Erm_c_REF_1106 */
            SAFETYBASE_REG_WRITE32( addr, 0UL );
        }
        /* This EENV does not own this ERM Instance */
        else
        {
            TODO_MESSAGE("nxf85804-1March2024: Add code which should be executed if ERM instance is not owned by the EENV")
        }
    }
}

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Erm_c_REF_0410 */
/* @violates @ref eMcem_Erm_c_REF_2001 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
