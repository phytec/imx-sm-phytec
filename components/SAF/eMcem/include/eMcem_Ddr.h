/**
*   @file    eMcem_Ddr.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - DDR IP header.
*   @details Contains declarations of DDR IP functions for eMcem module.
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
*   Copyright 2021-2025 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_DDR_H
#define EMCEM_DDR_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Ddr_h_REF_0410
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
#include "eMcem_MemErr_Types_Ext.h"
#include "eMcem_DdrcChannels_MIMX9.h"
#include "SafetyBase_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_DDR_SW_MAJOR_VERSION             0
#define EMCEM_DDR_SW_MINOR_VERSION             8
#define EMCEM_DDR_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_DDR_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_DDR_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_DDR_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Ddr.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* Maximum bit position for injection into DDRC. Width is 2 DATA words (64bit) and 8 DATA checkbits */
#define EMCEM_DDRC_BIT_NOT_VALID                (72U)

/* DDRC Error Status Register n address */
#define EMCEM_DDRC_ERR_DETECT_ADDR32(instance)  ((uint32)((instance) + (uint32)0x1140UL))
/* DDRC Error Status Register Value For Clearing */
#define EMCEM_DDRC_ERR_DETECT_CLEAR_VAL_U32     (0x00000090UL)

/* DDRC Masks and Offsets */
#define EMCEM_DDRC_EID_WORD_1_MASK              (0x1FUL)
#define EMCEM_DDRC_EID_WORD_2_MASK              (0x7UL)
#define EMCEM_DDRC_ERR_DETECT_MBE_MASK          (0x8UL)
#define EMCEM_DDRC_ERR_DETECT_SMBE_MASK         (0x00C00000UL)
#define EMCEM_DDRC_ERR_DETECT_SSBE_MASK         (0x03000000UL)
#define EMCEM_DDRC_ERR_SBE_SBEC_MASK            (0xFFUL)
#define EMCEM_DDRC_SDRAM_CFG_MEM_EN_MASK        (0x80000000UL)
#define EMCEM_DDRC_ERR_INJECT_ECC_MASK          (0x00600100UL)
#define EMCEM_DDRC_ERR_EN_ECC_MASK              (0x80000000UL)
#define EMCEM_DDRC_ERR_INT_EN_MASK              (0xCUL)
#define EMCEM_DDRC_ERR_INJECT_INTERNAL_MASK     (0x00020000UL)
#define EMCEM_DDRC_ERR_EN_INTERNAL_MASK         (0x80000003UL)
#define EMCEM_DDRC_ERR_INJECT_DISABLE_MASK      (0x00620100UL)
#define EMCEM_DDRC_ERR_EN_DISABLE_MASK          (0x80000003UL)
#define EMCEM_DDRC_INTERNAL_ERROR_LOCAL         (EMCEM_DDRC_INTERNAL_ERROR - EMCEM_DDRC_CHANNELS_OFFSET)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief This structure abstracts DDRC channel configuration.
 */
typedef struct
{
    /** @brief Data word and checkbit configuration */
    uint32 EID_WORD[3];
} eMcem_Ddrc_ChannelCfgType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define EMCEM_START_SEC_CODE
/* @violates @ref eMcem_Ddr_h_REF_0410 */
#include "eMcem_MemMap.h"

Std_ReturnType eMcem_Ddrc_GetErrorInfo( eMcem_ChannelType nChannelId, eMcem_MemErrInfoType *pInfo );

uint16 eMcem_Ddrc_GetCorrErrCnt( eMcem_ChannelType nChannelId );

void eMcem_Ddrc_ClrCorrErrCnt( eMcem_ChannelType nChannelId );

void eMcem_Ddrc_Init( const eMcem_ConfigType *pConfigPtr );

Std_ReturnType eMcem_Ddrc_SetupInjectionChannel( eMcem_FaultType nChannelId, uint16 u16BitPos1, uint16 u16BitPos2 );

Std_ReturnType eMcem_Ddrc_InjectFault( eMcem_FaultType nChannelId );

Std_ReturnType eMcem_Ddrc_ClearFault( eMcem_FaultType nChannelId );

#define EMCEM_STOP_SEC_CODE
/* @violates @ref eMcem_Ddr_h_REF_0410 */
#include "eMcem_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_DDR_H */

/** @} */
