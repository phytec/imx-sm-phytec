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
/* File containing the implementation of the device memory.                 */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "dev_sm.h"

/* Local defines */

/* Local types */

/* Local variables */

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Return DDR memory region info                                            */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_MemDdrInfoGet(uint32_t ddrRgdId, uint32_t *numRgd,
    uint32_t *ddrType, uint32_t *ddrWidth, bool *eccEnb, uint32_t *mts,
    uint64_t *startAddr, uint64_t *endAddr)
{
    *numRgd = 2U;

    if (ddrRgdId == 0U)
    {
        *ddrType = DEV_SM_DDR_TYPE_LPDDR5;
        *ddrWidth = 32U;
        *eccEnb = false;
        *mts = 8400U;
        *startAddr = 0x80000000ULL;
        *endAddr = 0xFFFFFFFFULL;
    }
    else
    {
        *ddrType = DEV_SM_DDR_TYPE_LPDDR4X;
        *ddrWidth = 16U;
        *eccEnb = true;
        *mts = 4000U;
        *startAddr = 0x100000000ULL;
        *endAddr = 0x1FFFFFFFFULL;
    }

    /* Return status */
    return SM_ERR_SUCCESS;
}

