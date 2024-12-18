/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_GLITCHFILTER_H
#define FSL_GLITCHFILTER_H

#include "fsl_common.h"

/*!
 * @addtogroup glitchfilter
 * @{
 * @file
 * @brief
 *
 * Header file containing the API for the temp sensor.
 */

/******************************************************************************
 * Definitions
 *****************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief GLITCHFILTER driver version. */
#define FSL_GLITCHFILTER_DRIVER_VERSION (MAKE_VERSION(1, 0, 0))
/*@}*/

/*! @brief GLITCHFILTER configuration structure. */
typedef struct
{
    uint32_t ffm;    /*!< Falling edge filter type selection */
    uint32_t rfm;    /*!< Rising edge filter type selection */
    uint32_t presr;  /*!< Prescaler */
    uint32_t rthr;   /*!< Rising edge threshold */
    uint32_t fthr;   /*!< Falling edge threshold */
    bool frz;        /*!< Freeze for debug operation */
    bool imm;        /*!< Immediate edge propagation */
    bool pssel;      /*!< External prescaler */
    bool pol;        /*!< Inverted output polarity */
} glitchfilter_config_t;

/*!
 * @brief GLITCHFILTER filter type selection.
 */
enum
{
    kGLITCHFILTER_FTypeBypass = 0U,       /*!< Bypass */
    kGLITCHFILTER_FTypeWindowing = 1U,    /*!< Windowing */
    kGLITCHFILTER_FTypeIntegrating = 2U,  /*!< Integrating */
    kGLITCHFILTER_FTypeHold = 3U,         /*!< Integrating hold */
    kGLITCHFILTER_FTypePost = 4U          /*!< Windowing with post sample */
};

/*!
 * @brief GLITCHFILTER status flags.
 */
enum
{
    /*! Filter is active waiting for an edge */
    kGLITCHFILTER_Wedge = GLITCHFILTER_MSR_WEDGE(1U),
    /*! Filter is active processing an edge */
    kGLITCHFILTER_Fedge = GLITCHFILTER_MSR_FEDGE(1U),

    /*! Rise noise detected bit */
    kGLITCHFILTER_Rndet = GLITCHFILTER_MSR_RNDET(1U),
    /*! Fall noise detected bit */
    kGLITCHFILTER_Fndet = GLITCHFILTER_MSR_FNDET(1U),

    /*! Filter input */
    kGLITCHFILTER_Fli = GLITCHFILTER_MSR_FLI(1U),
    /*! Filter output */
    kGLITCHFILTER_Flo = GLITCHFILTER_MSR_FLO(1U)
};

/*!
 * @brief GLITCHFILTER force flags.
 */
enum
{
    /*! Force Bypass */
    kGLITCHFILTER_Fbp = GLITCHFILTER_MCR_FBP(1U),
    /*! Force filter output high */
    kGLITCHFILTER_Foh = GLITCHFILTER_MCR_FOH(1U),
    /*! Force filter output low */
    kGLITCHFILTER_Fol = GLITCHFILTER_MCR_FOL(1U),
};

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name GLITCHFILTER initialization.
 * @{
 */

/*!
 * @brief Initializes an input of a GLITCHFILTER module.
 *
 * @param base   GLITCHFILTER peripheral base address.
 * @param input  Input/channel.
 * @param config Pointer to a configuration structure.
 */
void GLITCHFILTER_Init(GLITCHFILTER_Type *base, uint32_t input,
    const glitchfilter_config_t *config);

/*!
 * @brief De-initializes an input of a GLITCHFILTER module.
 *
 * @param base  GLITCHFILTER peripheral base address.
 * @param input Input/channel.
 */
void GLITCHFILTER_Deinit(GLITCHFILTER_Type *base, uint32_t input);

/*!
 * @brief Gets the default configuration structure.
 *
 * @param config Pointer to a configuration structure.
 */
void GLITCHFILTER_GetDefaultConfig(glitchfilter_config_t *config);

/** @} */

/*!
 * @brief Gets the GLITCHFILTER status flags for an input.
 *
 * This function returns a bit mask of the GLITCHFILTER status flags.
 *
 * @param base  GLITCHFILTER peripheral base address.
 * @param input Input/channel.
 *
 * @return Bit mask of the GLITCHFILTER status flags.
 */
uint32_t GLITCHFILTER_GetStatusFlags(const GLITCHFILTER_Type *base,
    uint32_t input);

/*!
 * @brief Force the output of a GLITCHFILTER input.
 *
 * @param base   GLITCHFILTER peripheral base address.
 * @param input  Input/channel.
 * @param force  Force to apply.
 */
void GLITCHFILTER_ForceOutput(GLITCHFILTER_Type *base, uint32_t input,
    uint32_t force);

#if defined(__cplusplus)
}
#endif /*_cplusplus*/
/** @} */

#endif /* FSL_GLITCHFILTER_H */

