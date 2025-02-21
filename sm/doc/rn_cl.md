Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2025q1_er0) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q1 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2025q1_er0) and this release (imx_sm_2025q1_er1).

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-222](https://jira.sw.nxp.com/projects/SM/issues/SM-222) | Give SM access to SEMA41 in the mx94alt config file [[detail]](@ref RN_DETAIL_SM_222) |   | | | Y |
| [SM-228](https://jira.sw.nxp.com/projects/SM/issues/SM-228) | Support MUX8/9/10 for pin mux configuration [[detail]](@ref RN_DETAIL_SM_228) |   | | | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-225](https://jira.sw.nxp.com/projects/SM/issues/SM-225) | Implement SWA for ERR052682 (V2X clocking requirements during WAKEUPMIX power cycle) [[detail]](@ref RN_DETAIL_SM_225) |   | | | Y |
| [SM-227](https://jira.sw.nxp.com/projects/SM/issues/SM-227) | Enable PF09 LDO3 in RUN mode to avoid leakage [[detail]](@ref RN_DETAIL_SM_227) |   | Y | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-222: Give SM access to SEMA41 in the mx94alt config file {#RN_DETAIL_SM_222}
----------

In the mx94alt config file, gave SM access to the SEMA41 module. This is done only to allow KSDK testing on SEMA41. The SM does not need access to this module for normal operation. Customers should not make this change to their config files.

SM-225: Implement SWA for ERR052682 (V2X clocking requirements during WAKEUPMIX power cycle) {#RN_DETAIL_SM_225}
----------

The software workaround for ERR052682 has been implemented to avoid V2X access issues after a power cycle of the WAKEUPMIX.  The workaround temporarily sources V2X_PK_CLK_ROOT from OSC_24M during the WAKEUMIX power up.

SM-227: Enable PF09 LDO3 in RUN mode to avoid leakage {#RN_DETAIL_SM_227}
----------

Updated board port code to change the LDO3 configuration. Customers need to make a similar change to their board ports.

SM-228: Support MUX8/9/10 for pin mux configuration {#RN_DETAIL_SM_228}
----------

On i.MX94, there is additional pin multiplexing outside of the standard IOMUXC module. Code was added to allow programming of this multiplexing. A new pin ctrl vendor type SCMI_PINCTRL_TYPE_EXT (196) has been added. This type takes a parameter with the lower 4-bits as the 4-bits (ovr+sel) to write in the appropriate WAKEUPMIX BLK CTRL register. When a client sends a message to configure a pin it can send two additional words (type & value). The standard mux parameter also needs to be sent to indicate the GPIO mux option for the pin as this external mux feeds into the GPIO mux input of the IOMUXC for that pin.

Two new misc. controls have been added. One for the XBAR DIR (control 9) which takes two words and one for the XBAR sync (control 10) that takes 4 words.

