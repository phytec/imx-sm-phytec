/*
** ###################################################################
**     Processors:          MIMX9494AVKXD_cm33_core0
**                          MIMX9494AVKXJ_cm33_core0
**                          MIMX9494AVKXM_cm33_core0
**                          MIMX9494AVMXD_cm33_core0
**                          MIMX9494AVMXJ_cm33_core0
**                          MIMX9494AVMXM_cm33_core0
**                          MIMX9494CVKXD_cm33_core0
**                          MIMX9494CVKXJ_cm33_core0
**                          MIMX9494CVKXM_cm33_core0
**                          MIMX9494CVMXD_cm33_core0
**                          MIMX9494CVMXJ_cm33_core0
**                          MIMX9494CVMXM_cm33_core0
**                          MIMX9494DVKXD_cm33_core0
**                          MIMX9494DVKXJ_cm33_core0
**                          MIMX9494DVKXM_cm33_core0
**                          MIMX9494DVMXD_cm33_core0
**                          MIMX9494DVMXJ_cm33_core0
**                          MIMX9494DVMXM_cm33_core0
**                          MIMX9494XVKXD_cm33_core0
**                          MIMX9494XVKXJ_cm33_core0
**                          MIMX9494XVKXM_cm33_core0
**                          MIMX9494XVMXD_cm33_core0
**                          MIMX9494XVMXJ_cm33_core0
**                          MIMX9494XVMXM_cm33_core0
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**
**     Reference manual:    iMX94RM rev1 draftK
**     Version:             rev. 1.0, 2023-11-01
**     Build:               b240315
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX9494_cm33_core0
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-11-01)
**         Initial version.
**         core name and core alias name
**         +---------------------------------------------------------------------+
**         | core name  |                  core alias name                       |
**         +---------------------------------------------------------------------+
**         | cm33_core0 | m33, cm33                                              |
**         +---------------------------------------------------------------------+
**         | cm33_core1 | m33_2, cm33_2, cm33_sync, netcmix_cm33                 |
**         +---------------------------------------------------------------------+
**         | cm7_core0  | m7, cm7                                                |
**         +---------------------------------------------------------------------+
**         | cm7_core1  | m7_2, cm7_2                                            |
**         +---------------------------------------------------------------------+
**         | ca55_core0 | a55, ca55, a55_0, ca55_0                               |
**         +---------------------------------------------------------------------+
**         | ca55_core1 | a55, ca55, a55_1, ca55_1                               |
**         +---------------------------------------------------------------------+
**         | ca55_core2 | a55, ca55, a55_2, ca55_2                               |
**         +---------------------------------------------------------------------+
**         | ca55_core3 | a55, ca55, a55_3, ca55_3                               |
**         +---------------------------------------------------------------------+
**
** ###################################################################
*/

/*!
 * @file MIMX9494_AON_MCM.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_AON_MCM
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_AON_MCM_H_)  /* Check if memory map has not been already included */
#define MIMX9494_AON_MCM_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- AON_MCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AON_MCM_Peripheral_Access_Layer AON_MCM Peripheral Access Layer
 * @{
 */

/** AON_MCM - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[12];
       uint32_t CPCR;                              /**< Core Platform Control, offset: 0xC */
  __IO uint32_t ISCR;                              /**< Interrupt Status and Control, offset: 0x10 */
       uint8_t RESERVED_1[12];
  __I  uint32_t FADR;                              /**< Write Buffer Fault Address, offset: 0x20 */
  __I  uint32_t FATR;                              /**< Store Buffer Fault Attributes, offset: 0x24 */
  __I  uint32_t FDR;                               /**< Store Buffer Fault Data, offset: 0x28 */
} AON_MCM_Type;

/* ----------------------------------------------------------------------------
   -- AON_MCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AON_MCM_Register_Masks AON_MCM Register Masks
 * @{
 */

/*! @name ISCR - Interrupt Status and Control */
/*! @{ */

#define AON_MCM_ISCR_IRQ_MASK                    (0x2U)
#define AON_MCM_ISCR_IRQ_SHIFT                   (1U)
/*! IRQ - ETB-Related Interrupt Pending
 *  0b0..No pending IRQ
 *  0b1..Pending IRQ
 */
#define AON_MCM_ISCR_IRQ(x)                      (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_IRQ_SHIFT)) & AON_MCM_ISCR_IRQ_MASK)

#define AON_MCM_ISCR_NMI_MASK                    (0x4U)
#define AON_MCM_ISCR_NMI_SHIFT                   (2U)
/*! NMI - Nonmaskable Interrupt Pending
 *  0b0..No pending NMI
 *  0b1..Pending NMI
 */
