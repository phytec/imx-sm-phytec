/*
** ###################################################################
**     Processors:          MIMX95_cm33
**
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX95_cm33
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2024 NXP
**     All rights reserved.
**
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**
** ###################################################################
*/

/*!
 * @file MIMX94_GLITCHFILTER.h
 * @version
 * @date
 * @brief CMSIS Peripheral Access Layer for MIMX95_GLITCHFILTER
 *
 * CMSIS Peripheral Access Layer for MIMX95
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX95_GLITCHFILTER_H_)  /* Check if memory map has not been already included */
#define MIMX95_GLITCHFILTER_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- GLITCHFILTER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GLITCHFILTER_Peripheral_Access_Layer GLITCHFILTER Peripheral Access Layer
 * @{
 */

/** GLITCHFILTER - Size of Registers Arrays */
#define GLITCHFILTER_MCR_COUNT                    32u

/** GLITCHFILTER - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x40 */
    __IO uint32_t MCR;                               /**< Module Configuration Register, array offset: 0x0, array step: 0x40 */
    __IO uint32_t MSR;                               /**< Module Status Register, array offset: 0x4, array step: 0x40 */
         uint8_t RESERVED_0[8];
    __IO uint32_t PRESR;                             /**< Prescaler Register, array offset: 0x10, array step: 0x40, valid indices: [0, 16] */
         uint8_t RESERVED_1[8];
    __IO uint32_t RTHR;                              /**< Rising edge Threshold Register, array offset: 0x1C, array step: 0x40 */
    __IO uint32_t FTHR;                              /**< Falling edge Threshold Register, array offset: 0x20, array step: 0x40 */
         uint8_t RESERVED_2[28];
  } MCR[GLITCHFILTER_MCR_COUNT];
} GLITCHFILTER_Type;

/* ----------------------------------------------------------------------------
   -- GLITCHFILTER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GLITCHFILTER_Register_Masks GLITCHFILTER Register Masks
 * @{
 */

/*! @name MCR - Module Configuration Register */
/*! @{ */

#define GLITCHFILTER_MCR_RFM_MASK                (0x7U)
#define GLITCHFILTER_MCR_RFM_SHIFT               (0U)
/*! RFM - Rising edge filter type selection
 *  0b000..bypass: edge is propagated to filter output without any filtering in three system clock cycles
 *  0b001..windowing: windowing filter is selected for the rising edge
 *  0b010..integrating: integrating filter is selected for the rising edge
 *  0b011..integrating-hold: integrating-hold filter is selected for the rising edge
 *  0b100..windowing with post sample: windowing filter with post sample is selected for the rising edge
 */
#define GLITCHFILTER_MCR_RFM(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_RFM_SHIFT)) & GLITCHFILTER_MCR_RFM_MASK)

#define GLITCHFILTER_MCR_FFM_MASK                (0x38U)
#define GLITCHFILTER_MCR_FFM_SHIFT               (3U)
/*! FFM - Falling edge filter type selection
 *  0b000..bypass: edge is propagated to filter output without any filtering in three system clock cycles
 *  0b001..windowing: windowing filter is selected for the falling edge
 *  0b010..integrating: integrating filter is selected for the falling edge
 *  0b011..integrating-hold: integrating-hold filter is selected for the falling edge
 *  0b100..windowing with post sample: windowing filter with post sample is selected for the falling edge
 */
#define GLITCHFILTER_MCR_FFM(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FFM_SHIFT)) & GLITCHFILTER_MCR_FFM_MASK)

#define GLITCHFILTER_MCR_FGEN_MASK               (0x40U)
#define GLITCHFILTER_MCR_FGEN_SHIFT              (6U)
/*! FGEN - Filter global enable
 *  0b0..filter is disabled: filter output keeps current state.
 *  0b1..filter is enabled: filtering is applied to selected edges.
 */
#define GLITCHFILTER_MCR_FGEN(x)                 (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FGEN_SHIFT)) & GLITCHFILTER_MCR_FGEN_MASK)

#define GLITCHFILTER_MCR_POL_MASK                (0x80U)
#define GLITCHFILTER_MCR_POL_SHIFT               (7U)
/*! POL - Output polarity bit
 *  0b0..not inverted output
 *  0b1..inverted output
 */
#define GLITCHFILTER_MCR_POL(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_POL_SHIFT)) & GLITCHFILTER_MCR_POL_MASK)

