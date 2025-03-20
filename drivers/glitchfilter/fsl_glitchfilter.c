/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_glitchfilter.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.glitchfilter"
#endif

/*******************************************************************************
 * Variables
 ******************************************************************************/

/******************************************************************************
 * Code
 *****************************************************************************/

/*!
 * Initializes an input of a GLITCHFILTER module.
 */
void GLITCHFILTER_Init(GLITCHFILTER_Type *base, uint32_t input,
    const glitchfilter_config_t *config)
{
    uint32_t frz = config->frz ? 1U : 0U;
    uint32_t imm = config->imm ? 1U : 0U;
    uint32_t pssel = config->pssel ? 1U : 0U;
    uint32_t pol = config->pol ? 1U : 0U;

    /* Create config */
    uint32_t mcr = GLITCHFILTER_MCR_FRZ(frz)
        | GLITCHFILTER_MCR_IMM(imm)
        | GLITCHFILTER_MCR_PSSEL(pssel)
        | GLITCHFILTER_MCR_POL(pol)
        | GLITCHFILTER_MCR_FFM(config->ffm)
        | GLITCHFILTER_MCR_RFM(config->rfm);

    /* Stop filter */
    base->MCR[input].MCR = GLITCHFILTER_MCR_FGEN(0U);

    /* Configure MCR */
    base->MCR[input].MCR = mcr;

    /* Configure PRESR */
    base->MCR[input].PRESR = config->presr;

    /* Configure RTHR */
    base->MCR[input].RTHR = config->rthr;

    /* Configure FTHR */
    base->MCR[input].FTHR = config->fthr;

    /* Enable and Start */
    mcr |= GLITCHFILTER_MCR_FGEN(1U);
    base->MCR[input].MCR = mcr;
}

/*!
 * De-initializes an input of a GLITCHFILTER module.
 */
void GLITCHFILTER_Deinit(GLITCHFILTER_Type *base, uint32_t input)
{
    /* Stop filter */
    base->MCR[input].MCR = GLITCHFILTER_MCR_FGEN(0U);
}

/*!
 * Gets the default configuration structure.
 */
void GLITCHFILTER_GetDefaultConfig(glitchfilter_config_t *config)
{
    config->ffm = kGLITCHFILTER_FTypeBypass;
    config->rfm = kGLITCHFILTER_FTypeBypass;
    config->presr = 0U;
    config->rthr = 0U;
    config->fthr = 0U;
    config->frz = false;
    config->imm = true;
    config->pssel = false;
    config->pol = false;
}

/*
 * Get the GLITCHFILTER status flags.
 */
uint32_t GLITCHFILTER_GetStatusFlags(const GLITCHFILTER_Type *base,
    uint32_t input)
{
    return base->MCR[input].MSR;
}

/*
 * Force GLITCHFILTER output.
 */
void GLITCHFILTER_ForceOutput(GLITCHFILTER_Type *base, uint32_t input,
    uint32_t force)
{
    base->MCR[input].MCR |= force;
}

