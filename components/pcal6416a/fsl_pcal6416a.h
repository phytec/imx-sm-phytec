/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_PCAL6416A_H
#define FSL_PCAL6416A_H

#include "fsl_common.h"
#include "fsl_lpi2c.h"

/*!
 * @addtogroup pcal6416a
 * @{
 * @file
 * @brief
 *
 * Header file containing the API for the PCAL6416A I2C bus expander.
 */

/******************************************************************************
 * Definitions
 *****************************************************************************/

/*! PCAL6416A driver version. */
#define FSL_PCAL6416A_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))

/*! PCAL6416A device info. */
typedef struct
{
    LPI2C_Type *i2cBase;  /*!< I2C base address */
    uint8_t devAddr;      /*!< Device I2C address */
} PCAL6416A_Type;

/*! PCAL6416A configuration structure. */
typedef struct
{
    uint16_t polarity;        /*!< Polarity inversion */
    uint16_t direction;       /*!< Direction (in/out) */
    uint16_t drvStrength[2];  /*!< Output drive strength */
    uint16_t inputLatch;      /*!< Input latch */
    uint16_t pullEnable;      /*!< Pull-up/pull-down enable */
    uint16_t pullSelect;      /*!< Pull-up/pull-down selection register */
    uint8_t outConfig;        /*!< Output port configuration */
} pcal6416a_config_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name PCAL6416A initialization.
 * @{
 */

/*!
 * @brief Initializes a PCAL6416A device.
 *
 * @param dev Device info.
 * @param config Pointer to a configuration structure.
 *
 * @return True if successful.
 */
bool PCAL6416A_Init(const PCAL6416A_Type *dev,
    const pcal6416a_config_t *config);

/*!
 * @brief De-initializes a PCAL6416A device.
 *
 * @param dev Device info.
 *
 * @return True if successful.
 */
bool PCAL6416A_Deinit(const PCAL6416A_Type *dev);

/*!
 * @brief Gets the default configuration structure.
 *
 * @param config Pointer to a configuration structure.
 */
void PCAL6416A_GetDefaultConfig(pcal6416a_config_t *config);

/** @} */

/*!
 * @name PCAL6416A data functions.
 * @{
 */

/*!
 * @brief Read a PCAL6416A device's input pins.
 *
 * @param dev Device info.
 * @param inData Pointer to return the input data.
 *
 * @return True if successful.
 */
bool PCAL6416A_InputGet(const PCAL6416A_Type *dev, uint16_t *inData);

/*!
 * @brief Read a PCAL6416A device's output setting.
 *
 * @param dev Device info.
 * @param outData pointer to return the current data out.
 *
 * @return True if successful.
 */
bool PCAL6416A_OutputGet(const PCAL6416A_Type *dev, uint16_t *outData);

/*!
 * @brief Write a PCAL6416A device's output pins.
 *
 * @param dev Device info.
 * @param outData Data to drive out.
 *
 * @return True if successful.
 */
bool PCAL6416A_OutputSet(const PCAL6416A_Type *dev, uint16_t outData);

/** @} */

/*!
 * @name PCAL6416A interrupt functions.
 * @{
 */

/*!
 * @brief Get a PCAL6416A device's interrupt mask.
 *
 * @param dev Device info.
 * @param mask Pointer to return the Interrupt mask.
 *
 * @return True if successful.
 */
bool PCAL6416A_IntMaskGet(const PCAL6416A_Type *dev, uint16_t *mask);

/*!
 * @brief Configure a PCAL6416A device's interrupt mask.
 *
 * @param dev Device info.
 * @param mask Interrupt mask.
 *
 * @return True if successful.
 */
bool PCAL6416A_IntMaskSet(const PCAL6416A_Type *dev, uint16_t mask);

/*!
 * @brief Read a PCAL6416A device's interrupt status.
 *
 * @param dev Device info.
 * @param status Status of interrupts.
 *
 * @return True if successful.
 */
bool PCAL6416A_IntStatusGet(const PCAL6416A_Type *dev, uint16_t *status);

/** @} */

#if defined(__cplusplus)
}
#endif /*_cplusplus*/
/** @} */

#endif /* FSL_PCAL6416A_H */

