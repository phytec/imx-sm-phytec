/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_pcal6416a.h"

/******************************************************************************
 * Definitions
 *****************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "components.pcal6416a"
#endif

/* I2C Bus Expander Registers */
#define BUS_EXP_IN_0_REG     0x00U
#define BUS_EXP_IN_1_REG     0x01U
#define BUS_EXP_OUT_0_REG    0x02U
#define BUS_EXP_OUT_1_REG    0x03U
#define BUS_EXP_POL_0_REG    0x04U
#define BUS_EXP_POL_1_REG    0x05U
#define BUS_EXP_CONF_0_REG   0x06U
#define BUS_EXP_CONF_1_REG   0x07U
#define BUS_EXP_DS0_0_REG    0x40U
#define BUS_EXP_DS0_1_REG    0x41U
#define BUS_EXP_DS1_0_REG    0x42U
#define BUS_EXP_DS1_1_REG    0x43U
#define BUS_EXP_LATCH_0_REG  0x44U
#define BUS_EXP_LATCH_1_REG  0x45U
#define BUS_EXP_PULL1_0_REG  0x46U
#define BUS_EXP_PULL1_1_REG  0x47U
#define BUS_EXP_PULL2_0_REG  0x48U
#define BUS_EXP_PULL2_1_REG  0x49U
#define BUS_EXP_MASK_0_REG   0x4AU
#define BUS_EXP_MASK_1_REG   0x4BU
#define BUS_EXP_STAT_0_REG   0x4CU
#define BUS_EXP_STAT_1_REG   0x4DU
#define BUS_EXP_OD_REG       0x4FU

/*******************************************************************************
 * Variables
 ******************************************************************************/

/******************************************************************************
 * Code
 *****************************************************************************/

static status_t PCAL6416A_Send(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, uint8_t *txBuff);
static status_t PCAL6416A_Send16(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, const uint16_t *txBuff);
static status_t PCAL6416A_Receive16(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, uint16_t *rxBuff);

/*--------------------------------------------------------------------------*/
/* Initializes a PCAL6416A device                                           */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_Init(const PCAL6416A_Type *dev,
    const pcal6416a_config_t *config)
{
    bool rc = true;
    pcal6416a_config_t defConfig;
    PCAL6416A_GetDefaultConfig(&defConfig);

    /* Set output config */
    if (config->outConfig != defConfig.outConfig)
    {
        uint8_t data = config->outConfig;

        rc = PCAL6416A_Send(dev->i2cBase, dev->devAddr, BUS_EXP_OD_REG,
            &data) == kStatus_Success;
    }

    /* Set output drive strength 0 */
    if (rc && (config->drvStrength[0] != defConfig.drvStrength[0]))
    {
        uint16_t data = config->drvStrength[0];

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_DS0_0_REG,
            &data) == kStatus_Success;
    }

    /* Set output drive strength 1 */
    if (rc && (config->drvStrength[1] != defConfig.drvStrength[1]))
    {
        uint16_t data = config->drvStrength[1];

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_DS1_0_REG,
            &data) == kStatus_Success;
    }

    /* Set direction */
    if (rc && (config->direction != defConfig.direction))
    {
        uint16_t data = config->direction;

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_CONF_0_REG,
            &data) == kStatus_Success;
    }

    /* Set pull select */
    if (rc && (config->pullSelect != defConfig.pullSelect))
    {
        uint16_t data = config->pullSelect;

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_PULL2_0_REG,
            &data) == kStatus_Success;
    }

    /* Set pull enable */
    if (rc && (config->pullEnable != defConfig.pullEnable))
    {
        uint16_t data = config->pullEnable;

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_PULL1_0_REG,
            &data) == kStatus_Success;
    }

    /* Set polarity */
    if (rc && (config->polarity != defConfig.polarity))
    {
        uint16_t data = config->polarity;

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_POL_0_REG,
            &data) == kStatus_Success;
    }

    /* Set latch */
    if (rc && (config->inputLatch!= defConfig.inputLatch))
    {
        uint16_t data = config->inputLatch;

        rc = PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_LATCH_0_REG,
            &data) == kStatus_Success;
    }

    /* Return status */
    return rc;
}

/*--------------------------------------------------------------------------*/
/* De-initializes a PCAL6416A device                                        */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_Deinit(const PCAL6416A_Type *dev)
{
    return PCAL6416A_IntMaskSet(dev, 0xFFFFU);
}

/*--------------------------------------------------------------------------*/
/* Get the default configuration structure                                  */
/*--------------------------------------------------------------------------*/
void PCAL6416A_GetDefaultConfig(pcal6416a_config_t *config)
{
    config->polarity = 0x0000U;        /* No inversion */
    config->direction = 0xFFFFU;       /* All inputs */
    config->drvStrength[0] = 0xFFFFU;  /* Full drive */
    config->drvStrength[1] = 0xFFFFU;  /* Full drive */
    config->inputLatch = 0x0000U;      /* Not latched */
    config->pullEnable = 0x0000U;      /* No pull */
    config->pullSelect = 0xFFFFU;      /* 100K pull-up */
    config->outConfig = 0x00U;         /* Push-pull */
}