#define GLITCHFILTER_MCR_PSSEL_MASK              (0x100U)
#define GLITCHFILTER_MCR_PSSEL_SHIFT             (8U)
/*! PSSEL - Prescaler selection bit
 *  0b0..Internal prescaler selected
 *  0b1..external prescaler selected
 */
#define GLITCHFILTER_MCR_PSSEL(x)                (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_PSSEL_SHIFT)) & GLITCHFILTER_MCR_PSSEL_MASK)

#define GLITCHFILTER_MCR_IMM_MASK                (0x200U)
#define GLITCHFILTER_MCR_IMM_SHIFT               (9U)
/*! IMM - Immediate edge propagation control bit
 *  0b0..edge propagation depends on prescaler
 *  0b1..edge propagation within three system clock cycles
 */
#define GLITCHFILTER_MCR_IMM(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_IMM_SHIFT)) & GLITCHFILTER_MCR_IMM_MASK)

#define GLITCHFILTER_MCR_FOL_MASK                (0x4000000U)
#define GLITCHFILTER_MCR_FOL_SHIFT               (26U)
/*! FOL - Force filter output low
 *  0b0..no action
 *  0b1..forces the filter output to '0'
 */
#define GLITCHFILTER_MCR_FOL(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FOL_SHIFT)) & GLITCHFILTER_MCR_FOL_MASK)

#define GLITCHFILTER_MCR_FOH_MASK                (0x8000000U)
#define GLITCHFILTER_MCR_FOH_SHIFT               (27U)
/*! FOH - Force filter output high
 *  0b0..no action
 *  0b1..forces the filter output to '1'
 */
#define GLITCHFILTER_MCR_FOH(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FOH_SHIFT)) & GLITCHFILTER_MCR_FOH_MASK)

#define GLITCHFILTER_MCR_FBP_MASK                (0x10000000U)
#define GLITCHFILTER_MCR_FBP_SHIFT               (28U)
/*! FBP - Force Bypass
 *  0b0..no filter bypass
 *  0b1..transfer input signal value to the filter output
 */
#define GLITCHFILTER_MCR_FBP(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FBP_SHIFT)) & GLITCHFILTER_MCR_FBP_MASK)

#define GLITCHFILTER_MCR_FRZ_MASK                (0x20000000U)
#define GLITCHFILTER_MCR_FRZ_SHIFT               (29U)
/*! FRZ - Freeze bit for debug operation
 *  0b0..Freeze mode disabled
 *  0b1..Freeze mode enabled
 */
#define GLITCHFILTER_MCR_FRZ(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_FRZ_SHIFT)) & GLITCHFILTER_MCR_FRZ_MASK)

#define GLITCHFILTER_MCR_MDIS_MASK               (0x40000000U)
#define GLITCHFILTER_MCR_MDIS_SHIFT              (30U)
/*! MDIS - Module Disable
 *  0b0..Input Glitch Filter is not in low power mode due to MDIS bit
 *  0b1..Input Glitch Filter is in low power mode
 */
#define GLITCHFILTER_MCR_MDIS(x)                 (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MCR_MDIS_SHIFT)) & GLITCHFILTER_MCR_MDIS_MASK)
/*! @} */

/*! @name MSR - Module Status Register */
/*! @{ */

#define GLITCHFILTER_MSR_FLO_MASK                (0x1U)
#define GLITCHFILTER_MSR_FLO_SHIFT               (0U)
/*! FLO - Filter output */
#define GLITCHFILTER_MSR_FLO(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_FLO_SHIFT)) & GLITCHFILTER_MSR_FLO_MASK)

#define GLITCHFILTER_MSR_FLI_MASK                (0x2U)
#define GLITCHFILTER_MSR_FLI_SHIFT               (1U)
/*! FLI - Filter input */
#define GLITCHFILTER_MSR_FLI(x)                  (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_FLI_SHIFT)) & GLITCHFILTER_MSR_FLI_MASK)

#define GLITCHFILTER_MSR_FNDET_MASK              (0x4U)
#define GLITCHFILTER_MSR_FNDET_SHIFT             (2U)
/*! FNDET - Fall noise detected bit
 *  0b0..noise was not detected
 *  0b1..noise was detected after a falling edge
 */
#define GLITCHFILTER_MSR_FNDET(x)                (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_FNDET_SHIFT)) & GLITCHFILTER_MSR_FNDET_MASK)

