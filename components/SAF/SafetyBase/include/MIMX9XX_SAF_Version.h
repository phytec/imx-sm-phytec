/**
*   @file    MIMX9XX_SAF_Version.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF SafetyBase - Defines the software version of the MIMX9XX_SAF.
*   @details The software version defined in this module is used as a reference value for
*            file version checks within the MIMX9XX_SAF.
*
*   @addtogroup SAFETY_BASE_COMPONENT
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

#ifndef MIMX9XX_SAF_VERSION_H
#define MIMX9XX_SAF_VERSION_H

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*               MIMX9XX_SAF SOFTWARE VERSION INFORMATION
==================================================================================================*/
#define MIMX9XX_SAF_SW_MAJOR_VERSION             0
#define MIMX9XX_SAF_SW_MINOR_VERSION             8
#define MIMX9XX_SAF_SW_PATCH_VERSION             4

/* Pragma message helper macro. To be removed for RFP software. */
#define DO_PRAGMA(x) _Pragma (#x)
#define TODO_MESSAGE(x) /* DO_PRAGMA(message (#x)) */

#ifdef __cplusplus
}
#endif

#endif /*MIMX9XX_SAF_VERSION_H*/

/** @} */
