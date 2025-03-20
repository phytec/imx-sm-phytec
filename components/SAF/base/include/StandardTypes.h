/*==================================================================================================
* Project : MIMX9XX_SAF
* Platform : CORTEXM
* Peripheral : IMX9XXXM33
* Dependencies : none
*
* Autosar Version : 4.6.0
* Autosar Revision : ASR_REL_4_6_REV_0000
* Autosar Conf.Variant :
* SW Version : 0.8.4
* Build Version : MIMX9_SAF_0_8_4_20250110
*
* Copyright 2016-2023 NXP
* Detailed license terms of software usage can be found in the license.txt
* file located in the root folder of this package.
==================================================================================================*/
/**
*   @file    StandardTypes.h
*   @implements     StandardTypes.h_Artifact
*   @version 0.8.4
*
*   @brief   AUTOSAR Base - Standard types definition.
*   @details AUTOSAR standard types header file. It contains all types that are used across several
*                modules of the basic software and that are platform and compiler independent
*
*   @addtogroup BASE_COMPONENT
*   @{
*/

#ifndef STANDARDTYPES_H
#define STANDARDTYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Platform_Types.h"
/**
* @brief Include compiler abstraction
*/
#include "Compiler.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief Parameters that shall be published within the standard types header file and also in the
*        module's description file
*/
#define STD_VENDOR_ID                     43
#define STD_AR_RELEASE_MAJOR_VERSION      4
#define STD_AR_RELEASE_MINOR_VERSION      6
#define STD_AR_RELEASE_REVISION_VERSION   0
#define STD_SW_MAJOR_VERSION              0
#define STD_SW_MINOR_VERSION              8
#define STD_SW_PATCH_VERSION              4

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Platform_Types header file are of the same Autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != PLATFORM_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MINOR_VERSION  != PLATFORM_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of StandardTypes.h and Platform_Types.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Compiler header file are of the same Autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != COMPILER_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MINOR_VERSION  != COMPILER_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of StandardTypes.h and Compiler.h are different"
#endif
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/
/**
* @brief Physical state 5V or 3.3V
* @implements SymbolDefinitions_enum
*/
#define STD_HIGH    0x01U

/**
* @brief Physical state 0V.
* @implements SymbolDefinitions_enum
*/
#define STD_LOW     0x00U

/**
* @brief Logical state active.
* @implements SymbolDefinitions_enum
*/
#define STD_ACTIVE  0x01U

/**
* @brief Logical state idle.
* @implements SymbolDefinitions_enum
*/
#define STD_IDLE    0x00U

/**
* @brief ON State.
* @implements SymbolDefinitions_enum
*/
#define STD_ON      0x01U

/**
* @brief OFF state.
* @implements SymbolDefinitions_enum
*/
#define STD_OFF     0x00U

/**
* @brief Return code for failure/error.
* @implements SymbolDefinitions_enum
*/
#define E_NOT_OK    0x01U


/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief Because E_OK is already defined within OSEK, the symbol E_OK has to be shared. To avoid
*        name clashes and redefinition problems, the symbols have to be defined in the following way
*       (approved within implementation).
*/
#ifndef STATUSTYPEDEFINED
    #define STATUSTYPEDEFINED
    /**
    * @brief Success return code
    */
    #define E_OK      0x00U
    /**
    * @brief This type is defined for OSEK compliance.
    */
    typedef uint8 StatusType;
#endif

/**
* @brief This type can be used as standard API return type which is shared between the RTE and the
*        BSW modules.
*/
/* @implements Std_ReturnType_type */
typedef uint8 Std_ReturnType;

/**
* @brief This type shall be used to request the version of a BSW module using the
*       "ModuleName"_GetVersionInfo() function.
*/
/* @implements Std_VersionInfoType_structure */
typedef struct
{
    uint16  vendorID;               /**< @brief vendor ID */
    uint16  moduleID;               /**< @brief BSW module ID */
    uint8   sw_major_version;       /**< @brief BSW module software major version */
    uint8   sw_minor_version;       /**< @brief BSW module software minor version */
    uint8   sw_patch_version;       /**< @brief BSW module software patch version */
} Std_VersionInfoType;


/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef STANDARDTYPES_H */

/** @} */