#define AON_MCM_ISCR_NMI(x)                      (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_NMI_SHIFT)) & AON_MCM_ISCR_NMI_MASK)

#define AON_MCM_ISCR_DHREQ_MASK                  (0x8U)
#define AON_MCM_ISCR_DHREQ_SHIFT                 (3U)
/*! DHREQ - Debug Halt Request Indicator
 *  0b0..Not initiated
 *  0b1..Initiated
 */
#define AON_MCM_ISCR_DHREQ(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_DHREQ_SHIFT)) & AON_MCM_ISCR_DHREQ_MASK)

#define AON_MCM_ISCR_CWBER_MASK                  (0x10U)
#define AON_MCM_ISCR_CWBER_SHIFT                 (4U)
/*! CWBER - Cache Write Buffer Error Status
 *  0b0..No error
 *  0b1..Error occurred
 */
#define AON_MCM_ISCR_CWBER(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_CWBER_SHIFT)) & AON_MCM_ISCR_CWBER_MASK)

#define AON_MCM_ISCR_FIOC_MASK                   (0x100U)
#define AON_MCM_ISCR_FIOC_SHIFT                  (8U)
/*! FIOC - FPU Invalid Operation Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FIOC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIOC_SHIFT)) & AON_MCM_ISCR_FIOC_MASK)

#define AON_MCM_ISCR_FDZC_MASK                   (0x200U)
#define AON_MCM_ISCR_FDZC_SHIFT                  (9U)
/*! FDZC - FPU Divide-by-Zero Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FDZC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FDZC_SHIFT)) & AON_MCM_ISCR_FDZC_MASK)

#define AON_MCM_ISCR_FOFC_MASK                   (0x400U)
#define AON_MCM_ISCR_FOFC_SHIFT                  (10U)
/*! FOFC - FPU Overflow Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FOFC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FOFC_SHIFT)) & AON_MCM_ISCR_FOFC_MASK)

#define AON_MCM_ISCR_FUFC_MASK                   (0x800U)
#define AON_MCM_ISCR_FUFC_SHIFT                  (11U)
/*! FUFC - FPU Underflow Interrupt status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FUFC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FUFC_SHIFT)) & AON_MCM_ISCR_FUFC_MASK)

#define AON_MCM_ISCR_FIXC_MASK                   (0x1000U)
#define AON_MCM_ISCR_FIXC_SHIFT                  (12U)
/*! FIXC - FPU Inexact Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FIXC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIXC_SHIFT)) & AON_MCM_ISCR_FIXC_MASK)

#define AON_MCM_ISCR_FIDC_MASK                   (0x8000U)
#define AON_MCM_ISCR_FIDC_SHIFT                  (15U)
/*! FIDC - FPU Input Denormal Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occurred
 */
#define AON_MCM_ISCR_FIDC(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIDC_SHIFT)) & AON_MCM_ISCR_FIDC_MASK)

#define AON_MCM_ISCR_CWBEE_MASK                  (0x100000U)
#define AON_MCM_ISCR_CWBEE_SHIFT                 (20U)
/*! CWBEE - Cache Write Buffer Error Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_CWBEE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_CWBEE_SHIFT)) & AON_MCM_ISCR_CWBEE_MASK)

#define AON_MCM_ISCR_FIOCE_MASK                  (0x1000000U)
#define AON_MCM_ISCR_FIOCE_SHIFT                 (24U)
/*! FIOCE - FPU Invalid Operation Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FIOCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIOCE_SHIFT)) & AON_MCM_ISCR_FIOCE_MASK)

#define AON_MCM_ISCR_FDZCE_MASK                  (0x2000000U)
#define AON_MCM_ISCR_FDZCE_SHIFT                 (25U)
/*! FDZCE - FPU Divide-by-Zero Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FDZCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FDZCE_SHIFT)) & AON_MCM_ISCR_FDZCE_MASK)

#define AON_MCM_ISCR_FOFCE_MASK                  (0x4000000U)
#define AON_MCM_ISCR_FOFCE_SHIFT                 (26U)
/*! FOFCE - FPU Overflow Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FOFCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FOFCE_SHIFT)) & AON_MCM_ISCR_FOFCE_MASK)

#define AON_MCM_ISCR_FUFCE_MASK                  (0x8000000U)
#define AON_MCM_ISCR_FUFCE_SHIFT                 (27U)
/*! FUFCE - FPU Underflow Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FUFCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FUFCE_SHIFT)) & AON_MCM_ISCR_FUFCE_MASK)

#define AON_MCM_ISCR_FIXCE_MASK                  (0x10000000U)
#define AON_MCM_ISCR_FIXCE_SHIFT                 (28U)
/*! FIXCE - FPU Inexact Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FIXCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIXCE_SHIFT)) & AON_MCM_ISCR_FIXCE_MASK)

#define AON_MCM_ISCR_FIDCE_MASK                  (0x80000000U)
#define AON_MCM_ISCR_FIDCE_SHIFT                 (31U)
/*! FIDCE - FPU Input Denormal Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define AON_MCM_ISCR_FIDCE(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_ISCR_FIDCE_SHIFT)) & AON_MCM_ISCR_FIDCE_MASK)
/*! @} */

