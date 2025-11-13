/**
*   @file    Reg_eSys_Erm.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF eMcem - ERM register definitions
*   @details ERM HW-related definition
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
*   Copyright 2012-2014 Freescale
*   Copyright 2016, 2018-2020, 2023-2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef REG_ESYS_ERM_H
#define REG_ESYS_ERM_H

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

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMCEM_ERM_REG_SW_MAJOR_VERSION             0
#define EMCEM_ERM_REG_SW_MINOR_VERSION             8
#define EMCEM_ERM_REG_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((EMCEM_ERM_REG_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (EMCEM_ERM_REG_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (EMCEM_ERM_REG_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
    #error "Software Version Numbers of Reg_eSys_Erm.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* ERM Control Register value for enabling of non-correctable interrupt notifications */
#define ERM_CR_NC_INT_SET_VAL_U32                  ((uint32)0x44444444UL)

/* ERM Status Register value for clearing */
#define ERM_SR_CLEAR_VAL_U32                       ((uint32)0xCCCCCCCCUL)

/* ERM Control Register 0 address */
#define ERM_CR0_ADDR32(instance)                   ((uint32)(instance))
/* ERM Control Register n address */
#define ERM_CR_ADDR32(instance, add)               ((sBase_PointerSizeType)(ERM_CR0_ADDR32(instance) + (((uint32)(add)) << 2U)))

/* ERM Status Register 0 address */
#define ERM_SR0_ADDR32(instance)                   ((uint32)((instance) + (uint32)0x0010UL))
/* ERM Status Register n address */
#define ERM_SR_ADDR32(instance, add)               ((sBase_PointerSizeType)(ERM_SR0_ADDR32(instance) + (((uint32)(add)) << 2U)))

/* ERM Error Address Register 0 address */
#define ERM_EAR0_ADDR32(instance)                  ((uint32)((instance) + (uint32)0x0100UL))
/* ERM Error Address Register n address */
#define ERM_EAR_ADDR32(instance, add)              ((sBase_PointerSizeType)(ERM_EAR0_ADDR32(instance) + (((uint32)(add)) << 4U)))

/* ERM Error Syndrome Register 0 address */
#define ERM_SYN0_ADDR32(instance)                  ((uint32)((instance) + (uint32)0x0104UL))
/* ERM Error Syndrome Register n address */
#define ERM_SYN_ADDR32(instance, add)              ((sBase_PointerSizeType)(ERM_SYN0_ADDR32(instance) + (((uint32)(add)) << 4U)))

/* ERM Correctable Error Count Register 0 address */
#define ERM_CORR_ERR_CNT0_ADDR32(instance)         ((uint32)((instance) + (uint32)0x0108UL))
/* ERM Correctable Error Count Register n address */
#define ERM_CORR_ERR_CNT_ADDR32(instance, add)     ((sBase_PointerSizeType)(ERM_CORR_ERR_CNT0_ADDR32(instance) + (((uint32)(add)) << 4U)))

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

#ifdef __cplusplus
}
#endif

#endif /* REG_ESYS_ERM_H */

/** @} */