/*--------------------------------------------------------------------------*/
/* Read a PCAL6416A device's input pins                                     */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_InputGet(const PCAL6416A_Type *dev, uint16_t *inData)
{
    return PCAL6416A_Receive16(dev->i2cBase, dev->devAddr, BUS_EXP_IN_0_REG,
        inData) == kStatus_Success;
}

/*--------------------------------------------------------------------------*/
/* Read a PCAL6416A device's output setting                                 */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_OutputGet(const PCAL6416A_Type *dev, uint16_t *outData)
{
    return PCAL6416A_Receive16(dev->i2cBase, dev->devAddr, BUS_EXP_OUT_0_REG,
        outData) == kStatus_Success;
}

/*--------------------------------------------------------------------------*/
/* Write a PCAL6416A device's output pins                                   */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_OutputSet(const PCAL6416A_Type *dev, uint16_t outData)
{
    uint16_t data = outData;

    return PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_OUT_0_REG,
        &data) == kStatus_Success;
}

/*--------------------------------------------------------------------------*/
/* Get a PCAL6416A device's interrupt mask                                  */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_IntMaskGet(const PCAL6416A_Type *dev, uint16_t *mask)
{
    return PCAL6416A_Receive16(dev->i2cBase, dev->devAddr, BUS_EXP_MASK_0_REG,
        mask) == kStatus_Success;
}

/*--------------------------------------------------------------------------*/
/* Configure a PCAL6416A device's interrupt mask                            */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_IntMaskSet(const PCAL6416A_Type *dev, uint16_t mask)
{
    uint16_t data = mask;

    return PCAL6416A_Send16(dev->i2cBase, dev->devAddr, BUS_EXP_MASK_0_REG,
        &data) == kStatus_Success;
}

/*--------------------------------------------------------------------------*/
/* Read a PCAL6416A device's interrupt status                               */
/*--------------------------------------------------------------------------*/
bool PCAL6416A_IntStatusGet(const PCAL6416A_Type *dev, uint16_t *status)
{
    return PCAL6416A_Receive16(dev->i2cBase, dev->devAddr, BUS_EXP_STAT_0_REG,
        status) == kStatus_Success;
}

/*==========================================================================*/

/*--------------------------------------------------------------------------*/
/* LPI2C port transmit                                                      */
/*--------------------------------------------------------------------------*/
static status_t PCAL6416A_Send(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, uint8_t *txBuff)
{
    lpi2c_master_transfer_t xfer;

    xfer.flags          = 0U;
    xfer.slaveAddress   = deviceAddress;
    xfer.direction      = kLPI2C_Write;
    xfer.subaddress     = subAddress;
    xfer.subaddressSize = 1U;
    xfer.data           = txBuff;
    xfer.dataSize       = 1U;

    return LPI2C_MasterTransferBlocking(base, &xfer);
}

/*--------------------------------------------------------------------------*/
/* LPI2C port transmit (16-bit)                                             */
/*--------------------------------------------------------------------------*/
static status_t PCAL6416A_Send16(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, const uint16_t *txBuff)
{
    lpi2c_master_transfer_t xfer;
    uint8_t data[2];

    /* Convert to byte array */
    data[0] = (uint8_t) (*txBuff & 0xFFU);
    data[1] = (uint8_t) ((*txBuff >> 8U) & 0xFFU);

    xfer.flags          = 0U;
    xfer.slaveAddress   = deviceAddress;
    xfer.direction      = kLPI2C_Write;
    xfer.subaddress     = subAddress;
    xfer.subaddressSize = 1U;
    xfer.data           = data;
    xfer.dataSize       = 2U;

    return LPI2C_MasterTransferBlocking(base, &xfer);
}

/*--------------------------------------------------------------------------*/
/* LPI2C port receive (16-bit)                                              */
/*--------------------------------------------------------------------------*/
static status_t PCAL6416A_Receive16(LPI2C_Type *base, uint8_t deviceAddress,
    uint32_t subAddress, uint16_t *rxBuff)
{
    status_t rtn;
    lpi2c_master_transfer_t xfer;
    uint8_t data[2];

    xfer.flags          = 0U;
    xfer.slaveAddress   = deviceAddress;
    xfer.direction      = kLPI2C_Read;
    xfer.subaddress     = subAddress;
    xfer.subaddressSize = 1U;
    xfer.data           = data;
    xfer.dataSize       = 2U;

    rtn = LPI2C_MasterTransferBlocking(base, &xfer);

    /* Convert to 16-bit */
    *rxBuff = (uint16_t) (((((uint16_t) data[1]) << (uint8_t) 8U)
        | ((uint16_t) data[0])) & 0xFFFFU);

    /* Return status */
    return rtn;
}

