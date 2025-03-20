/**
*   @file    eMcem_Eim_Types.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - EIM IP Types
*   @details Internal types used in the EIM IP layer of the eMcem module.
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

#ifndef EMCEM_EIM_TYPES_H
#define EMCEM_EIM_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section eMcem_Eim_Types_h_REF_0410
* Violates MISRA 2012 Required Rule 4.10, Precautions shall be taken in order to prevent the
* contents of a header file being included twice.
* This is not a violation since all header files are protected against multiple inclusions.
*
* @section eMcem_Eim_Types_h_REF_0811
* Violates MISRA 2012 Advisory Rule 8.11, Array size is platform-specific hence it's only sepcified
* in the definition of the array.
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
#include "SafetyBase.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_EIM_TYPES_SW_MAJOR_VERSION             0
#define EMCEM_EIM_TYPES_SW_MINOR_VERSION             8
#define EMCEM_EIM_TYPES_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_EIM_TYPES_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_EIM_TYPES_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_EIM_TYPES_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_Eim_Types.h and MIMX9XX_SAF version are different"
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
/**
 * @brief EIM tag type
 */
typedef volatile struct EIM_tag eMcem_Eim_TagType;

/**
 * @brief This structure describes EIM hardware configuration
 */
typedef struct
{
    eMcem_Eim_TagType *pEim;
    uint16 au16ChannelDataMask[32U];
    uint8 au8ChannelChkBitMask[32U];
} eMcem_Eim_DescriptorType;

/**
 * @brief This structure abstracts EIM channel configuration.
 */
typedef struct
{
    /** @brief DATA_MASK and CHECK_MASK words configuration */
    uint32 EICHD_WORD[10];
} eMcem_Eim_ChannelCfgType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define EMCEM_START_SEC_CONST_UNSPECIFIED
/* @violates @ref eMcem_Eim_Types_h_REF_0410 */
#include "eMcem_MemMap.h"

/* @violates @ref eMcem_Eim_Types_h_REF_0811 */
extern const eMcem_Eim_DescriptorType eMcem_Eim_arrDescriptors[];

#define EMCEM_STOP_SEC_CONST_UNSPECIFIED
/* @violates @ref eMcem_Eim_Types_h_REF_0410 */
#include "eMcem_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_EIM_TYPES_H */

/** @} */