/*! @name FADR - Write Buffer Fault Address */
/*! @{ */

#define AON_MCM_FADR_ADDRESS_MASK                (0xFFFFFFFFU)
#define AON_MCM_FADR_ADDRESS_SHIFT               (0U)
/*! ADDRESS - Fault Address */
#define AON_MCM_FADR_ADDRESS(x)                  (((uint32_t)(((uint32_t)(x)) << AON_MCM_FADR_ADDRESS_SHIFT)) & AON_MCM_FADR_ADDRESS_MASK)
/*! @} */

/*! @name FATR - Store Buffer Fault Attributes */
/*! @{ */

#define AON_MCM_FATR_BEDA_MASK                   (0x1U)
#define AON_MCM_FATR_BEDA_SHIFT                  (0U)
/*! BEDA - Bus Error Data Access Type
 *  0b0..Instruction
 *  0b1..Data
 */
#define AON_MCM_FATR_BEDA(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BEDA_SHIFT)) & AON_MCM_FATR_BEDA_MASK)

#define AON_MCM_FATR_BEMD_MASK                   (0x2U)
#define AON_MCM_FATR_BEMD_SHIFT                  (1U)
/*! BEMD - Bus Error Privilege Level
 *  0b0..User mode
 *  0b1..Supervisor or privileged mode
 */
#define AON_MCM_FATR_BEMD(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BEMD_SHIFT)) & AON_MCM_FATR_BEMD_MASK)

#define AON_MCM_FATR_BESZ_MASK                   (0x30U)
#define AON_MCM_FATR_BESZ_SHIFT                  (4U)
/*! BESZ - Bus Error Size
 *  0b00..8-bit
 *  0b01..16-bit
 *  0b10..32-bit
 *  0b11..
 */
#define AON_MCM_FATR_BESZ(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BESZ_SHIFT)) & AON_MCM_FATR_BESZ_MASK)

#define AON_MCM_FATR_BEWT_MASK                   (0x80U)
#define AON_MCM_FATR_BEWT_SHIFT                  (7U)
/*! BEWT - Bus Error Write
 *  0b0..Read
 *  0b1..Write
 */
#define AON_MCM_FATR_BEWT(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BEWT_SHIFT)) & AON_MCM_FATR_BEWT_MASK)

#define AON_MCM_FATR_BEMN_MASK                   (0xF00U)
#define AON_MCM_FATR_BEMN_SHIFT                  (8U)
/*! BEMN - Bus Error Master Number */
#define AON_MCM_FATR_BEMN(x)                     (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BEMN_SHIFT)) & AON_MCM_FATR_BEMN_MASK)

#define AON_MCM_FATR_BEOVR_MASK                  (0x80000000U)
#define AON_MCM_FATR_BEOVR_SHIFT                 (31U)
/*! BEOVR - Bus Error Overrun
 *  0b0..No overrun
 *  0b1..Overrun
 */
#define AON_MCM_FATR_BEOVR(x)                    (((uint32_t)(((uint32_t)(x)) << AON_MCM_FATR_BEOVR_SHIFT)) & AON_MCM_FATR_BEOVR_MASK)
/*! @} */

/*! @name FDR - Store Buffer Fault Data */
/*! @{ */

#define AON_MCM_FDR_DATA_MASK                    (0xFFFFFFFFU)
#define AON_MCM_FDR_DATA_SHIFT                   (0U)
/*! DATA - Fault Data */
#define AON_MCM_FDR_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << AON_MCM_FDR_DATA_SHIFT)) & AON_MCM_FDR_DATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group AON_MCM_Register_Masks */


/* AON_MCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE                            (0xF0080000u)
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE_NS                         (0xE0080000u)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM                                 ((AON_MCM_Type *)AON__MCM_BASE)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM_NS                              ((AON_MCM_Type *)AON__MCM_BASE_NS)
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS                       { AON__MCM_BASE }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS                        { AON__MCM }
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS_NS                    { AON__MCM_BASE_NS }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS_NS                     { AON__MCM_NS }
#else
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE                            (0xE0080000u)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM                                 ((AON_MCM_Type *)AON__MCM_BASE)
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS                       { AON__MCM_BASE }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS                        { AON__MCM }
#endif

/*!
 * @}
 */ /* end of group AON_MCM_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_AON_MCM_H_) */
