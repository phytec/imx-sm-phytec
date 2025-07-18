Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2025q2) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q3 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2025q2) and this release (imx_sm_2025q3).

New Feature {#RN_CL_NEW}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-263](https://jira.sw.nxp.com/projects/SM/issues/SM-263) | Add monitor delay command [[detail]](@ref RN_DETAIL_SM_263) |   | Y | Y | Y | Y |
| [SM-269](https://jira.sw.nxp.com/projects/SM/issues/SM-269) | Add device error log [[detail]](@ref RN_DETAIL_SM_269) |   | Y | Y | Y | Y |
| [SM-275](https://jira.sw.nxp.com/projects/SM/issues/SM-275) | Support putting DDR into retention while Ethernet Switch and M33S is active |   | | | | Y |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-250](https://jira.sw.nxp.com/projects/SM/issues/SM-250) | Save/restore A55 TMPSNS thresholds across mix resets  [[detail]](@ref RN_DETAIL_SM_250) |   | Y | Y | Y | Y |
| [SM-252](https://jira.sw.nxp.com/projects/SM/issues/SM-252) | Coding standard fixes and test improvements |   | Y | Y | Y | Y |
| [SM-268](https://jira.sw.nxp.com/projects/SM/issues/SM-268) | Add CGC parent nodes to discoverable clock tree attributes [[detail]](@ref RN_DETAIL_SM_268) |   | Y | Y | Y | Y |
| [SM-270](https://jira.sw.nxp.com/projects/SM/issues/SM-270) | RTC PCA2131 miscellaneous fixes [[detail]](@ref RN_DETAIL_SM_270) |   | Y | Y | Y | Y |
| [SM-277](https://jira.sw.nxp.com/projects/SM/issues/SM-277) | Make ports to various SoC more common [[detail]](@ref RN_DETAIL_SM_277) |   | Y | Y | Y | Y |
| [SM-278](https://jira.sw.nxp.com/projects/SM/issues/SM-278) | Create imx943evk cfg for NETC share |   | | | | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-265](https://jira.sw.nxp.com/projects/SM/issues/SM-265) | Some perf controlled clocks assigned to agents as clock controls [[detail]](@ref RN_DETAIL_SM_265) |   | Y | Y | Y | Y |
| [SM-274](https://jira.sw.nxp.com/projects/SM/issues/SM-274) | A55 CORECLK mapping to ARM_PLL_DFS is incorrect on MX94 [[detail]](@ref RN_DETAIL_SM_274) |   | | | | Y |
| [SM-276](https://jira.sw.nxp.com/projects/SM/issues/SM-276) | Monitor shows ARM voltage always on [[detail]](@ref RN_DETAIL_SM_276) |   | Y | Y | Y | |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-237](https://jira.sw.nxp.com/projects/SM/issues/SM-237) | SM 2025Q3 documentation updates |   | Y | Y | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-250: Save/restore A55 TMPSNS thresholds across mix resets  {#RN_DETAIL_SM_250}
----------

Updated SM to save/restore temp sensor thresholds across sensor power down (e.g. A55 mix powered off during suspend).

SM-263: Add monitor delay command {#RN_DETAIL_SM_263}
----------

Added a new delay command to the monitor. Used for test scripting. Takes one argument, milliseconds to delay. If positive, interrupts are enabled during the delay, and if negative interrupts are disabled during the delay.

SM-265: Some perf controlled clocks assigned to agents as clock controls {#RN_DETAIL_SM_265}
----------

Reviewed clocks managed via the performance protocol. Updated the clock list for SM in all cfg files to show SM as the owner of those clocks. Modified the configtool to print a warning if any LMs are given access to those clocks via the clock protocol. Removed access to some clocks (A55 clocks, M7 clock, and ISI clock) from the AP agents as those should be controlled only via the performance protocol.

SM-268: Add CGC parent nodes to discoverable clock tree attributes {#RN_DETAIL_SM_268}
----------

CGC clock nodes have a single parent that should be discoverable by traversing the SCMI clock attributes.  SM was updated to return the respective parent node when using SCMI to query for possible parents of CGC nodes.

SM-269: Add device error log {#RN_DETAIL_SM_269}
----------

Added error log word where each bit is an error flag. These are set during init of the SM if an error occurs but can't be reported and reboot is not the best response. Can be displayed with the monitor err/syslog commands. Can be retrieved as part of the syslog.

Bit flags are device specific but current definition for all is:

    Bit0: DEV_SM_ERR_INITCLOCKS - BOARD_InitClocks() error
    Bit1: DEV_SM_ERR_INITCONSOLE - BOARD_InitDebugConsole() error
    Bit2: DEV_SM_ERR_INITTIMERS - BOARD_InitTimers() error
    Bit3: DEV_SM_ERR_INITSERIAL - BOARD_InitSerialBus() error


SM-270: RTC PCA2131 miscellaneous fixes {#RN_DETAIL_SM_270}
----------

Made miscellaneous changes to PCA2131 RTC code to:
 - Update the power management mode (PWRMNG[2:0]) in PCA2131_PowerModeSet() only when it changes.
 - Update the board code to fix the issue where the battery status is not displayed correctly during the first read.
 - Remove unnecessary checks from the iMX943 EVK board code.

SM-274: A55 CORECLK mapping to ARM_PLL_DFS is incorrect on MX94 {#RN_DETAIL_SM_274}
----------

The SM mappings for ARM_PLL_DFS[2:1] to A55 CORECLK[3:1] have been updated to reflect MX94 SoC connections.  The possible parents for a55c1_gpr_sel, a55c2_gpr_sel, and a55c3_gpr_sel have been updated accordingly.

Note that SM configures ARM_PLL_DFS[2:0] to the same frequency for A55 CPUs, so there is no impact to CPU performance levels related to updating these mappings.

SM-276: Monitor shows ARM voltage always on {#RN_DETAIL_SM_276}
----------

Fixed issue in the PF09 driver with reading GPIO state.

SM-277: Make ports to various SoC more common {#RN_DETAIL_SM_277}
----------

Changes to align headers/port between i.MX95 and i.MX94. Some changes may affect customer board ports:
 - Renamed LPCAC_PC to M33_CACHE_CTRLPC
 - Renamed LPCAC_PS to M33_CACHE_CTRLPS

