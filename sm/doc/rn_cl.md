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
| [SM-275](https://jira.sw.nxp.com/projects/SM/issues/SM-275) | Add support for LP compute mode during system sleep [[detail]](@ref RN_DETAIL_SM_275) |   | Y | Y | Y | Y |
| [SM-282](https://jira.sw.nxp.com/projects/SM/issues/SM-282) | Add SCMI message to get DDR info [[detail]](@ref RN_DETAIL_SM_282) |   | Y | Y | Y | Y |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-250](https://jira.sw.nxp.com/projects/SM/issues/SM-250) | Save/restore A55 TMPSNS thresholds across mix resets  [[detail]](@ref RN_DETAIL_SM_250) |   | Y | Y | Y | Y |
| [SM-252](https://jira.sw.nxp.com/projects/SM/issues/SM-252) | Coding standard fixes and test improvements [[detail]](@ref RN_DETAIL_SM_252) |   | Y | Y | Y | Y |
| [SM-268](https://jira.sw.nxp.com/projects/SM/issues/SM-268) | Add CGC parent nodes to discoverable clock tree attributes [[detail]](@ref RN_DETAIL_SM_268) |   | Y | Y | Y | Y |
| [SM-270](https://jira.sw.nxp.com/projects/SM/issues/SM-270) | RTC PCA2131 miscellaneous fixes [[detail]](@ref RN_DETAIL_SM_270) |   | Y | Y | Y | Y |
| [SM-277](https://jira.sw.nxp.com/projects/SM/issues/SM-277) | Make ports to various SoC more common [[detail]](@ref RN_DETAIL_SM_277) |   | Y | Y | Y | Y |
| [SM-278](https://jira.sw.nxp.com/projects/SM/issues/SM-278) | Create new config file to demonstrate NETC sharing [[detail]](@ref RN_DETAIL_SM_278) |   | | | | Y |
| [SM-279](https://jira.sw.nxp.com/projects/SM/issues/SM-279) | Support M33S DDR target boot [[detail]](@ref RN_DETAIL_SM_279) |   | | | | Y |
| [SM-284](https://jira.sw.nxp.com/projects/SM/issues/SM-284) | Give M33S permission to PERF domain [[detail]](@ref RN_DETAIL_SM_284) |   | | | | Y |
| [SM-292](https://jira.sw.nxp.com/projects/SM/issues/SM-292) | Move DDR RxReplica pathPhase initialization to OEI [[detail]](@ref RN_DETAIL_SM_292) |   | Y | Y | Y | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-265](https://jira.sw.nxp.com/projects/SM/issues/SM-265) | Some perf controlled clocks assigned to agents as clock controls [[detail]](@ref RN_DETAIL_SM_265) |   | Y | Y | Y | Y |
| [SM-274](https://jira.sw.nxp.com/projects/SM/issues/SM-274) | A55 CORECLK mapping to ARM_PLL_DFS is incorrect on MX94 [[detail]](@ref RN_DETAIL_SM_274) |   | | | | Y |
| [SM-276](https://jira.sw.nxp.com/projects/SM/issues/SM-276) | Monitor shows ARM voltage always on [[detail]](@ref RN_DETAIL_SM_276) |   | Y | Y | Y | |
| [SM-281](https://jira.sw.nxp.com/projects/SM/issues/SM-281) | Incorrect rate returned for uninitialized DFS clock nodes [[detail]](@ref RN_DETAIL_SM_281) |   | Y | Y | Y | Y |
| [SM-283](https://jira.sw.nxp.com/projects/SM/issues/SM-283) | BBNSM GPR use conflict between board port and cfg usage [[detail]](@ref RN_DETAIL_SM_283) |   | Y | Y | Y | Y |
| [SM-288](https://jira.sw.nxp.com/projects/SM/issues/SM-288) | System unable to resume when both console and CAN are enabled as wakeups [[detail]](@ref RN_DETAIL_SM_288) |   | Y | Y | Y | Y |
| [SM-289](https://jira.sw.nxp.com/projects/SM/issues/SM-289) | DATA definition for AP secure in default config files allows non-secure access [[detail]](@ref RN_DETAIL_SM_289) |   | Y | Y | Y | Y |
| [SM-290](https://jira.sw.nxp.com/projects/SM/issues/SM-290) | CPU_ResetVectorSet() does not correctly handle addresses larger than 32-bit [[detail]](@ref RN_DETAIL_SM_290) |   | Y | Y | Y | Y |
| [SM-291](https://jira.sw.nxp.com/projects/SM/issues/SM-291) | PCA2131 power mode configured even when call is for other RTC [[detail]](@ref RN_DETAIL_SM_291) |   | Y | Y | Y | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-285](https://jira.sw.nxp.com/projects/SM/issues/SM-285) | Remove PMRO default val for i.MX95 [[detail]](@ref RN_DETAIL_SM_285) |   | Y | Y | Y | |

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

SM-252: Coding standard fixes and test improvements {#RN_DETAIL_SM_252}
----------

Fixed the ISO21434 compliance issues (Cert-Int30C, Cert-Arr30C, Cert-Str31C, Cert-Int32C) in the SM code base. Some of these fixes are in NXP EVK board port code. Customers should make similar fixes to their board port code.

SM-263: Add monitor delay command {#RN_DETAIL_SM_263}
----------

Added a new delay command to the monitor. Used for test scripting. Takes one argument, milliseconds to delay. If positive, interrupts are enabled during the delay, and if negative interrupts are disabled during the delay.

SM-265: Some perf controlled clocks assigned to agents as clock controls {#RN_DETAIL_SM_265}
----------

Reviewed clocks managed via the performance protocol. Updated the clock list for SM in all cfg files to show SM as the owner of those clocks. Modified the configtool to print a warning if any LMs are given access to those clocks via the clock protocol. Removed access in the EVK cfg files to some clocks (A55 clocks, M7 clock, and ISI clock) from the AP agents as those should be controlled only via the performance protocol. Customers should make similar changes to their cfg files.

SM-268: Add CGC parent nodes to discoverable clock tree attributes {#RN_DETAIL_SM_268}
----------

CGC clock nodes have a single parent that should be discoverable by traversing the SCMI clock attributes.  SM was updated to return the respective parent node when using SCMI to query for possible parents of CGC nodes.

This change also added a new SM debug monitor command 'clock.r possible' which will dump all the possible parents for the clocks (or a specified clock).

SM-269: Add device error log {#RN_DETAIL_SM_269}
----------

Added error log word where each bit is an error flag. These are set during init of the SM if an error occurs but can't be reported and reboot is not the best response. Can be displayed with the monitor err/syslog commands. Can be retrieved as part of the syslog.

Bit flags are device specific but current definition for all is:

- Bit0: DEV_SM_ERR_INITCLOCKS - BOARD_InitClocks() error
- Bit1: DEV_SM_ERR_INITCONSOLE - BOARD_InitDebugConsole() error
- Bit2: DEV_SM_ERR_INITTIMERS - BOARD_InitTimers() error
- Bit3: DEV_SM_ERR_INITSERIAL - BOARD_InitSerialBus() error

Customers should make similar changes to their board port code.

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

SM-275: Add support for LP compute mode during system sleep {#RN_DETAIL_SM_275}
----------

Support for CPU low-power compute mode has been added to enhance processing capability during system sleep mode.  CPUs requesting low-power compute mode can remain active during system sleep.  The NOCMIX and WAKEUPMIX dependencies during low-power compute can be specified for each CPU.

The steps for a CPU to request low-power compute:
 * Use SYSTEM_POWER_STATE_SET to specify a minimum performance level during system sleep using the vendor-defined system sleep fields.
 * Use CPU_PER_LPM_CONFIG_SET to specify WAKEUPMIX/NOCMIX dependencies required by the CPU during system sleep.
 * Use CPU_SLEEP_MODE_SET with the SCMI_CPU_FLAGS_LP_COMPUTE to request low-power compute mode.

CPUs must either be in SUSPEND or low-power compute mode to allow system sleep conditions.

SM-276: Monitor shows ARM voltage always on {#RN_DETAIL_SM_276}
----------

Fixed issue in the PF09 driver with reading GPIO state.

SM-277: Make ports to various SoC more common {#RN_DETAIL_SM_277}
----------

Changes to align headers/port between i.MX95 and i.MX94. Some changes may affect customer board ports:

 - Renamed LPCAC_PC to M33_CACHE_CTRLPC
 - Renamed LPCAC_PS to M33_CACHE_CTRLPS

Customers must make the same changes to their port. Failure to do so will break compilation.

SM-278: Create new config file to demonstrate NETC sharing {#RN_DETAIL_SM_278}
----------

Created a new mx94evknetc.cfg file for use in demonstration/test of NETC sharing.

SM-279: Support M33S DDR target boot {#RN_DETAIL_SM_279}
----------

Modified the mx94alt.cfg file to support an MSEL=3 option to boot just the M33S core.

SM-281: Incorrect rate returned for uninitialized DFS clock nodes {#RN_DETAIL_SM_281}
----------

PLL DFS_Division_N registers reset to zero resulting in DFS MFI and MFI fields set to zero.  Requesting the rate for these PLL DFS nodes before initializing the output frequency can result in divide-by-zero operations or maximum integer values being returned during rate queries.  The PLL digital wrapper clamps the DFS MFI to be in the range of 2-255 and the DFS MFN in the range of 0-4, regardless of the value programmed into the DFS_Division_N registers.  The SM has been updated to consider the clamping behavior of the PLL digital wrapper during DFS rate calculations.

SM-282: Add SCMI message to get DDR info {#RN_DETAIL_SM_282}
----------

Added a new SCMI MISC API call to get information about the DDR memory regions. This function, SCMI_MiscDdrInfoGet(), takes a memory region parameter and returns info such as the associated DDR type, width, MTS, ECC, and start/end addresses. There can be multiple regions depending on the device DDR controller memory map, number of controllers, and interleave configuration. The SCMI MISC protocol version has been updated to 1.1.

A new 'ddr' command has been added to the SM debug monitor to dump this information.

In addition, this change fixed an issue with ECC and suspend/resume.

SM-283: BBNSM GPR use conflict between board port and cfg usage {#RN_DETAIL_SM_283}
----------

Changed all board ports to use GPR0-3 for shutdown record storage rather than GPR4-7. This now aligns with the default GPR ownership in the various cfg files.

 In brd_sm.c:

```
#define BRD_SM_RST_REC_FIRST  0U     /* First GPR for shutdown record */
```

If customers copied the EVK cfg file and EVK board port, they need to make the same change. The board port usage of GPR needs to align with the ownership of GPR specified in the cfg file.

SM-284: Give M33S permission to PERF domain {#RN_DETAIL_SM_284}
----------

Updated the M33P_S resource with the PERF_M33S performance domain. Owners of this resource (usually the M33S itself) can then make SCMI calls to change performance levels.

Customers need to rebuild their header files using 'make cfg'.

SM-285: Remove PMRO default val for i.MX95 {#RN_DETAIL_SM_285}
----------

i.MX95 RX Replica implementation assumed a value of 0x5000 for PMRO if the fuse was not programmed. With silicon rev B0, the PMRO fuse is always programmed as per silicon characterization. Hence, the default was removed.

SM-288: System unable to resume when both console and CAN are enabled as wakeups {#RN_DETAIL_SM_288}
----------

This issue was caused by a typo introduced during the MSG Coverity fixes. The resolution involved correcting the typo in the _CpuPerLpmConfigSet_ function.

SM-289: DATA definition for AP secure in default config files allows non-secure access {#RN_DETAIL_SM_289}
----------

Changed the definition for DATA in the AP secure section on the NXP cfg files to be secure R/W rather than non-secure R/W. This is already redefined as NS in the following AP non-secure section.

The DATA define wasn't used in NXP cfg files so this did not cause any problem and the change did not result in any change to the generated headers. If customer cfg files used then secure DATA memory regions are accessible in a non-secure state. Customers should make this change and rebuild their headers.

SM-290: CPU_ResetVectorSet() does not correctly handle addresses larger than 32-bit {#RN_DETAIL_SM_290}
----------

Fixed CPU vector address reconstruction in CPU_ResetVectorSet() and CPU_ResetVectorGet() APIs.


SM-291: PCA2131 power mode configured even when call is for other RTC {#RN_DETAIL_SM_291}
----------

Move the PCA2131 power mode configuration into the else condition block of PCA2131 RTC support in the NXP reference board ports.

SM-292: Move DDR RxReplica pathPhase initialization to OEI {#RN_DETAIL_SM_292}
----------

Move DDR RxReplica pathPhase initialization to OEI as more accurate to capture the pathPhase after data training. Also, Quickboot can use same set of PHY CSRs.

