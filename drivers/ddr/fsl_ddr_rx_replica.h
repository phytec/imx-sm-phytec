/*
 ** ###################################################################
 **
 **     Copyright 2025 NXP
 **
 **     Redistribution and use in source and binary forms, with or without modification,
 **     are permitted provided that the following conditions are met:
 **
 **     o Redistributions of source code must retain the above copyright notice, this list
 **       of conditions and the following disclaimer.
 **
 **     o Redistributions in binary form must reproduce the above copyright notice, this
 **       list of conditions and the following disclaimer in the documentation and/or
 **       other materials provided with the distribution.
 **
 **     o Neither the name of the copyright holder nor the names of its
 **       contributors may be used to endorse or promote products derived from this
 **       software without specific prior written permission.
 **
 **     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 **     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 **     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 **     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 **     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 **     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 **     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 **     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 **     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 **     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **
 **
 ** ###################################################################
 */

#ifndef DEV_SM_DDR_RX_REPLICA_H
#define DEV_SM_DDR_RX_REPLICA_H

/*==========================================================================*/
/*!
 * @addtogroup ddr_driver
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the DDR RX Replica workaround functions.
 */
/*==========================================================================*/

/* Includes */

#include "sm.h"

/* Defines */

/*! Number of maximum samples for RXCLK delay averaging */
#define DDR_RXCLK_DELAY_CNT  128U

/* Types */

/*! Initial DDR training information which will be used later */
typedef struct
{
    /*! Init complete status */
    bool initComplete;
    /*! Number of byte lanes */
    uint8_t dbytes;
    /*! Number of cycles for RXCLK delay */
    uint16_t count;
    /*! Rxclk delay initial training values */
    uint32_t rxclkinitv[4U][9U][4U];
    /*! RxReplicaRatio initial trained value */
    uint16_t init[4U];
    /*! PathPhase select */
    uint16_t pathsel[4U];
    /*! Per dbyte previous applied offset */
    int16_t rxclkoffset[4U];
    /*! Per dbyte delta saved group */
    uint16_t aPathphase[4U][DDR_RXCLK_DELAY_CNT];
    /*! Index for the latest update of a_delta */
    uint32_t aIndex;
    /*! Delta saved group status */
    bool aEmpty;
    /*! Scale factor for Process variation */
    uint32_t processScaleFactor;
    /*! Frequency Ratio */
    uint32_t freqRatio;
    /*! Process corner of sample */
    uint32_t pmro;
    /*! Frequency in MHz of DDRC */
    uint32_t dramFreqMhz;
} ddr_rxclkdelay_wa_data_t;

/*******************************************************************************
 * Variables
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * DDR RX Clk Delay workaround Init
 *
 * @param[in,out] ddrRxcWa    DDR RX CLK delay workaround data.
 * @param[in]     count       Number of cycles for RXCLK delay.
 *
 * @return True if successful.
 */
bool DDR_RxClkDelayInit(ddr_rxclkdelay_wa_data_t *ddrRxcWa, uint16_t count);

/*!
 * DDR RX Clk Delay periodic workaround
 *
 * @param[in,out] ddrRxcWa    DDR RX CLK delay workaround data.
 * @param[in]     newSamples  Number of new samples to acquire.
 *
 */
void DDR_RxReplicaWa(ddr_rxclkdelay_wa_data_t *ddrRxcWa, uint16_t newSamples);

#if defined(__cplusplus)
}
#endif /*_cplusplus*/
/** @} */
#endif /* DEV_SM_DDR_RX_REPLICA_H */

