/*
** ###################################################################
**
** Copyright 2023-2024 NXP
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** o Redistributions of source code must retain the above copyright notice, this list
**   of conditions and the following disclaimer.
**
** o Redistributions in binary form must reproduce the above copyright notice, this
**   list of conditions and the following disclaimer in the documentation and/or
**   other materials provided with the distribution.
**
** o Neither the name of the copyright holder nor the names of its
**   contributors may be used to endorse or promote products derived from this
**   software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
** ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/* File containing the implementation of the System Control and Management  */
/* Interface (SCMI) fusa protocol.                                          */
/*==========================================================================*/

/* Includes */

#include "rpc_scmi_internal.h"
#include "lmm.h"

/* Local defines */

/* Protocol version */
#define PROTOCOL_VERSION  0x10000U

/* SCMI fusa protocol message IDs and masks */
#define COMMAND_PROTOCOL_VERSION             0x0U
#define COMMAND_PROTOCOL_ATTRIBUTES          0x1U
#define COMMAND_PROTOCOL_MESSAGE_ATTRIBUTES  0x2U
#define COMMAND_FUSA_FEENV_STATE_GET         0x3U
#define COMMAND_FUSA_FEENV_STATE_NOTIFY      0x5U
#define COMMAND_FUSA_SEENV_STATE_GET         0x6U
#define COMMAND_FUSA_SEENV_STATE_SET         0x7U
#define COMMAND_FUSA_FAULT_GET               0x8U
#define COMMAND_FUSA_FAULT_SET               0x9U
#define COMMAND_FUSA_FAULT_GROUP_NOTIFY      0xAU
#define COMMAND_FUSA_SCHECK_EVNTRIG          0xBU
#define COMMAND_FUSA_SCHECK_TEST_EXEC        0xEU
#define COMMAND_NEGOTIATE_PROTOCOL_VERSION   0x10U
#define COMMAND_SUPPORTED_MASK               0x14FEFULL

/* SCMI FuSa F-EENV states */
#define FUSA_FEENV_STATE_INIT             0U
#define FUSA_FEENV_STATE_PRE_SAFETY       1U
#define FUSA_FEENV_STATE_SAFETY_RUNTIME   2U
#define FUSA_FEENV_STATE_SOC_TERMINATING  3U

/* SCMI FuSa S-EENV states */
#define FUSA_SEENV_STATE_DISABLED        0U
#define FUSA_SEENV_STATE_INIT            1U
#define FUSA_SEENV_STATE_SAFETY_READY    2U
#define FUSA_SEENV_STATE_SAFETY_RUNTIME  3U
#define FUSA_SEENV_STATE_TERMINAL        4U

/* SCMI FUSA ID */
#define FUSA_ID_DISCOVER  0xFFFFFFFFU

/* Local macros */

/* SCMI FuSa protocol attributes 1 */
#define FUSA_PROTO_ATTR1_NUM_FAULT(x)     (((x) & 0xFFFFU) << 16U)
#define FUSA_PROTO_ATTR1_NUM_SEENV_ID(x)  (((x) & 0xFFU) << 8U)
#define FUSA_PROTO_ATTR1_NUM_SEENV_LM(x)  (((x) & 0xFFU) << 0U)

/* SCMI FuSa notification flags */
#define FUSA_FEENV_NOTIFY_ENABLE(x)  (((x) & 0x1U) >> 0U)

/* SCMI FuSa fault get state flags */
#define FUSA_FAULT_GET_STATE(x)  (((x) & 0x1U) << 0U)

/* SCMI FuSa fault get state flags */
#define FUSA_FAULT_SET_STATE(x)  (((x) & 0x3U) >> 0U)

/* SCMI FuSa fault event flags */
#define FUSA_FAULT_FLAG_STATE(x)  (((x) & 0x1U) << 0U)

/* Local types */

/* Response type for ProtocolVersion() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Protocol version */
    uint32_t version;
} msg_tfusa0_t;

/* Response type for ProtocolAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Protocol attributes 1 */
    uint32_t attributes1;
    /* Protocol attributes 2 */
    uint32_t attributes2;
} msg_tfusa1_t;

/* Request type for ProtocolMessageAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* message ID of the message */
    uint32_t messageId;
} msg_rfusa2_t;

/* Response type for ProtocolMessageAttributes() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Message attributes */
    uint32_t attributes;
} msg_tfusa2_t;

/* Response type for FusaFeenvStateGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Parameter identifying the safety state of the F-EENV */
    uint32_t feenvState;
    /* Mode selector value as returned by SAF */
    uint32_t mselMode;
} msg_tfusa3_t;

/* Request type for FusaFeenvStateNotify() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Notification flags */
    uint32_t notifyEnable;
} msg_rfusa5_t;

/* Request type for FusaSeenvStateGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Identifier of the S-EENV whose status is requested */
    uint32_t seenvId;
} msg_rfusa6_t;