#define GLITCHFILTER_MSR_RNDET_MASK              (0x8U)
#define GLITCHFILTER_MSR_RNDET_SHIFT             (3U)
/*! RNDET - Rise noise detected bit
 *  0b0..noise was not detected
 *  0b1..noise was detected after a rising edge
 */
#define GLITCHFILTER_MSR_RNDET(x)                (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_RNDET_SHIFT)) & GLITCHFILTER_MSR_RNDET_MASK)

#define GLITCHFILTER_MSR_FEDGE_MASK              (0x10U)
#define GLITCHFILTER_MSR_FEDGE_SHIFT             (4U)
/*! FEDGE - Filter is active processing an edge
 *  0b0..Input Glitch Filter internal counter is not active
 *  0b1..Input Glitch Filter internal counter is active
 */
#define GLITCHFILTER_MSR_FEDGE(x)                (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_FEDGE_SHIFT)) & GLITCHFILTER_MSR_FEDGE_MASK)

#define GLITCHFILTER_MSR_WEDGE_MASK              (0x20U)
#define GLITCHFILTER_MSR_WEDGE_SHIFT             (5U)
/*! WEDGE - Filter is active waiting for an edge
 *  0b0..Input Glitch Filter is disabled or the internal counter is active
 *  0b1..Input Glitch Filter is waiting for an edge
 */
#define GLITCHFILTER_MSR_WEDGE(x)                (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_MSR_WEDGE_SHIFT)) & GLITCHFILTER_MSR_WEDGE_MASK)
/*! @} */

/* The count of GLITCHFILTER_MSR */
#define GLITCHFILTER_MSR_COUNT                   (32U)

/*! @name PRESR - Prescaler Register */
/*! @{ */

#define GLITCHFILTER_PRESR_FPRE_MASK             (0x3FFU)
#define GLITCHFILTER_PRESR_FPRE_SHIFT            (0U)
/*! FPRE - Filter prescaler */
#define GLITCHFILTER_PRESR_FPRE(x)               (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_PRESR_FPRE_SHIFT)) & GLITCHFILTER_PRESR_FPRE_MASK)
/*! @} */

/* The count of GLITCHFILTER_PRESR */
#define GLITCHFILTER_PRESR_COUNT                 (32U)

/*! @name RTHR - Rising edge Threshold Register */
/*! @{ */

#define GLITCHFILTER_RTHR_RTH_MASK               (0xFFFFFFU)
#define GLITCHFILTER_RTHR_RTH_SHIFT              (0U)
/*! RTH - Rising edge threshold */
#define GLITCHFILTER_RTHR_RTH(x)                 (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_RTHR_RTH_SHIFT)) & GLITCHFILTER_RTHR_RTH_MASK)
/*! @} */

/* The count of GLITCHFILTER_RTHR */
#define GLITCHFILTER_RTHR_COUNT                  (32U)

/*! @name FTHR - Falling edge Threshold Register */
/*! @{ */

#define GLITCHFILTER_FTHR_FTH_MASK               (0xFFFFFFU)
#define GLITCHFILTER_FTHR_FTH_SHIFT              (0U)
/*! FTH - Falling edge threshold */
#define GLITCHFILTER_FTHR_FTH(x)                 (((uint32_t)(((uint32_t)(x)) << GLITCHFILTER_FTHR_FTH_SHIFT)) & GLITCHFILTER_FTHR_FTH_MASK)
/*! @} */

/* The count of GLITCHFILTER_FTHR */
#define GLITCHFILTER_FTHR_COUNT                  (32U)


/*!
 * @}
 */ /* end of group GLITCHFILTER_Register_Masks */


/* GLITCHFILTER - Peripheral instance base addresses */
/** Peripheral AON__GLITCHFILTER__IGF base address */
#define AON__GLITCHFILTER__IGF_BASE              (0x446E0000u)
/** Peripheral AON__GLITCHFILTER__IGF base pointer */
#define AON__GLITCHFILTER__IGF                   ((GLITCHFILTER_Type *)AON__GLITCHFILTER__IGF_BASE)
/** Array initializer of GLITCHFILTER peripheral base addresses */
#define GLITCHFILTER_BASE_ADDRS                  { AON__GLITCHFILTER__IGF_BASE }
/** Array initializer of GLITCHFILTER peripheral base pointers */
#define GLITCHFILTER_BASE_PTRS                   { AON__GLITCHFILTER__IGF }

/*!
 * @}
 */ /* end of group GLITCHFILTER_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX95_GLITCHFILTER_H_) */
