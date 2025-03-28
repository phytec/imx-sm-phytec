/*
** ###################################################################
**
**     Copyright 2023-2024 NXP
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
/* File containing the implementation of the common access functions.       */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "dev_sm.h"
#include "lmm.h"
#include <sys/time.h>

/* Local defines */

/* Local types */

/* Local variables */

/* Global variables */

dev_sm_syslog_t g_syslog;

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Get silicon info                                                         */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SiInfoGet(uint32_t *deviceId, uint32_t *siRev,
    uint32_t *partNum, string *siNameAddr)
{
    int32_t status = SM_ERR_SUCCESS;
    static string siName = "Simulation";

    /* Return initial data */
    *deviceId = 0U;
    *siRev = 0U;
    *partNum = 0U;
    *siNameAddr = siName;

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    /* Return result */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get the syslog                                                           */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SyslogGet(uint32_t flags, const dev_sm_syslog_t **syslog,
    uint32_t *len)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Return data */
    *syslog = &g_syslog;
    *len = sizeof(dev_sm_syslog_t);

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    /* Return result */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dump the syslog                                                          */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_SyslogDump(uint32_t flags)
{
    int32_t status;
    const dev_sm_syslog_t *syslog;
    uint32_t len;

    /* Get data */
    status = DEV_SM_SyslogGet(flags, &syslog, &len);

    if (status == SM_ERR_SUCCESS)
    {
        printf("Sys sleep mode  = %u\n", syslog->sysSleepMode);
        printf("Sys sleep flags = 0x%08X\n", syslog->sysSleepFlags);
    }

    SM_TEST_MODE_ERR(SM_TEST_MODE_DEV_LVL1, SM_ERR_TEST)

    /* Return result */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get time in microseconds                                                 */
/*--------------------------------------------------------------------------*/
uint64_t DEV_SM_Usec64Get(void)
{
    struct timeval tv = { 0 };
    int64_t tm;

    /* Get time */
    (void) gettimeofday(&tv, NULL);

    /* Convert to microseconds */
    tm = (tv.tv_sec * 1000000LL) + tv.tv_usec;

    return (uint64_t) tm;
}

/*--------------------------------------------------------------------------*/
/* Dump device errors                                                       */
/*--------------------------------------------------------------------------*/
void DEV_SM_ErrorDump(void)
{
}

/*--------------------------------------------------------------------------*/
/* Get max string length in array                                           */
/*--------------------------------------------------------------------------*/
void DEV_SM_MaxStringGet(int32_t *len, int32_t *maxLen,
    string const *name, uint32_t sz)
{
    /* Length requested? */
    if (len != NULL)
    {
        /* Already known? */
        if (*maxLen == 0)
        {
            /* Loop over array */
            for (uint32_t idx = 0U; idx < sz; idx++)
            {
                /* Get max len */
                *maxLen = MAX(*maxLen, (int32_t) DEV_SM_StrLen(name[idx]));
            }
        }

        /* Return result */
        *len = MAX(*len, *maxLen);
    }
}

/*--------------------------------------------------------------------------*/
/* Trigger software interrupt                                               */
/*--------------------------------------------------------------------------*/
void SWI_Trigger(void)
{
    LMM_Handler();
}

/*--------------------------------------------------------------------------*/
/* Get length of a string                                                   */
/*--------------------------------------------------------------------------*/
int32_t DEV_SM_StrLen(string str)
{
    const char *p = str;
    int32_t len = 0;

    /* Loop over string */
    while (*p != '\0')
    {
        len++;
        p++;
    }

    /* Return result */
    return len;
}