/* Response type for FusaSeenvStateGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Identifier of the S-EENV whose state is requested */
    uint32_t seenvId;
    /* Identifier of the LM which contains the S-EENV identified by seenvId */
    uint32_t lmId;
    /* Parameter identifying the safety state of the S-EENV */
    uint32_t seenvState;
} msg_tfusa6_t;

/* Request type for FusaSeenvStateSet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Parameter to set the safety state of the S-EENV */
    uint32_t seenvState;
    /* Cookie value last sent by the F-EENV */
    uint32_t pingCookie;
} msg_rfusa7_t;

/* Request type for FusaFaultGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Global fault identifier */
    uint32_t faultId;
} msg_rfusa8_t;

/* Response type for FusaFaultGet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* State of the fault */
    uint32_t flags;
} msg_tfusa8_t;

/* Request type for FusaFaultSet() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Global fault identifier */
    uint32_t faultId;
    /* State of the fault */
    uint32_t flags;
} msg_rfusa9_t;

/* Request type for FusaFaultGroupNotify() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* First global fault identifier to be configured */
    uint32_t faultIdFirst;
    /* Mask of faults to modify */
    uint32_t faultMask;
    /* Fault notification enables */
    uint32_t notifyEnable;
} msg_rfusa10_t;

/* Response type for FusaFaultGroupNotify() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Return status */
    int32_t status;
    /* Return equal to faultIdFirst */
    uint32_t faultIdFirstGet;
    /* Fault notification enabled state */
    uint32_t notifyEnabled;
} msg_tfusa10_t;

/* Request type for FusaScheckTestExec() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* identifier of sCheck target test to be executed */
    uint32_t targetTestId;
} msg_rfusa14_t;

/* Request type for NegotiateProtocolVersion() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* The negotiated protocol version the agent intends to use */
    uint32_t version;
} msg_rfusa16_t;

/* Request type for FusaFeenvStateEvent() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Parameter identifying the requested state of the F-EENV */
    uint32_t feenvState;
    /* Mode selector value as returned by SAF */
    uint32_t mselMode;
} msg_rfusa64_t;

/* Request type for FusaSeenvStateReqEvent() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Random cookie value */
    uint32_t pingCookie;
} msg_rfusa65_t;

/* Request type for FusaFaultEvent() */
typedef struct
{
    /* Header word */
    uint32_t header;
    /* Global fault identifier */
    uint32_t faultId;
    /* Fault state flags */
    uint32_t flags;
} msg_rfusa66_t;

/* Local functions */

static int32_t FusaProtocolVersion(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa0_t *out);
static int32_t FusaProtocolAttributes(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa1_t *out);
static int32_t FusaProtocolMessageAttributes(const scmi_caller_t *caller,
    const msg_rfusa2_t *in, msg_tfusa2_t *out);
static int32_t FusaFeenvStateGet(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa3_t *out);
static int32_t FusaFeenvStateNotify(const scmi_caller_t *caller,
    const msg_rfusa5_t *in, const scmi_msg_status_t *out);
static int32_t FusaSeenvStateGet(const scmi_caller_t *caller,
    const msg_rfusa6_t *in, msg_tfusa6_t *out);
static int32_t FusaSeenvStateSet(const scmi_caller_t *caller,
    const msg_rfusa7_t *in, const scmi_msg_status_t *out);
static int32_t FusaFaultGet(const scmi_caller_t *caller,
    const msg_rfusa8_t *in, msg_tfusa8_t *out);
static int32_t FusaFaultSet(const scmi_caller_t *caller,
    const msg_rfusa9_t *in, const scmi_msg_status_t *out);
static int32_t FusaFaultGroupNotify(const scmi_caller_t *caller,
    const msg_rfusa10_t *in, msg_tfusa10_t *out);
static int32_t FusaScheckEvntrig(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, const scmi_msg_status_t *out);
static int32_t FusaScheckTestExec(const scmi_caller_t *caller,
    const msg_rfusa14_t *in, const scmi_msg_status_t *out);
static int32_t FusaNegotiateProtocolVersion(const scmi_caller_t *caller,
    const msg_rfusa16_t *in, const scmi_msg_status_t *out);
static int32_t FusaFeenvStateEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger);
static int32_t FusaSeenvStateReqEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger);
static int32_t FusaFaultEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger);
static int32_t FusaResetAgentConfig(uint32_t lmId, uint32_t agentId,
    bool permissionsReset);

