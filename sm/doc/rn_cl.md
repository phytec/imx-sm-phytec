Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2025q3) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q4 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2025q3) and this release (imx_sm_2025q4).

New Feature {#RN_CL_NEW}
------------

| Key     | Summary                        | Patch | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|
| [SM-240](https://jira.sw.nxp.com/projects/SM/issues/SM-240) | Add support for sending frequency/voltage change messages to ELE [[detail]](@ref RN_DETAIL_SM_240) |   | Y | Y |
| [SM-293](https://jira.sw.nxp.com/projects/SM/issues/SM-293) | Implement misc controls for motor control BLK_CTRL register [[detail]](@ref RN_DETAIL_SM_293) |   | | Y |
| [SM-294](https://jira.sw.nxp.com/projects/SM/issues/SM-294) | Support system reset on DDR ECC multi-bit error [[detail]](@ref RN_DETAIL_SM_294) |   | Y | Y |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|
| [SM-192](https://jira.sw.nxp.com/projects/SM/issues/SM-192) | Remove support for i.MX95 A0/1 [[detail]](@ref RN_DETAIL_SM_192) |   | | |
| [SM-286](https://jira.sw.nxp.com/projects/SM/issues/SM-286) | Improve test coverage [[detail]](@ref RN_DETAIL_SM_286) |   | Y | Y |
| [SM-295](https://jira.sw.nxp.com/projects/SM/issues/SM-295) | Misc. config file changes [[detail]](@ref RN_DETAIL_SM_295) |   | Y | Y |
| [SM-296](https://jira.sw.nxp.com/projects/SM/issues/SM-296) | Enable SMCT config tool to replace configtool.pl in 'make cfg' [[detail]](@ref RN_DETAIL_SM_296) |   | Y | Y |
| [SM-300](https://jira.sw.nxp.com/projects/SM/issues/SM-300) | Change Coverity comments to C style [[detail]](@ref RN_DETAIL_SM_300) |   | Y | Y |
| [SM-303](https://jira.sw.nxp.com/projects/SM/issues/SM-303) | Extend TRDC_CONFIG with information about MDAC features [[detail]](@ref RN_DETAIL_SM_303) |   | Y | Y |
| [SM-308](https://jira.sw.nxp.com/projects/SM/issues/SM-308) | Display part number in monitor info command [[detail]](@ref RN_DETAIL_SM_308) |   | Y | Y |
| [SM-309](https://jira.sw.nxp.com/projects/SM/issues/SM-309) | Update configtool to support DOM name attribute [[detail]](@ref RN_DETAIL_SM_309) |   | Y | Y |
| [SM-312](https://jira.sw.nxp.com/projects/SM/issues/SM-312) | Assign UART3 to M33-S in the i.MX94 EVK config [[detail]](@ref RN_DETAIL_SM_312) |   | | Y |
| [SM-313](https://jira.sw.nxp.com/projects/SM/issues/SM-313) | Enable watchdog earlier to protect boot [[detail]](@ref RN_DETAIL_SM_313) |   | Y | Y |
| [SM-315](https://jira.sw.nxp.com/projects/SM/issues/SM-315) | Limit AP frequency based on fuses on i.MX94 [[detail]](@ref RN_DETAIL_SM_315) |   | | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|
| [SM-297](https://jira.sw.nxp.com/projects/SM/issues/SM-297) | Add LPI clock source dependency checking [[detail]](@ref RN_DETAIL_SM_297) |   | | Y |
| [SM-298](https://jira.sw.nxp.com/projects/SM/issues/SM-298) | MU7-9 missing interrupt priority support [[detail]](@ref RN_DETAIL_SM_298) |   | | Y |
| [SM-299](https://jira.sw.nxp.com/projects/SM/issues/SM-299) | NETC Switch MSI table not accessible [[detail]](@ref RN_DETAIL_SM_299) |   | | Y |
| [SM-304](https://jira.sw.nxp.com/projects/SM/issues/SM-304) | Fix temp sensor anomalous behaviors [[detail]](@ref RN_DETAIL_SM_304) |   | Y | Y |
| [SM-306](https://jira.sw.nxp.com/projects/SM/issues/SM-306) | Config tool fails to handle 'size' attribute on MRC resource assignment [[detail]](@ref RN_DETAIL_SM_306) |   | Y | Y |
| [SM-307](https://jira.sw.nxp.com/projects/SM/issues/SM-307) | Config tool generates invalid config.mak file depending on input comment format [[detail]](@ref RN_DETAIL_SM_307) |   | Y | Y |
| [SM-316](https://jira.sw.nxp.com/projects/SM/issues/SM-316) | Update clock mux sources for i3c1_slow_clk_root and endat3_1_fast_clk_root  [[detail]](@ref RN_DETAIL_SM_316) |   | | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|
| [SM-310](https://jira.sw.nxp.com/projects/SM/issues/SM-310) | Block transactions to DDR memory before entering DDR retention  [[detail]](@ref RN_DETAIL_SM_310) |   | Y | Y |
| [SM-311](https://jira.sw.nxp.com/projects/SM/issues/SM-311) | Align DDR rates to datasheet and OEI-DDR settings [[detail]](@ref RN_DETAIL_SM_311) |   | Y | Y |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|
| [SM-287](https://jira.sw.nxp.com/projects/SM/issues/SM-287) | SM 2025Q4 documentation updates |   | Y | Y |
| [SM-302](https://jira.sw.nxp.com/projects/SM/issues/SM-302) | Improve documentation for debugging reset issues [[detail]](@ref RN_DETAIL_SM_302) |   | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-192: Remove support for i.MX95 A0/1 {#RN_DETAIL_SM_192}
----------

Support removed for i.MX95 A0/1. Functionality removed includes:

- Workaround for errata 628654
- Workaround for errata 52232
- Run-time skip of MIX transaction blocking
- Run-time skip of SMMU TBU/TCU control
- Run-time copy of M7 boot address
- Run-time skip of ANA sensor init

If a customer needs A0/1 support, the commit can be reverted.

SM-240: Add support for sending frequency/voltage change messages to ELE {#RN_DETAIL_SM_240}
----------

For devices with security sensors enabled, SM must notify ELE when security-relevant clocks or supplies are being updated.  SM sends voltage/frequency update commands that are available starting with version 2.0.4 of the ELE firmware.

SM-286: Improve test coverage {#RN_DETAIL_SM_286}
----------

Added test code to increase statement/branch coverage. Areas of added tests include SCMI FuSa, LMM, and Misc. protocols.

SM-293: Implement misc controls for motor control BLK_CTRL register {#RN_DETAIL_SM_293}
----------

Implemented the following new controls:

- 11: ADC_TRIGGER
- 12: HPF1_SYNC_SRC_CFG1
- 13: HPF1_SYNC_SRC_CFG2
- 14: HPF2_SYNC_SRC_CFG1
- 15: HPF2_SYNC_SRC_CFG2
- 16: HPF1_INTR_CTRL
- 17: HPF2_INTR_CTRL
- 18: ENDAT3_STATUS
- 19: ENC_DIAG_MUX_SEL
- 20: HPF_SYNC_OUT_CTL
- 21: ENDAT_STRETCH_CTRL
- 22: BISS1_PULSE_STR_CTL
- 23: XBAR_TRIG_SYNC_2
- 24: XBAR_TRIG_SYNC_3
- 25: XBAR_TRIG_SYNC_4
- 26: XBAR_DIR_CTRL_2

Some of these get assigned based on ownership of related peripherals. The following must be granted explicitly in the cfg file:

- DIAG_ENC_MUX_CTRL
- ENDAT_STRCH_CTRL
- HIPERFACE1_CTRL
- HIPERFACE2_CTRL
- HPF_SYNC_OUT_CTRL
- XBAR_DIR_CTRL
- XBAR_TRIG_CTRL

Customers should assign these to any LM implementing motor control and rebuild their headers.

SM-294: Support system reset on DDR ECC multi-bit error {#RN_DETAIL_SM_294}
----------

Enabled the DDR ECC multi-bit error (MBE) fault in the FCCU config file. Added reaction settings in NXP SM cfg files (EVK, ALT) to reset the system. Like all faults, customers can specify to do nothing, reset the system, reset an LM, shutdown the system, shutdown an LM, or any of the other fault reaction types.

Note if nothing is specified, then the default is to reset the system. If MBE reset is not desired any of the following will disable:  don't enable in the DDR OEI, disable in the FCCU (eMcem) config file, or specify none as the reaction type in the SM cfg file.

SM-295: Misc. config file changes {#RN_DETAIL_SM_295}
----------

Misc. cfg file changes:

- Removed PERF_DRAM from all agents (DVFS of DDR not supported).
- Synced the Android cfg file to the EVK cfg file.
- Changes to support fastboot. In addition, ELE must be made owner of EDMA2_MP, and EDMA2_CH0_1. The last must be removed from the AP-NS agent.





SM-296: Enable SMCT config tool to replace configtool.pl in 'make cfg' {#RN_DETAIL_SM_296}
----------

SMCT environment variable is now processed by Makefile during 'make cfg'. When SMCT variable is defined and contains a path to SM Configuration Tool directory, the tool is used to generate the output configuration files instead of the default configtool.pl. The SMCT tool needs python3 in PATH or specified as PYTHON3 variable while running `make cfg`.

SM-297: Add LPI clock source dependency checking {#RN_DETAIL_SM_297}
----------

Clock roots of peripherals supporting the LPI function enabled must be active to complete q-channel handshakes triggered during low-power flows.  SM has added dependency checks to ensure the following:
 
1. LPI clock source is active before enabling the LPI
2. LPI clock source cannot be disabled after enabling the LPI

Failing to enforce this dependency can result in incomplete attempts to enter the targeted CPU sleep mode.  Such incomplete sleep mode transitions can subsequently cause hangs of the GPC hardware during reset/recovery of CPUs utilizing LPIs.

SM-298: MU7-9 missing interrupt priority support {#RN_DETAIL_SM_298}
----------

Added IRQ priority support to MU7-9 handlers to match capabilities on MU1-6.

SM-299: NETC Switch MSI table not accessible {#RN_DETAIL_SM_299}
----------

Added mapping in the NETC cfg file for the switch MSI-X page. Customers will need to regenerate their headers using the configtool.

SM-300: Change Coverity comments to C style {#RN_DETAIL_SM_300}
----------

Updated all Coverity-related comments to follow C-style (/* comment */) format as per coding standards. Verified that the changes do not impact functionality and that Coverity analysis runs successfully post-modification.

SM-302: Improve documentation for debugging reset issues {#RN_DETAIL_SM_302}
----------

Added a new top-level section to the documentation for SM debug. This section contains info on:

- Reset/shutdown messages and causes
- Debugging SCMI API and peripheral access issues
- Errors during boot

A new section was also added to the Configuration section on FCCU config.


SM-303: Extend TRDC_CONFIG with information about MDAC features {#RN_DETAIL_SM_303}
----------

The configrool was updated to support KPA enable (kpaen) and SID size (sidsz) options when configuring a TRDC with the TRDC_CONFIG_n specification in a device cfg file.

The only impact to customers is they should rebuild their SM config headers using the configtool.

SM-304: Fix temp sensor anomalous behaviors {#RN_DETAIL_SM_304}
----------

Addressed the following anomalous behaviors in the *tmpsns* module:

1. **Hardware error for board sensor (temp_pf53_arm) with mx95alt.cfg:**

    Introduced a function to retrieve the ARM voltage mode prior to enabling the board sensor, ensuring proper initialization and avoiding hardware errors.

2. **Incorrect sensor state visibility across agents:**

    Implemented logic to reflect sensor state based on the agent's configuration. For example, if the M7 agent enables Sensor 1, only M7 will see its status as "ON". Additionally, when M7 sets trip-points and later disables the sensor, the associated trip-points are now correctly unset.

Customers should make the same updates to their board port if it copies the i.MX95 EVK PMIC structure.

SM-306: Config tool fails to handle 'size' attribute on MRC resource assignment {#RN_DETAIL_SM_306}
----------

Fixed issue when using the size option for an MRC-based memory region. The end option worked but size did not.

SM-307: Config tool generates invalid config.mak file depending on input comment format {#RN_DETAIL_SM_307}
----------

Corrected issue in the configftool where it did not correctly handle a single hash comment for the copyright.

SM-308: Display part number in monitor info command {#RN_DETAIL_SM_308}
----------

Added code to display the part number in the debug monitor info command. Note the package is not known on i.MX94. Also, some parts do not have the PART_NUM field programmed in fuses and the result will be 'x' in the displayed PN.

SM-309: Update configtool to support DOM name attribute {#RN_DETAIL_SM_309}
----------

Added support for naming of DOM sections. These now require a name argument. Also added checking for names on LM and agents. Missing names will now error.
Customers will need to add names to their DOM sections.

SM-310: Block transactions to DDR memory before entering DDR retention  {#RN_DETAIL_SM_310}
----------

Before an LM requests to be suspended, it should first stop all bus masters. If it fails to do this, the SM can hang when it attempts to move the DDR into self-refresh. This is because the DDR controller stops responding to DDR transactions and they can then back up into the fabric and block SM access to the DDR controller.

This fix uses the DDR TRDC MRC to block all accesses to DDR and return bus errors. After all LM are suspended and before the SM moves the DDR into self-refresh, all DDR MRC regions are invalidated. On resume, they are marked again as valid before starting any LM.

SM-311: Align DDR rates to datasheet and OEI-DDR settings {#RN_DETAIL_SM_311}
----------

DDR rates (MT/s) and the corresponding DDR PLL configuration was aligned to the latest datasheet and values programmed by OEI-DDR.  For MX95, the package type is now used to dynamically update the SCMI performance tables for DDR.

SM-312: Assign UART3 to M33-S in the i.MX94 EVK config {#RN_DETAIL_SM_312}
----------

The UART3 resource and IO30/31 pins moved from AP-NS to the M33-S. This allows for use of the same binary on OrangeBox.

SM-313: Enable watchdog earlier to protect boot {#RN_DETAIL_SM_313}
----------

In the startup assembly file, enable WDOG2 (one second timeout) first thing after the reset vector. Disable systick handling (and the resulting WDOG2 servicing) until all boot initialization is complete.

SM-315: Limit AP frequency based on fuses on i.MX94 {#RN_DETAIL_SM_315}
----------

Limit AP frequency based on speed grade fuses on iMX943. 

SM-316: Update clock mux sources for i3c1_slow_clk_root and endat3_1_fast_clk_root  {#RN_DETAIL_SM_316}
----------

The source inputs available for the i3c1_slow_clk_root and endat3_1_fast_clk_root were updated to reflect the latest RM.

