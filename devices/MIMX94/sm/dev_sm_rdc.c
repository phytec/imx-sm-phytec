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

/*==========================================================================*/
/* File containing the implementation of the device RDC functions.          */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "dev_sm.h"
#include "fsl_ele.h"
#include "fsl_device_registers.h"
#include "config_trdc.h"

/* Local defines */

/* Local types */

typedef struct
{
    string name;
    uint32_t rdcBase;
    char rdcLabel;
    uint8_t apiId;
    const uint32_t *config;
    uint32_t pd;
} dev_sm_trdc_info_t;

/* Local variables */

static const uint32_t s_trdcAon[] = SM_TRDC_A_CONFIG;
static const uint32_t s_trdcDisplay[] = SM_TRDC_D_CONFIG;
static const uint32_t s_trdcNetc[] = SM_TRDC_E_CONFIG;
static const uint32_t s_trdcSync[] = SM_TRDC_S_CONFIG;
static const uint32_t s_trdcHsio[] = SM_TRDC_H_CONFIG;
static const uint32_t s_trdcMega[] = SM_TRDC_M_CONFIG;
static const uint32_t s_trdcNoc[] = SM_TRDC_N_CONFIG;
static const uint32_t s_trdcWakeup[] = SM_TRDC_W_CONFIG;
static const uint32_t s_trdcWakeup2[] = SM_TRDC_X_CONFIG;

static const dev_sm_trdc_info_t s_trdcInfo[DEV_SM_NUM_RDC] =
{
    {"aon",     0x44270000, 'A', 0x74U, s_trdcAon,      DEV_SM_PD_AON},
    {"mega",    0x42810000, 'M', 0x82U, s_trdcMega,     DEV_SM_PD_WAKEUP},
    {"wakeup",  0x42460000, 'W', 0x78U, s_trdcWakeup,   DEV_SM_PD_WAKEUP},
    {"wakeup2", 0x42800000, 'X', 0x00U, s_trdcWakeup2,  DEV_SM_PD_WAKEUP},
    {"hsio",    0x4C040000, 'H', 0x95U, s_trdcHsio,     DEV_SM_PD_HSIO_TOP},
    {"noc",     0x49010000, 'N', 0x86U, s_trdcNoc,      DEV_SM_PD_NOC},
    {"disp",    0x4B040000, 'D', 0xDEU, s_trdcDisplay,  DEV_SM_PD_DISPLAY},
    {"netc",    0x4C840000, 'E', 0xB9U, s_trdcNetc,     DEV_SM_PD_NETC},
    {"sync",    0x4D040000, 'S', 0xE3U, s_trdcSync,     DEV_SM_PD_NETC},
};

/*--------------------------------------------------------------------------*/
/* Init RDC                                                                 */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_RdcInit(void)
{
    int32_t status = SM_ERR_SUCCESS;

    /* RDC Init */
    for (uint32_t rdcId = 0U; rdcId < DEV_SM_NUM_RDC; rdcId++)
    {
        /* Skip if no ID */
        if (s_trdcInfo[rdcId].apiId == 0U)
        {
            continue;
        }

#ifdef DEVICE_HAS_ELE
        /* Request RDC from ELE */
        ELE_RdcRelease(s_trdcInfo[rdcId].apiId);

        /* Check ELE error */
        if (g_eleStatus != SM_ERR_SUCCESS)
        {
            status = g_eleStatus;
            break;
        }
#endif
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Return RDC name and address                                              */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_RdcInfoGet(uint32_t rdcId, string *rdcNameAddr,
    char *rdcLabel, uint32_t *rdcBase)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check if invalid */
    if (rdcId >= DEV_SM_NUM_RDC)
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Return results */
    if (status == SM_ERR_SUCCESS)
    {
        if (rdcNameAddr != NULL)
        {
            /* Return pointer to name */
            *rdcNameAddr = s_trdcInfo[rdcId].name;
        }

        if (rdcBase != NULL)
        {
            /* Return address of RDC */
            *rdcBase = s_trdcInfo[rdcId].rdcBase;
        }

        if (rdcLabel != NULL)
        {
            /* Return label */
            *rdcLabel = s_trdcInfo[rdcId].rdcLabel;
        }

        /* Check if powered */
        if (!SRC_MixIsPwrSwitchOn(s_trdcInfo[rdcId].pd))
        {
            status = SM_ERR_POWER;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Load RDC config                                                          */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_RdcLoad(uint32_t rdcId)
{
    int32_t status = SM_ERR_NOT_FOUND;

    /* Check ID */
    if (rdcId < DEV_SM_NUM_RDC)
    {
        /* Load config */
        status = CONFIG_Load((uint32_t*)
            s_trdcInfo[rdcId].rdcBase, s_trdcInfo[rdcId].config);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Set RDC device access rights                                             */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_RdcAccessSet(uint32_t deviceId, bool allow, uint8_t domId,
    bool secure)
{
    /* Return status */
    return SM_ERR_NOT_SUPPORTED;
}

