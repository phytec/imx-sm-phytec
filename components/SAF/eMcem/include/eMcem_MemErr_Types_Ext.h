/**
*   @file    eMcem_MemErr_Types_Ext.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - Memory error types
*   @details Internal types used for memory errors of the eMcem module.
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
*   Copyright 2023-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef EMCEM_MEMERR_TYPES_EXT_H
#define EMCEM_MEMERR_TYPES_EXT_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
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

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_MEMERR_TYPES_EXT_SW_MAJOR_VERSION             0
#define EMCEM_MEMERR_TYPES_EXT_SW_MINOR_VERSION             8
#define EMCEM_MEMERR_TYPES_EXT_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_MEMERR_TYPES_EXT_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_MEMERR_TYPES_EXT_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_MEMERR_TYPES_EXT_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of eMcem_MemErr_Types_Ext.h and MIMX9XX_SAF version are different"
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
/**
* @brief          eMCEM memory error type enum.
* @details        Used within error info struct to distinguish the error type.
*/
typedef enum
{
    EMCEM_MEM_NO_ERR       = 0U,  /**< @brief No error. */
    EMCEM_MEM_NON_CORR_ERR,       /**< @brief Non-correctable memory error type. */
    EMCEM_MEM_CORR_ERR,           /**< @brief Correctable memory error type. */
    EMCEM_MEM_BOTH_ERR            /**< @brief Correctable and non-correctable memory errors. */
} eMcem_MemErrType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          eMCEM memory error channel type.
* @details        eMCEM memory error channel type.
*/
typedef uint16 eMcem_ChannelType;

/**
* @brief          eMCEM memory error address type.
* @details        eMCEM memory error address type.
*/
typedef uint32 eMcem_MemErrAddrType;

/**
* @brief          eMCEM memory error info struct.
* @details        Info struct retrieved by GetMemErrInfo API.
*/
typedef struct
{
    eMcem_MemErrAddrType errAddrRaw;    /**< @brief Error Address Register raw value */
    eMcem_MemErrAddrType errAddrValid;  /**< @brief Validated Error Address (in defined address range) */
    uint8                u8ErrSyndrome; /**< @brief Error Syndrome */
    eMcem_MemErrType     errType;       /**< @brief Error Type (corr, non-corr) */
} eMcem_MemErrInfoType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* EMCEM_MEMERR_TYPES_EXT_H */

/** @} */