/*--------------------------------------------------------------------------*/
/* Dispatch SCMI command                                                    */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - messageId: Message ID to dispatch                                      */
/*--------------------------------------------------------------------------*/
int32_t RPC_SCMI_FusaDispatchCommand(scmi_caller_t *caller,
    uint32_t messageId)
{
    int32_t status = SM_ERR_SUCCESS;
    const scmi_msg_t *in = caller->msgCopy;
    scmi_msg_status_t *out = caller->msg;
    uint32_t lenOut = sizeof(scmi_msg_status_t);

    /* Handle standard messages */
    switch (messageId)
    {
        case COMMAND_PROTOCOL_VERSION:
            lenOut = sizeof(msg_tfusa0_t);
            status = FusaProtocolVersion(caller,
                (const scmi_msg_header_t*) in, (msg_tfusa0_t*) out);
            break;
        case COMMAND_PROTOCOL_ATTRIBUTES:
            lenOut = sizeof(msg_tfusa1_t);
            status = FusaProtocolAttributes(caller,
                (const scmi_msg_header_t*) in, (msg_tfusa1_t*) out);
            break;
        case COMMAND_PROTOCOL_MESSAGE_ATTRIBUTES:
            lenOut = sizeof(msg_tfusa2_t);
            status = FusaProtocolMessageAttributes(caller,
                (const msg_rfusa2_t*) in, (msg_tfusa2_t*) out);
            break;
        case COMMAND_FUSA_FEENV_STATE_GET:
            lenOut = sizeof(msg_tfusa3_t);
            status = FusaFeenvStateGet(caller, (const scmi_msg_header_t*) in,
                (msg_tfusa3_t*) out);
            break;
        case COMMAND_FUSA_FEENV_STATE_NOTIFY:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaFeenvStateNotify(caller, (const msg_rfusa5_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_FUSA_SEENV_STATE_GET:
            lenOut = sizeof(msg_tfusa6_t);
            status = FusaSeenvStateGet(caller, (const msg_rfusa6_t*) in,
                (msg_tfusa6_t*) out);
            break;
        case COMMAND_FUSA_SEENV_STATE_SET:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaSeenvStateSet(caller, (const msg_rfusa7_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_FUSA_FAULT_GET:
            lenOut = sizeof(msg_tfusa8_t);
            status = FusaFaultGet(caller, (const msg_rfusa8_t*) in,
                (msg_tfusa8_t*) out);
            break;
        case COMMAND_FUSA_FAULT_SET:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaFaultSet(caller, (const msg_rfusa9_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_FUSA_FAULT_GROUP_NOTIFY:
            lenOut = sizeof(msg_tfusa10_t);
            status = FusaFaultGroupNotify(caller, (const msg_rfusa10_t*) in,
                (msg_tfusa10_t*) out);
            break;
        case COMMAND_FUSA_SCHECK_EVNTRIG:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaScheckEvntrig(caller, (const scmi_msg_header_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_FUSA_SCHECK_TEST_EXEC:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaScheckTestExec(caller, (const msg_rfusa14_t*) in,
                (const scmi_msg_status_t*) out);
            break;
        case COMMAND_NEGOTIATE_PROTOCOL_VERSION:
            lenOut = sizeof(const scmi_msg_status_t);
            status = FusaNegotiateProtocolVersion(caller,
                (const msg_rfusa16_t*) in, (const scmi_msg_status_t*) out);
            break;
        default:
            status = SM_ERR_NOT_SUPPORTED;
            break;
    }

    /* Update length */
    caller->lenMsg = lenOut;

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dispatch SCMI notifications                                              */
/*                                                                          */
/* Parameters:                                                              */
/* - msgId: Message ID to dispatch                                          */
/* - trigger: Trigger data                                                  */
/*--------------------------------------------------------------------------*/
int32_t RPC_SCMI_FusaDispatchNotification(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Handle notifications */
    switch (msgId.messageId)
    {
        case RPC_SCMI_NOTIFY_FUSA_FEENV_STATE_EVENT:
            status = FusaFeenvStateEvent(msgId, trigger);
            break;
        case RPC_SCMI_NOTIFY_FUSA_SEENV_STATE_REQ_EVENT:
            status = FusaSeenvStateReqEvent(msgId, trigger);
            break;
        case RPC_SCMI_NOTIFY_FUSA_FAULT_EVENT:
            status = FusaFaultEvent(msgId, trigger);
            break;
        default:
            status = SM_ERR_NOT_SUPPORTED;
            break;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Dispatch SCMI reset                                                      */
/*                                                                          */
/* Parameters:                                                              */
/* - lmId: LM to reset                                                      */
/* - agentId: Message ID to dispatch                                        */
/* - permissionsReset: True to reset permissions                            */
/*--------------------------------------------------------------------------*/
int32_t RPC_SCMI_FusaDispatchReset(uint32_t lmId, uint32_t agentId,
    bool permissionsReset)
{
    return FusaResetAgentConfig(lmId, agentId, permissionsReset);
}

/*==========================================================================*/
/* Custom Protocol Implementation                                           */
/*==========================================================================*/

/* Local types */

typedef struct
{
    BITARRAY_DEC(faultNotify, SM_NUM_FAULT);
} fusa_info_t;

/* Local variables */

static fusa_info_t s_fusaInfo[SM_SCMI_NUM_AGNT];
static BITARRAY_DEC(stateNotify, SM_NUM_AGENT);

/*--------------------------------------------------------------------------*/
/* Get protocol version                                                     */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - out->version: Protocol version. For this revision of the               */
/*   specification, this value must be 0x10000                              */
/*                                                                          */
/* Process the PROTOCOL_VERSION message. Platform handler for               */
/* SCMI_FusaProtocolVersion().                                              */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaProtocolVersion(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa0_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        /* Return version */
        out->version = PROTOCOL_VERSION;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get protocol attributes                                                  */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - out->attributes1: Protocol attributes 1:                               */
/*   Bits[31:16] Number of Fault sources (this number defines valid range   */
/*   of the fault ID identifiers used in the fault functions)               */
/*   Bits[15:8] Number of S-EENV ID in the system                           */
/*   Bits[7:0] Number of S-EENV LM in the system (not counting the F-EENV   */
/*   itself)                                                                */
/* - out->attributes2: Protocol attributes 2:                               */
/*   Bits[31:0] Reserved, must be zero                                      */
/*                                                                          */
/* Process the PROTOCOL_ATTRIBUTES message. Platform handler for            */
/* SCMI_FusaProtocolAttributes().                                           */
/*                                                                          */
/*  Access macros:                                                          */
/* - FUSA_PROTO_ATTR1_NUM_FAULT() - Number of fault sources                 */
/* - FUSA_PROTO_ATTR1_NUM_SEENV_ID() - Number of S-EENV ID in the system    */
/* - FUSA_PROTO_ATTR1_NUM_SEENV_LM() - Number of S-EENV LM in the system    */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaProtocolAttributes(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa1_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        uint32_t numSeenvLm = 0U;

        /* Get number of S-EENV */
        LMM_SsenvLmNumGet(&numSeenvLm);

        /* Set attributes 1 */
        out->attributes1
            = FUSA_PROTO_ATTR1_NUM_FAULT((uint32_t) SM_NUM_FAULT)
            | FUSA_PROTO_ATTR1_NUM_SEENV_ID((uint32_t) SM_LM_NUM_SEENV)
            | FUSA_PROTO_ATTR1_NUM_SEENV_LM(numSeenvLm);

        /* Attributes 2 always 0 */
        out->attributes2 = 0U;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get protocol message attributes                                          */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->messageId: Message ID of the message                               */
/* - out->attributes: Message attributes. Flags that are associated with a  */
/*   specific function in the protocol.                                     */
/*   In the current version of the specification, this value is always 0    */
/*                                                                          */
/* Process the PROTOCOL_MESSAGE_ATTRIBUTES message. Platform handler for    */
/* SCMI_FusaProtocolMessageAttributes().                                    */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: in case the message is implemented and available to    */
/*   use.                                                                   */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature.                  */
/* - SM_ERR_NOT_FOUND: if the message identified by messageId is invalid    */
/*   or not implemented.                                                    */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaProtocolMessageAttributes(const scmi_caller_t *caller,
    const msg_rfusa2_t *in, msg_tfusa2_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Return data */
    if (status == SM_ERR_SUCCESS)
    {
        uint64_t mask = COMMAND_SUPPORTED_MASK;

        /* Always zero */
        out->attributes = 0U;

        /* Is message supported ? */
        if ((in->messageId >= 64U)
            || (((mask >> in->messageId) & 0x1ULL) == 0ULL))
        {
            status = SM_ERR_NOT_FOUND;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get current FuSa system state                                            */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - out->feenvState: Parameter identifying the safety state of the F-EENV  */
/* - out->mselMode: Mode selector value as returned by SAF                  */
/*                                                                          */
/* Process the FUSA_FEENV_STATE_GET message. Platform handler for           */
/* SCMI_FusaFeenvStateGet(). Requires access greater than or equal to GET.  */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the current F-EENV state is returned successfully.  */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_DENIED: if the calling agent is not allowed to get the          */
/*   F-EENV state.                                                          */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaFeenvStateGet(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, msg_tfusa3_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].fusaPerms
        < SM_SCMI_PERM_GET))
    {
        status = SM_ERR_DENIED;
    }

    /* Get requested info */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        status = LMM_FusaFeenvStateGet(&fusaCaller, &(out->feenvState),
            &(out->mselMode));
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Configure F-EENV notifications                                           */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->notifyEnable: Notification flags:                                  */
/*   Bits[31:1] Reserved, must be zero.                                     */
/*   Bit[0] State change notification:                                      */
/*   Set to 1 to send notification.                                         */
/*   Set to 0 if no notification                                            */
/*                                                                          */
/* Process the FUSA_FEENV_STATE_NOTIFY message. Platform handler for        */
/* SCMI_FusaFeenvStateNotify(). Requires access greater than or equal to    */
/* NOTIFY.                                                                  */
/*                                                                          */
/*  Access macros:                                                          */
/* - FUSA_FEENV_NOTIFY_ENABLE() - Enable notifications for F-EENV state     */
/*   change                                                                 */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the notification state successfully updated.        */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_DENIED: if the calling agent is not permitted to request the    */
/*   notification.                                                          */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaFeenvStateNotify(const scmi_caller_t *caller,
    const msg_rfusa5_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].fusaPerms
        < SM_SCMI_PERM_NOTIFY))
    {
        status = SM_ERR_DENIED;
    }

    /* Record notification enable */
    if (status == SM_ERR_SUCCESS)
    {
        if (FUSA_FEENV_NOTIFY_ENABLE(in->notifyEnable) != 0U)
        {
            BITARRAY_SET(stateNotify, caller->agentId);
        }
        else
        {
            BITARRAY_CLR(stateNotify, caller->agentId);
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get S-EENV state                                                         */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->seenvId: Identifier of the S-EENV whose status is requested        */
/* - out->seenvId: Identifier of the S-EENV whose state is requested. This  */
/*   field is:                                                              */
/*   - populated with the S-EENV ID of the calling agent, when the \a       */
/*   seenvId parameter passed via the function is 0xFFFFFFFF.               */
/*   - identical to the seenvId field passed via the calling                */
/*   parameters, in all other cases                                         */
/* - out->lmId: Identifier of the LM which contains the S-EENV identified   */
/*   by seenvId                                                             */
/* - out->seenvState: Parameter identifying the safety state of the S-EENV  */
/*                                                                          */
/* Process the FUSA_SEENV_STATE_GET message. Platform handler for           */
/* SCMI_FusaSeenvStateGet().                                                */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the S-EENV state is returned successfully.          */
/* - SM_ERR_NOT_FOUND: if seenvId is out of range or not an S-EENV if       */
/*   self identifying.                                                      */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaSeenvStateGet(const scmi_caller_t *caller,
    const msg_rfusa6_t *in, msg_tfusa6_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    lmm_fusa_id_t target;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Lookup target S-EENV info */
    if (status == SM_ERR_SUCCESS)
    {
        /* Fill in target S-EENV info */
        if (in->seenvId == FUSA_ID_DISCOVER)
        {
            target.seenvId = caller->seenvId - 1U;
            target.lmId = caller->lmId;
        }
        else
        {
            target.seenvId = in->seenvId;
            target.lmId = 0U;

            /* Find target LM */
            for (uint32_t agent = 0U; agent < SM_SCMI_NUM_AGNT; agent++)
            {
                if ((target.seenvId + 1U) ==
                    (uint32_t) g_scmiAgentConfig[agent].seenvId)
                {
                    target.lmId = g_scmiConfig[g_scmiAgentConfig[
                        agent].scmiInst].lmId;
                    break;
                }
            }

            /* Check found */
            if (target.lmId == 0U)
            {
                status = SM_ERR_NOT_FOUND;
            }
        }
    }

    /* Get requested info */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        /* Call to get state */
        status = LMM_FusaSeenvStateGet(&fusaCaller, &target,
            &(out->seenvState));
    }

    /* Return results */
    if (status == SM_ERR_SUCCESS)
    {
        out->seenvId = target.seenvId;
        out->lmId= target.lmId;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Set S-EENV state                                                         */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->seenvState: Parameter to set the safety state of the S-EENV        */
/* - in->pingCookie: Cookie value last sent by the F-EENV                   */
/*                                                                          */
/* Process the FUSA_SEENV_STATE_SET message. Platform handler for           */
/* SCMI_FusaSeenvStateSet().                                                */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the S-EENV state is set successfully.               */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_INVALID_PARAMETERS: if the requested state is invalid.          */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaSeenvStateSet(const scmi_caller_t *caller,
    const msg_rfusa7_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Change system state */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        status = LMM_FusaSeenvStateSet(&fusaCaller, in->seenvState,
            in->pingCookie);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Get fault state                                                          */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->faultId: Global fault identifier                                   */
/* - out->flags: State of the fault:                                        */
/*   Bits[31:1] Reserved, must be zero.                                     */
/*   Bit[0] Fault state.                                                    */
/*   Set to 1 if the fault is set.                                          */
/*   Set to 0 if the fault is cleared                                       */
/*                                                                          */
/* Process the FUSA_FAULT_GET message. Platform handler for                 */
/* SCMI_FusaFaultGet(). Requires access greater than or equal to GET.       */
/*                                                                          */
/*  Access macros:                                                          */
/* - FUSA_FAULT_GET_STATE() - Fault state                                   */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the fault state is returned successfully.           */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_NOT_FOUND: if faultId is invalid.                               */
/* - SM_ERR_DENIED: if the calling agent is not permitted to get the        */
/*   state.                                                                 */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaFaultGet(const scmi_caller_t *caller,
    const msg_rfusa8_t *in, msg_tfusa8_t *out)
{
    int32_t status = SM_ERR_SUCCESS;
    bool state = false;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check fault */
    if ((status == SM_ERR_SUCCESS)
        && (((int32_t) in->faultId) >=  ((int32_t) SM_NUM_FAULT)))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].faultPerms[in->faultId]
        < SM_SCMI_PERM_GET))
    {
        status = SM_ERR_DENIED;
    }

    /* Get fault state */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        status = LMM_FusaFaultGet(&fusaCaller, in->faultId,
            &state);
    }

    /* Return results */
    if (status == SM_ERR_SUCCESS)
    {
        out->flags = FUSA_FAULT_GET_STATE(state ? 1UL : 0UL);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Set fault state                                                          */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->faultId: Global fault identifier                                   */
/* - in->flags: State of the fault:                                         */
/*   Bits[31:2] Reserved, must be zero.                                     */
/*   Bit[1:0] Fault state.                                                  */
/*   Set to 0 to set the fault.                                             */
/*   Set to 1 to clear the fault.                                           */
/*   Set to 2 to report the fault is recovered.                             */
/*   Set to 3 to report the fault could not be reovered                     */
/*                                                                          */
/* Process the FUSA_FAULT_SET message. Platform handler for                 */
/* SCMI_FusaFaultSet(). Requires access greater than or equal to            */
/* EXCLUSIVE.                                                               */
/*                                                                          */
/*  Access macros:                                                          */
/* - FUSA_FAULT_SET_STATE() - Fault state                                   */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the fault state is set successfully.                */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_NOT_FOUND: if faultId is invalid.                               */
/* - SM_ERR_DENIED: if the calling agent is not permitted to set the        */
/*   state.                                                                 */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaFaultSet(const scmi_caller_t *caller,
    const msg_rfusa9_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check fault */
    if ((status == SM_ERR_SUCCESS)
        && (((int32_t) in->faultId) >=  ((int32_t) SM_NUM_FAULT)))
    {
        status = SM_ERR_NOT_FOUND;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].faultPerms[in->faultId]
        < SM_SCMI_PERM_EXCLUSIVE))
    {
        status = SM_ERR_DENIED;
    }

    /* Change system state */
    if (status == SM_ERR_SUCCESS)
    {
        bool set = FUSA_FAULT_SET_STATE(in->flags) != 0U;
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        /* Update state */
        status = LMM_FusaFaultSet(&fusaCaller, in->faultId, set);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Enable/disable fault notifications                                       */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->faultIdFirst: First global fault identifier to be configured       */
/* - in->faultMask: Mask of faults to modify.                               */
/*   Set to 1 to modify the fault notification.                             */
/*   Set to 0 to leave unmodified                                           */
/* - in->notifyEnable: Fault notification enables.                          */
/*   Set to 1 to enable a fault notification.                               */
/*   Set to 0 to disable a fault notification.                              */
/*   Only bits also set to 1 in faultMask are modified                      */
/* - out->faultIdFirstGet: Return equal to faultIdFirst                     */
/* - out->notifyEnabled: Fault notification enabled state.                  */
/*   Set to 1 indicates the fault notification is enabled.                  */
/*   Set to 0 indicates the fault notification is disabled                  */
/*                                                                          */
/* Process the FUSA_FAULT_GROUP_NOTIFY message. Platform handler for        */
/* SCMI_FusaFaultGroupNotify(). Requires access greater than or equal to    */
/* NOTIFY.                                                                  */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the fault notification is updated successfully for  */
/*   some faults.                                                           */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_NOT_FOUND: if faultIdFirst is invalid.                          */
/* - SM_ERR_DENIED: if the calling agent is not permitted to modify any     */
/*   of the requested notifications.                                        */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaFaultGroupNotify(const scmi_caller_t *caller,
    const msg_rfusa10_t *in, msg_tfusa10_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check fault */
    if ((status == SM_ERR_SUCCESS)
        && (((int32_t) in->faultIdFirst) >=  ((int32_t) SM_NUM_FAULT)))
    {
        status = SM_ERR_NOT_FOUND;
    }

    if (status == SM_ERR_SUCCESS)
    {
        bool found = false;

        /* Nothing enabled */
        out->notifyEnabled = 0U;
        out->faultIdFirstGet = in->faultIdFirst;

        /* Loop over faults */
        for (uint32_t idx = 0U; idx < 32U; idx++)
        {
            uint32_t agentId = caller->agentId;
            uint32_t faultId = idx + in->faultIdFirst;

            /* Check fault */
            if (((int32_t) faultId) >=  ((int32_t) SM_NUM_FAULT))
            {
                break;
            }

            /* Check mask */
            if ((in->faultMask & BIT32(idx)) != 0U)
            {
                /* Check permissions */
                if (g_scmiAgentConfig[caller->agentId].faultPerms[faultId]
                    < SM_SCMI_PERM_NOTIFY)
                {
                    status = SM_ERR_DENIED;
                }
                else
                {
                    /* Record in notify bit array */
                    if ((in->notifyEnable & BIT32(idx)) != 0U)
                    {
                        BITARRAY_SET(s_fusaInfo[agentId].faultNotify,
                            faultId);
                    }
                    else
                    {
                        BITARRAY_CLR(s_fusaInfo[agentId].faultNotify,
                            faultId);
                    }

                    /* One updated */
                    found = true;
                }
            }

            /* Update notify enabled */
            if (BITARRAY_GET(s_fusaInfo[agentId].faultNotify, faultId)
                != 0U)
            {
                out->notifyEnabled |= BIT32(idx);
            }
        }

        /* One found then no error */
        if (found)
        {
            status = SM_ERR_SUCCESS;
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Temporarily disable fault handling                                       */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/*                                                                          */
/* Process the FUSA_SCHECK_EVNTRIG message. Platform handler for            */
/* SCMI_FusaScheckEvntrig().                                                */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if fault handling disabled for the caller.             */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_DENIED: if the calling agent is not permitted to request        */
/*   this command.                                                          */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaScheckEvntrig(const scmi_caller_t *caller,
    const scmi_msg_header_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].fusaPerms
        < SM_SCMI_PERM_EXCLUSIVE))
    {
        status = SM_ERR_DENIED;
    }

    /* Report S-check event trigger */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        status = LMM_FusaScheckEvntrig(&fusaCaller);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Request manually-triggered execution of sCheck test                      */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->targetTestId: Identifier of sCheck target test to be executed      */
/*                                                                          */
/* Process the FUSA_SCHECK_TEST_EXEC message. Platform handler for          */
/* SCMI_FusaScheckTestExec(). Requires access greater than or equal to      */
/* SET.                                                                     */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if fault handling disabled for the caller.             */
/* - SM_ERR_NOT_SUPPORTED: if FuSa not an enabled feature or the caller     */
/*   is not an S-EENV.                                                      */
/* - SM_ERR_DENIED: if the calling agent is not permitted to request an     */
/*   sCheck.                                                                */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaScheckTestExec(const scmi_caller_t *caller,
    const msg_rfusa14_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check call from S-EENV */
    if ((status == SM_ERR_SUCCESS)
        && (caller->safeType != LMM_SAFE_TYPE_SEENV))
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Check permissions */
    if ((status == SM_ERR_SUCCESS)
        && (g_scmiAgentConfig[caller->agentId].fusaPerms
        < SM_SCMI_PERM_EXCLUSIVE))
    {
        status = SM_ERR_DENIED;
    }

    /* Request S-check */
    if (status == SM_ERR_SUCCESS)
    {
        lmm_fusa_id_t fusaCaller =
        {
            .seenvId = caller->seenvId,
            .lmId = caller->lmId
        };

        status = LMM_FusaScheckTestExec(&fusaCaller, in->targetTestId);
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Negotiate the protocol version                                           */
/*                                                                          */
/* Parameters:                                                              */
/* - caller: Caller info                                                    */
/* - in->version: The negotiated protocol version the agent intends to use  */
/*                                                                          */
/* Process the NEGOTIATE_PROTOCOL_VERSION message. Platform handler for     */
/* SCMI_FusaNegotiateProtocolVersion().                                     */
/*                                                                          */
/* Return errors:                                                           */
/* - SM_ERR_SUCCESS: if the negotiated protocol version is supported by     */
/*   the platform. All commands, responses, and notifications post          */
/*   successful return of this command must comply with the negotiated      */
/*   version.                                                               */
/* - SM_ERR_NOT_SUPPORTED: if the protocol version is not supported.        */
/* - SM_ERR_PROTOCOL_ERROR: if the incoming payload is too small.           */
/*--------------------------------------------------------------------------*/
static int32_t FusaNegotiateProtocolVersion(const scmi_caller_t *caller,
    const msg_rfusa16_t *in, const scmi_msg_status_t *out)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Check request length */
    if (caller->lenCopy < sizeof(*in))
    {
        status = SM_ERR_PROTOCOL_ERROR;
    }

    /* Check major version */
    if ((status == SM_ERR_SUCCESS) && (SCMI_VER_MAJOR(in->version)
        == SCMI_VER_MAJOR(PROTOCOL_VERSION)))
    {
        /* Check minor version */
        if (SCMI_VER_MINOR(in->version) > SCMI_VER_MINOR(PROTOCOL_VERSION))
        {
            status = SM_ERR_NOT_SUPPORTED;
        }
    }
    else
    {
        status = SM_ERR_NOT_SUPPORTED;
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Send fusa feenv state event                                              */
/*                                                                          */
/* Parameters:                                                              */
/* - msgId: Message ID to dispatch                                          */
/* - trigger: Trigger data                                                  */
/*--------------------------------------------------------------------------*/
static int32_t FusaFeenvStateEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Loop over all agents */
    for (uint32_t dstAgent = 0U; dstAgent < SM_SCMI_NUM_AGNT; dstAgent++)
    {
        /* Agent belong to instance? */
        if ((g_scmiAgentConfig[dstAgent].scmiInst == trigger->rpcInst)
            && (BITARRAY_GET(stateNotify, dstAgent) != 0U))
        {
            msg_rfusa64_t out;

            /* Fill in data */
            out.feenvState = trigger->parm[0];
            out.mselMode = trigger->parm[1];

            /* Check if queue is full */
            if (!RPC_SCMI_P2aTxQFull(dstAgent, sizeof(out),
                SCMI_PRIORITY_Q))
            {
                /* Queue notification */
                RPC_SCMI_P2aTxQ(dstAgent, msgId, (uint32_t*) &out,
                    sizeof(out), SCMI_PRIORITY_Q);
            }
            else
            {
                status = SM_ERR_BUSY;
            }
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Send fusa seenv state req event                                          */
/*                                                                          */
/* Parameters:                                                              */
/* - msgId: Message ID to dispatch                                          */
/* - trigger: Trigger data                                                  */
/*--------------------------------------------------------------------------*/
static int32_t FusaSeenvStateReqEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Loop over all agents */
    for (uint32_t dstAgent = 0U; dstAgent < SM_SCMI_NUM_AGNT; dstAgent++)
    {
        /* Agent belong to instance? */
        if ((g_scmiAgentConfig[dstAgent].scmiInst == trigger->rpcInst)
            && (BITARRAY_GET(stateNotify, dstAgent) != 0U))
        {
            msg_rfusa65_t out;

            /* Fill in data */
            out.pingCookie = trigger->parm[0];

            /* Check if queue is full */
            if (!RPC_SCMI_P2aTxQFull(dstAgent, sizeof(out),
                SCMI_PRIORITY_Q))
            {
                /* Queue notification */
                RPC_SCMI_P2aTxQ(dstAgent, msgId, (uint32_t*) &out,
                    sizeof(out), SCMI_PRIORITY_Q);
            }
            else
            {
                status = SM_ERR_BUSY;
            }
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Send fusa fault event                                                    */
/*                                                                          */
/* Parameters:                                                              */
/* - msgId: Message ID to dispatch                                          */
/* - trigger: Trigger data                                                  */
/*--------------------------------------------------------------------------*/
static int32_t FusaFaultEvent(scmi_msg_id_t msgId,
    const lmm_rpc_trigger_t *trigger)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Loop over all agents */
    for (uint32_t dstAgent = 0U; dstAgent < SM_SCMI_NUM_AGNT; dstAgent++)
    {
        uint32_t fault = trigger->parm[0];

        /* Agent belong to instance? */
        if ((g_scmiAgentConfig[dstAgent].scmiInst == trigger->rpcInst)
            && (BITARRAY_GET(s_fusaInfo[dstAgent].faultNotify, fault)
            != 0U))
        {
            msg_rfusa66_t out;

            /* Fill in data */
            out.faultId = fault;
            out.flags = trigger->parm[1];

            /* Check if queue is full */
            if (!RPC_SCMI_P2aTxQFull(dstAgent, sizeof(out),
                SCMI_PRIORITY_Q))
            {
                /* Queue notification */
                RPC_SCMI_P2aTxQ(dstAgent, msgId, (uint32_t*) &out,
                    sizeof(out), SCMI_PRIORITY_Q);
            }
            else
            {
                status = SM_ERR_BUSY;
            }
        }
    }

    /* Return status */
    return status;
}

/*--------------------------------------------------------------------------*/
/* Reset agent configuration                                                */
/*                                                                          */
/* Parameters:                                                              */
/* - lmId: LM to reset                                                      */
/* - agentId: Message ID to dispatch                                        */
/* - permissionsReset: True to reset permissions                            */
/*--------------------------------------------------------------------------*/
static int32_t FusaResetAgentConfig(uint32_t lmId, uint32_t agentId,
    bool permissionsReset)
{
    int32_t status = SM_ERR_SUCCESS;

    /* Disable state notifications */
    BITARRAY_CLR(stateNotify, agentId);

    /* Disable fault notifications */
    for (uint32_t idx = 0U; idx < BITARRAY_SIZE(SM_NUM_FAULT); idx++)
    {
        s_fusaInfo[agentId].faultNotify[idx] = 0U;
    }

    /* Return status */
    return status;
}

