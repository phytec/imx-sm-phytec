/**
*   @file    SafetyBase_IrqInterface.h
*   @version 0.8.4
*
*   @brief   MIMX9XX_SAF SafetyBase - IRQ interface.
*   @details This file provides functions to enable/disable interrupts.
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
*   Copyright 2024 NXP
*   Detailed license terms of software usage can be found in the license.txt
*   file located in the root folder of this package.
==================================================================================================*/

#ifndef SBASE_IRQ_INTERFACE_H
#define SBASE_IRQ_INTERFACE_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MIMX9XX_SAF_Version.h"
#include "SafetyBase_Cfg.h"
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SBASE_IRQ_SW_MAJOR_VERSION             0
#define SBASE_IRQ_SW_MINOR_VERSION             8
#define SBASE_IRQ_SW_PATCH_VERSION             4

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MIMX9XX_SAF version header file are of the same software version */
#if ((SBASE_IRQ_SW_MAJOR_VERSION != MIMX9XX_SAF_SW_MAJOR_VERSION) || \
     (SBASE_IRQ_SW_MINOR_VERSION != MIMX9XX_SAF_SW_MINOR_VERSION) || \
     (SBASE_IRQ_SW_PATCH_VERSION != MIMX9XX_SAF_SW_PATCH_VERSION))
#error "Software Version Numbers of SafetyBase_IrqInterface.h and MIMX9XX_SAF version are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if defined (USE_SW_VECTOR_MODE)
    /**
    * @brief Compiler abstraction for creating an interrupt handler if no OS is present.
    */
    #define SBASE_ISR(IsrName)       void IsrName(void)
#else
    /**
    * @brief Compiler abstraction for creating an interrupt handler if no OS is present.
    */
    #define SBASE_ISR(IsrName)       INTERRUPT_FUNC void IsrName(void)

#endif /*USE_SW_VECTOR_MODE*/

/**
* @brief Compiler abstraction for returning from an ISR if no OS is present.
*/
#define SBASE_EXIT_INTERRUPT()

#if (SAFETY_BASE_PLATFORM_ARM == SAFETY_BASE_ARMV8_AARCH64)
    /* for AARCH64 bit */
    #define sBase_SuspendAllInterrupts() SBASE_ASM_KEYWORD(" msr DAIFSet,#0xf")
    /* for AARCH64 bit */
    #define sBase_ResumeAllInterrupts() SBASE_ASM_KEYWORD(" msr DAIFClr,#0xf")
#else
    /* for AARCH32 bit ARM/THUMB instructions */
    #define sBase_SuspendAllInterrupts() SBASE_ASM_KEYWORD(" cpsid i")

    /* for AARCH32 bit ARM/THUMB instructions */
    #define sBase_ResumeAllInterrupts() SBASE_ASM_KEYWORD(" cpsie i")
#endif

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

/**
* @brief      Enable the FCCU IRQ(s) in NVIC.
*
* @return     void
*
* @implements DD_sBase_EnableFccuIRQ
*
*/
static inline void sBase_EnableFccuIRQ(void)
{
    SAFETYBASE_REG_BIT_SET32(NVIC_ISER_FCCU_IRQ_ADDR, NVIC_FCCU_IRQ0_MASK);
}

/**
* @brief      Disable the FCCU IRQ(s) in NVIC.
*
* @return     void
*
* @implements sBase_DisableFccuIRQ
*
*/
static inline void sBase_DisableFccuIRQ(void)
{
    SAFETYBASE_REG_WRITE32(NVIC_ICER_FCCU_IRQ_ADDR, NVIC_FCCU_IRQ0_MASK);
}

#ifdef __cplusplus
}
#endif

#endif /*SBASE_IRQ_INTERFACE_H*/

/** @} */
