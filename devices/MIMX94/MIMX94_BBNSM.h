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
 * @file MIMX9494_BBNSM.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_BBNSM
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_BBNSM_H_)  /* Check if memory map has not been already included */
#define MIMX9494_BBNSM_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- BBNSM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BBNSM_Peripheral_Access_Layer BBNSM Peripheral Access Layer
 * @{
 */

/** BBNSM - Register Layout Typedef */
typedef struct {
  __I  uint32_t BBNSM_VID;                         /**< BBNSM Version ID Register, offset: 0x0 */
  __I  uint32_t BBNSM_FEATURES;                    /**< BBNSM Features Register, offset: 0x4 */
  __IO uint32_t BBNSM_CTRL;                        /**< BBNSM Control Register, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t BBNSM_INT_EN;                      /**< BBNSM Interrupt Enable Register, offset: 0x10 */
  __IO uint32_t BBNSM_EVENTS;                      /**< BBNSM Events Register, offset: 0x14 */
       uint8_t RESERVED_1[12];
  __IO uint32_t BBNSM_PAD_CTRL;                    /**< BBNSM External Pad Control Register, offset: 0x24 */
       uint8_t RESERVED_2[24];
  __IO uint32_t BBNSM_RTC_LS;                      /**< BBNSM Real-Time Counter LS Register, offset: 0x40 */
  __IO uint32_t BBNSM_RTC_MS;                      /**< BBNSM Real-Time Counter MS Register, offset: 0x44 */
       uint8_t RESERVED_3[8];
  __IO uint32_t BBNSM_TA;                          /**< BBNSM Time Alarm Register, offset: 0x50 */
       uint8_t RESERVED_4[684];
  __IO uint32_t GPR[8];                            /**< General Purpose Register Word 0..General Purpose Register Word 7, array offset: 0x300, array step: 0x4 */
} BBNSM_Type;

/* ----------------------------------------------------------------------------
   -- BBNSM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BBNSM_Register_Masks BBNSM Register Masks
 * @{
 */

/*! @name BBNSM_VID - BBNSM Version ID Register */
/*! @{ */

#define BBNSM_BBNSM_VID_BBNSM_IPID_MASK          (0xFFU)
#define BBNSM_BBNSM_VID_BBNSM_IPID_SHIFT         (0U)
/*! BBNSM_IPID - BBNSM IP ID */
#define BBNSM_BBNSM_VID_BBNSM_IPID(x)            (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_VID_BBNSM_IPID_SHIFT)) & BBNSM_BBNSM_VID_BBNSM_IPID_MASK)

#define BBNSM_BBNSM_VID_BBNSM_REV_MASK           (0xFF00U)
#define BBNSM_BBNSM_VID_BBNSM_REV_SHIFT          (8U)
/*! BBNSM_REV - BBNSM Revision */
#define BBNSM_BBNSM_VID_BBNSM_REV(x)             (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_VID_BBNSM_REV_SHIFT)) & BBNSM_BBNSM_VID_BBNSM_REV_MASK)

#define BBNSM_BBNSM_VID_BBNSM_VID_MASK           (0xFF0000U)
#define BBNSM_BBNSM_VID_BBNSM_VID_SHIFT          (16U)
/*! BBNSM_VID - BBNSM Version ID */
#define BBNSM_BBNSM_VID_BBNSM_VID(x)             (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_VID_BBNSM_VID_SHIFT)) & BBNSM_BBNSM_VID_BBNSM_VID_MASK)
/*! @} */

/*! @name BBNSM_FEATURES - BBNSM Features Register */
/*! @{ */

#define BBNSM_BBNSM_FEATURES_GPR_SZ_MASK         (0xFCU)
#define BBNSM_BBNSM_FEATURES_GPR_SZ_SHIFT        (2U)
/*! GPR_SZ - GPR Register Array Size
 *  0b000000..This version of BBNSM does not implement a general-purpose register array.
 *  *..The number of 32-bit words implemented in the general-purpose register array.
 */
#define BBNSM_BBNSM_FEATURES_GPR_SZ(x)           (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_FEATURES_GPR_SZ_SHIFT)) & BBNSM_BBNSM_FEATURES_GPR_SZ_MASK)
/*! @} */

/*! @name BBNSM_CTRL - BBNSM Control Register */
/*! @{ */

#define BBNSM_BBNSM_CTRL_RTC_EN_MASK             (0x3U)
#define BBNSM_BBNSM_CTRL_RTC_EN_SHIFT            (0U)
/*! RTC_EN - Real-Time Counter Enable
 *  0b01..Disable the real-time counter.
 *  0b10..Enable the real-time counter.
 */
#define BBNSM_BBNSM_CTRL_RTC_EN(x)               (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_RTC_EN_SHIFT)) & BBNSM_BBNSM_CTRL_RTC_EN_MASK)

#define BBNSM_BBNSM_CTRL_TA_EN_MASK              (0xCU)
#define BBNSM_BBNSM_CTRL_TA_EN_SHIFT             (2U)
/*! TA_EN - Time Alarm Enable
 *  0b01..Disable the time alarm.
 *  0b10..Enable the time alarm. A time alarm event occurs if the value in the real-time counter register is equal
 *        to the value in the time alarm register.
 */
#define BBNSM_BBNSM_CTRL_TA_EN(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_TA_EN_SHIFT)) & BBNSM_BBNSM_CTRL_TA_EN_MASK)

#define BBNSM_BBNSM_CTRL_CAL_EN_MASK             (0x10U)
#define BBNSM_BBNSM_CTRL_CAL_EN_SHIFT            (4U)
/*! CAL_EN - Calibration Enable
 *  0b0..RTC Time calibration is disabled.
 *  0b1..RTC Time calibration is enabled.
 */
#define BBNSM_BBNSM_CTRL_CAL_EN(x)               (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_CAL_EN_SHIFT)) & BBNSM_BBNSM_CTRL_CAL_EN_MASK)

#define BBNSM_BBNSM_CTRL_CAL_VAL_MASK            (0x1F00U)
#define BBNSM_BBNSM_CTRL_CAL_VAL_SHIFT           (8U)
/*! CAL_VAL - Calibration Value
 *  0b01111..+15 counts per each 32768 ticks of the counter clock.
 *  0b00010..+2 counts per each 32768 ticks of the counter clock.
 *  0b00001..+1 counts per each 32768 ticks of the counter clock.
 *  0b00000..+0 counts per each 32768 ticks of the counter clock.
 *  0b11111..-1 counts per each 32768 ticks of the counter clock.
 *  0b11110..-2 counts per each 32768 ticks of the counter clock.
 *  0b10001..-15 counts per each 32768 ticks of the counter clock.
 *  0b10000..-16 counts per each 32768 ticks of the counter clock.
 */
#define BBNSM_BBNSM_CTRL_CAL_VAL(x)              (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_CAL_VAL_SHIFT)) & BBNSM_BBNSM_CTRL_CAL_VAL_MASK)

#define BBNSM_BBNSM_CTRL_BTN_TIMEOUT_MASK        (0x30000U)
#define BBNSM_BBNSM_CTRL_BTN_TIMEOUT_SHIFT       (16U)
/*! BTN_TIMEOUT - Button Press Timeout
 *  0b00..5 seconds.
 *  0b01..10 seconds.
 *  0b10..15 seconds.
 *  0b11..Timeout disabled. Long button presses will not request a power down.
 */
#define BBNSM_BBNSM_CTRL_BTN_TIMEOUT(x)          (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_BTN_TIMEOUT_SHIFT)) & BBNSM_BBNSM_CTRL_BTN_TIMEOUT_MASK)

#define BBNSM_BBNSM_CTRL_DEBOUNCE_MASK           (0xC0000U)
#define BBNSM_BBNSM_CTRL_DEBOUNCE_SHIFT          (18U)
/*! DEBOUNCE - Debounce Time
 *  0b00..50 milliseconds.
 *  0b01..100 milliseconds.
 *  0b10..500 milliseconds.
 *  0b11..0 milliseconds.
 */
#define BBNSM_BBNSM_CTRL_DEBOUNCE(x)             (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_DEBOUNCE_SHIFT)) & BBNSM_BBNSM_CTRL_DEBOUNCE_MASK)

#define BBNSM_BBNSM_CTRL_TURN_ON_TIME_MASK       (0x300000U)
#define BBNSM_BBNSM_CTRL_TURN_ON_TIME_SHIFT      (20U)
/*! TURN_ON_TIME - Turn-On Time
 *  0b00..500 milliseconds.
 *  0b01..50 milliseconds.
 *  0b10..100 milliseconds.
 *  0b11..0 milliseconds.
 */
#define BBNSM_BBNSM_CTRL_TURN_ON_TIME(x)         (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_TURN_ON_TIME_SHIFT)) & BBNSM_BBNSM_CTRL_TURN_ON_TIME_MASK)

#define BBNSM_BBNSM_CTRL_PK_EN_MASK              (0x400000U)
#define BBNSM_BBNSM_CTRL_PK_EN_SHIFT             (22U)
/*! PK_EN - PMIC On Request Enable
 *  0b0..PMIC On Request is disabled.
 *  0b1..PMIC On Request is enabled.
 */
#define BBNSM_BBNSM_CTRL_PK_EN(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_PK_EN_SHIFT)) & BBNSM_BBNSM_CTRL_PK_EN_MASK)

#define BBNSM_BBNSM_CTRL_PK_OVR_MASK             (0x800000U)
#define BBNSM_BBNSM_CTRL_PK_OVR_SHIFT            (23U)
/*! PK_OVR - PMIC On Request Override
 *  0b0..PMIC On Request Override is disabled.
 *  0b1..PMIC On Request Override is enabled.
 */
#define BBNSM_BBNSM_CTRL_PK_OVR(x)               (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_PK_OVR_SHIFT)) & BBNSM_BBNSM_CTRL_PK_OVR_MASK)

#define BBNSM_BBNSM_CTRL_DP_EN_MASK              (0x1000000U)
#define BBNSM_BBNSM_CTRL_DP_EN_SHIFT             (24U)
/*! DP_EN - Dumb PMIC Enable
 *  0b0..Smart PMIC is enabled.
 *  0b1..Dumb PMIC is enabled.
 */
#define BBNSM_BBNSM_CTRL_DP_EN(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_DP_EN_SHIFT)) & BBNSM_BBNSM_CTRL_DP_EN_MASK)

#define BBNSM_BBNSM_CTRL_TOSP_MASK               (0x2000000U)
#define BBNSM_BBNSM_CTRL_TOSP_SHIFT              (25U)
/*! TOSP - Turn Off System Power
 *  0b0..Leave system power on.
 *  0b1..Turn off system power when Dumb PMIC is enabled.
 */
#define BBNSM_BBNSM_CTRL_TOSP(x)                 (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_TOSP_SHIFT)) & BBNSM_BBNSM_CTRL_TOSP_MASK)

#define BBNSM_BBNSM_CTRL_BTN_CONFIG_MASK         (0x1C000000U)
#define BBNSM_BBNSM_CTRL_BTN_CONFIG_SHIFT        (26U)
/*! BTN_CONFIG - Button Configuration.
 *  0b000..Button signal is active high
 *  0b001..Button signal is active low
 *  0b010..Button signal is active on the falling edge
 *  0b011..Button signal is active on the rising edge
 *  0b100..Button signal is active on any edge
 */
#define BBNSM_BBNSM_CTRL_BTN_CONFIG(x)           (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_CTRL_BTN_CONFIG_SHIFT)) & BBNSM_BBNSM_CTRL_BTN_CONFIG_MASK)
/*! @} */

/*! @name BBNSM_INT_EN - BBNSM Interrupt Enable Register */
/*! @{ */

#define BBNSM_BBNSM_INT_EN_RTC_INT_EN_MASK       (0x3U)
#define BBNSM_BBNSM_INT_EN_RTC_INT_EN_SHIFT      (0U)
/*! RTC_INT_EN - Real-Time Counter Rollover Interrupt Enable
 *  0b01..Do not issue an interrupt when RTC has rolled over. The interrupt is cleared when this value is written.
 *  0b10..Issue an interrupt when RTC has rolled over.
 */
#define BBNSM_BBNSM_INT_EN_RTC_INT_EN(x)         (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_INT_EN_RTC_INT_EN_SHIFT)) & BBNSM_BBNSM_INT_EN_RTC_INT_EN_MASK)

#define BBNSM_BBNSM_INT_EN_TA_INT_EN_MASK        (0xCU)
#define BBNSM_BBNSM_INT_EN_TA_INT_EN_SHIFT       (2U)
/*! TA_INT_EN - Time Alarm Interrupt Enable
 *  0b01..Do not issue an interrupt when RTC has reached alarm time. The interrupt is cleared when this value is written.
 *  0b10..Issue an interrupt when RTC has reached alarm time.
 */
#define BBNSM_BBNSM_INT_EN_TA_INT_EN(x)          (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_INT_EN_TA_INT_EN_SHIFT)) & BBNSM_BBNSM_INT_EN_TA_INT_EN_MASK)

#define BBNSM_BBNSM_INT_EN_BTN_INT_EN_MASK       (0x10U)
#define BBNSM_BBNSM_INT_EN_BTN_INT_EN_SHIFT      (4U)
/*! BTN_INT_EN - Button Interrupt Enable
 *  0b0..Interrupt Disabled
 *  0b1..Interrupt Enabled
 */
#define BBNSM_BBNSM_INT_EN_BTN_INT_EN(x)         (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_INT_EN_BTN_INT_EN_SHIFT)) & BBNSM_BBNSM_INT_EN_BTN_INT_EN_MASK)
/*! @} */

/*! @name BBNSM_EVENTS - BBNSM Events Register */
/*! @{ */

#define BBNSM_BBNSM_EVENTS_RTC_ROLL_MASK         (0x3U)
#define BBNSM_BBNSM_EVENTS_RTC_ROLL_SHIFT        (0U)
/*! RTC_ROLL - Real-Time Counter Rollover Event
 *  0b01..The real-time counter has not rolled over.
 *  0b10..The real-time counter has rolled over.
 */
#define BBNSM_BBNSM_EVENTS_RTC_ROLL(x)           (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_RTC_ROLL_SHIFT)) & BBNSM_BBNSM_EVENTS_RTC_ROLL_MASK)

#define BBNSM_BBNSM_EVENTS_TA_MASK               (0xCU)
#define BBNSM_BBNSM_EVENTS_TA_SHIFT              (2U)
/*! TA - Time Alarm Event
 *  0b01..The real-time counter has not reached the alarm time.
 *  0b10..The real-time counter has reached the alarm time.
 */
#define BBNSM_BBNSM_EVENTS_TA(x)                 (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_TA_SHIFT)) & BBNSM_BBNSM_EVENTS_TA_MASK)

#define BBNSM_BBNSM_EVENTS_EMG_OFF_MASK          (0x10U)
#define BBNSM_BBNSM_EVENTS_EMG_OFF_SHIFT         (4U)
/*! EMG_OFF - Emergency Off Event
 *  0b0..An emergency power off has not been requested.
 *  0b1..An emergency power off has been requested.
 */
#define BBNSM_BBNSM_EVENTS_EMG_OFF(x)            (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_EMG_OFF_SHIFT)) & BBNSM_BBNSM_EVENTS_EMG_OFF_MASK)

#define BBNSM_BBNSM_EVENTS_PWR_OFF_MASK          (0x20U)
#define BBNSM_BBNSM_EVENTS_PWR_OFF_SHIFT         (5U)
/*! PWR_OFF - Set Power Off Event
 *  0b0..The power off interrupt has not been requested.
 *  0b1..The power off interrupt has been requested.
 */
#define BBNSM_BBNSM_EVENTS_PWR_OFF(x)            (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_PWR_OFF_SHIFT)) & BBNSM_BBNSM_EVENTS_PWR_OFF_MASK)

#define BBNSM_BBNSM_EVENTS_PWR_ON_MASK           (0x40U)
#define BBNSM_BBNSM_EVENTS_PWR_ON_SHIFT          (6U)
/*! PWR_ON - Set Power On Event
 *  0b0..The power on interrupt has not been requested.
 *  0b1..The power on interrupt has been requested.
 */
#define BBNSM_BBNSM_EVENTS_PWR_ON(x)             (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_PWR_ON_SHIFT)) & BBNSM_BBNSM_EVENTS_PWR_ON_MASK)

#define BBNSM_BBNSM_EVENTS_BTN_MASK              (0x80U)
#define BBNSM_BBNSM_EVENTS_BTN_SHIFT             (7U)
/*! BTN - Button
 *  0b0..BTN not pressed
 *  0b1..BTN pressed
 */
#define BBNSM_BBNSM_EVENTS_BTN(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_BTN_SHIFT)) & BBNSM_BBNSM_EVENTS_BTN_MASK)

#define BBNSM_BBNSM_EVENTS_BI_MASK               (0x100U)
#define BBNSM_BBNSM_EVENTS_BI_SHIFT              (8U)
/*! BI - Button Interrupt */
#define BBNSM_BBNSM_EVENTS_BI(x)                 (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_EVENTS_BI_SHIFT)) & BBNSM_BBNSM_EVENTS_BI_MASK)
/*! @} */

/*! @name BBNSM_PAD_CTRL - BBNSM External Pad Control Register */
/*! @{ */

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL0_MASK      (0x1U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL0_SHIFT     (0U)
/*! PAD_CTRL0 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL0(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL0_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL0_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL1_MASK      (0x2U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL1_SHIFT     (1U)
/*! PAD_CTRL1 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL1(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL1_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL1_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL2_MASK      (0x4U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL2_SHIFT     (2U)
/*! PAD_CTRL2 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL2(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL2_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL2_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL3_MASK      (0x8U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL3_SHIFT     (3U)
/*! PAD_CTRL3 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL3(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL3_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL3_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL4_MASK      (0x10U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL4_SHIFT     (4U)
/*! PAD_CTRL4 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL4(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL4_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL4_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL5_MASK      (0x20U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL5_SHIFT     (5U)
/*! PAD_CTRL5 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL5(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL5_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL5_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL6_MASK      (0x40U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL6_SHIFT     (6U)
/*! PAD_CTRL6 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL6(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL6_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL6_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL7_MASK      (0x80U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL7_SHIFT     (7U)
/*! PAD_CTRL7 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL7(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL7_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL7_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL8_MASK      (0x100U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL8_SHIFT     (8U)
/*! PAD_CTRL8 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL8(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL8_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL8_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL9_MASK      (0x200U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL9_SHIFT     (9U)
/*! PAD_CTRL9 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL9(x)        (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL9_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL9_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL10_MASK     (0x400U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL10_SHIFT    (10U)
/*! PAD_CTRL10 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL10(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL10_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL10_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL11_MASK     (0x800U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL11_SHIFT    (11U)
/*! PAD_CTRL11 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL11(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL11_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL11_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL12_MASK     (0x1000U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL12_SHIFT    (12U)
/*! PAD_CTRL12 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL12(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL12_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL12_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL13_MASK     (0x2000U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL13_SHIFT    (13U)
/*! PAD_CTRL13 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL13(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL13_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL13_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL14_MASK     (0x4000U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL14_SHIFT    (14U)
/*! PAD_CTRL14 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL14(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL14_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL14_MASK)

#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL15_MASK     (0x8000U)
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL15_SHIFT    (15U)
/*! PAD_CTRL15 - Control I/O Pads
 *  0b0..Deasserts bit n in bbnsm_pad_ctrl[n]
 *  0b1..Assert bit n in bbnsm_pad_ctrl[n]
 */
#define BBNSM_BBNSM_PAD_CTRL_PAD_CTRL15(x)       (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_PAD_CTRL_PAD_CTRL15_SHIFT)) & BBNSM_BBNSM_PAD_CTRL_PAD_CTRL15_MASK)
/*! @} */

/*! @name BBNSM_RTC_LS - BBNSM Real-Time Counter LS Register */
/*! @{ */

#define BBNSM_BBNSM_RTC_LS_RTC_MASK              (0xFFFFFFFFU)
#define BBNSM_BBNSM_RTC_LS_RTC_SHIFT             (0U)
/*! RTC - Real-time Counter */
#define BBNSM_BBNSM_RTC_LS_RTC(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_RTC_LS_RTC_SHIFT)) & BBNSM_BBNSM_RTC_LS_RTC_MASK)
/*! @} */

/*! @name BBNSM_RTC_MS - BBNSM Real-Time Counter MS Register */
/*! @{ */

#define BBNSM_BBNSM_RTC_MS_RTC_MASK              (0x7FFFU)
#define BBNSM_BBNSM_RTC_MS_RTC_SHIFT             (0U)
/*! RTC - Real-Time Counter */
#define BBNSM_BBNSM_RTC_MS_RTC(x)                (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_RTC_MS_RTC_SHIFT)) & BBNSM_BBNSM_RTC_MS_RTC_MASK)
/*! @} */

/*! @name BBNSM_TA - BBNSM Time Alarm Register */
/*! @{ */

#define BBNSM_BBNSM_TA_TA_MASK                   (0xFFFFFFFFU)
#define BBNSM_BBNSM_TA_TA_SHIFT                  (0U)
/*! TA - Time Alarm Value */
#define BBNSM_BBNSM_TA_TA(x)                     (((uint32_t)(((uint32_t)(x)) << BBNSM_BBNSM_TA_TA_SHIFT)) & BBNSM_BBNSM_TA_TA_MASK)
/*! @} */

/*! @name GPR - General Purpose Register Word 0..General Purpose Register Word 7 */
/*! @{ */

#define BBNSM_GPR_GPR_MASK                       (0xFFFFFFFFU)
#define BBNSM_GPR_GPR_SHIFT                      (0U)
/*! GPR - 32 bits of the GPR. */
#define BBNSM_GPR_GPR(x)                         (((uint32_t)(((uint32_t)(x)) << BBNSM_GPR_GPR_SHIFT)) & BBNSM_GPR_GPR_MASK)
/*! @} */

/* The count of BBNSM_GPR */
#define BBNSM_GPR_COUNT                          (8U)


/*!
 * @}
 */ /* end of group BBNSM_Register_Masks */


/* BBNSM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BBNSM base address */
  #define BBNSM_BASE                               (0x54440000u)
  /** Peripheral BBNSM base address */
  #define BBNSM_BASE_NS                            (0x44440000u)
  /** Peripheral BBNSM base pointer */
  #define BBNSM                                    ((BBNSM_Type *)BBNSM_BASE)
  /** Peripheral BBNSM base pointer */
  #define BBNSM_NS                                 ((BBNSM_Type *)BBNSM_BASE_NS)
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS                         { BBNSM_BASE }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS                          { BBNSM }
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS_NS                      { BBNSM_BASE_NS }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS_NS                       { BBNSM_NS }
#else
  /** Peripheral BBNSM base address */
  #define BBNSM_BASE                               (0x44440000u)
  /** Peripheral BBNSM base pointer */
  #define BBNSM                                    ((BBNSM_Type *)BBNSM_BASE)
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS                         { BBNSM_BASE }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS                          { BBNSM }
#endif

/*!
 * @}
 */ /* end of group BBNSM_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_BBNSM_H_) */
