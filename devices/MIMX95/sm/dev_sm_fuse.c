/*
** ###################################################################
**
**     Copyright 2024 NXP
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
/* File containing the implementation of the fuse access functions.         */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "dev_sm.h"

/* Local defines */

/* Local types */

/* Fuse map */
typedef struct
{
    uint16_t bitIdx;
    uint8_t bitWidth;
} dev_sm_fuse_map_t;

/* Local variables */

/* Fuse ID map */
// coverity[misra_c_2012_rule_8_9_violation:FALSE]
static dev_sm_fuse_map_t s_fuseMap[DEV_SM_NUM_FUSE] =
{
    [DEV_SM_FUSE_SI_REV]             = {544U,   4U},
    [DEV_SM_FUSE_PART_NUM]           = {548U,   8U},
    [DEV_SM_FUSE_MARKET_SEGMENT]     = {556U,   2U},
    [DEV_SM_FUSE_SPEED_GRADING]      = {558U,   6U},
    [DEV_SM_FUSE_NPU_DISABLE]        = {576U,   1U},
    [DEV_SM_FUSE_A55_CORE_DISABLE]   = {577U,   6U},
    [DEV_SM_FUSE_A55_CORE0_DISABLE]  = {577U,   1U},
    [DEV_SM_FUSE_A55_CORE1_DISABLE]  = {578U,   1U},
    [DEV_SM_FUSE_A55_CORE2_DISABLE]  = {579U,   1U},
    [DEV_SM_FUSE_A55_CORE3_DISABLE]  = {580U,   1U},
    [DEV_SM_FUSE_A55_CORE4_DISABLE]  = {581U,   1U},
    [DEV_SM_FUSE_A55_CORE5_DISABLE]  = {582U,   1U},
    [DEV_SM_FUSE_DCSS_DISABLE]       = {598U,   1U},
    [DEV_SM_FUSE_ISP_DISABLE]        = {605U,   1U},
    [DEV_SM_FUSE_PCIE1_DISABLE]      = {614U,   1U},
    [DEV_SM_FUSE_PCIE2_DISABLE]      = {615U,   1U},
    [DEV_SM_FUSE_GPU3D_DISABLE]      = {625U,   1U},
    [DEV_SM_FUSE_VPU_DISABLE]        = {626U,   1U},
    [DEV_SM_FUSE_TSENSOR0_TRIM1]     = {1216U,  32U},
    [DEV_SM_FUSE_TSENSOR0_TRIM2]     = {1248U,  32U},
    [DEV_SM_FUSE_TSENSOR1_TRIM1]     = {1280U,  32U},
    [DEV_SM_FUSE_TSENSOR1_TRIM2]     = {1312U,  32U},
    [DEV_SM_FUSE_FRO_TRIM]           = {1344U,  18U},
    [DEV_SM_FUSE_M33_ROM_PATCH_VER]  = {10496U, 32U},
};

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Read a fuse field                                                        */
/*--------------------------------------------------------------------------*/
uint32_t DEV_SM_FuseGet(uint32_t fuseId)
{
    uint32_t fuse;
    uint32_t shift;
    uint32_t mask;

    /* Get fuse word */
    fuse = FSB->FUSE[s_fuseMap[fuseId].bitIdx / 32U];

    /* Calculate shift and mask */
    shift = ((uint32_t) s_fuseMap[fuseId].bitIdx) % 32U;
    mask = (2UL << (((uint32_t) s_fuseMap[fuseId].bitWidth) - 1U)) - 1U;

    /* Return result */
    return (fuse >> shift) & mask;
}

/*--------------------------------------------------------------------------*/
/* Read speed grading                                                       */
/*--------------------------------------------------------------------------*/
uint32_t DEV_SM_FuseSpeedGet(void)
{
    uint32_t speed;
    uint32_t freq = 1800000000UL;

    /* Get speed */
    speed = DEV_SM_FuseGet(DEV_SM_FUSE_SPEED_GRADING) & 0xFU;

    if (speed != 0U)
    {
        /* Calculate freq */
        freq = 2300000000UL - (speed * 100000000UL);
    }

    /* Return frequency */
    return freq;
}

