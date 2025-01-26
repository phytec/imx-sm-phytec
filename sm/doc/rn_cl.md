Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2024q4) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q1 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2024q4) and this release (imx_sm_2025q1).

New Feature {#RN_CL_NEW}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-7](https://jira.sw.nxp.com/projects/SM/issues/SM-7) | Add support for i.MX94 [[detail]](@ref RN_DETAIL_SM_7) |   | | | Y |
| [SM-9](https://jira.sw.nxp.com/projects/SM/issues/SM-9) | Add support for the i.MX94 EVK [[detail]](@ref RN_DETAIL_SM_9) |   | | | Y |
| [SM-198](https://jira.sw.nxp.com/projects/SM/issues/SM-198) | Add support for message profiling [[detail]](@ref RN_DETAIL_SM_198) |   | Y | Y | |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-75](https://jira.sw.nxp.com/projects/SM/issues/SM-75) | Do not start ANA TMPSNS if started by ELE [[detail]](@ref RN_DETAIL_SM_75) |   | Y | Y | |
| [SM-178](https://jira.sw.nxp.com/projects/SM/issues/SM-178) | Add V2X command to debug monitor [[detail]](@ref RN_DETAIL_SM_178) |   | Y | Y | |
| [SM-182](https://jira.sw.nxp.com/projects/SM/issues/SM-182) | Support device abstraction to fuses/features [[detail]](@ref RN_DETAIL_SM_182) |   | Y | Y | |
| [SM-183](https://jira.sw.nxp.com/projects/SM/issues/SM-183) | Add versioning and additional checks to the configtool [[detail]](@ref RN_DETAIL_SM_183) |   | Y | Y | |
| [SM-184](https://jira.sw.nxp.com/projects/SM/issues/SM-184) | Deassert the GPU reset when the GPUMIX is powered up [[detail]](@ref RN_DETAIL_SM_184) |   | Y | Y | |
| [SM-187](https://jira.sw.nxp.com/projects/SM/issues/SM-187) | Misc. updates to SM configurations [[detail]](@ref RN_DETAIL_SM_187) |   | Y | Y | |
| [SM-190](https://jira.sw.nxp.com/projects/SM/issues/SM-190) | Misc. coding standards fixes [[detail]](@ref RN_DETAIL_SM_190) |   | Y | Y | |
| [SM-191](https://jira.sw.nxp.com/projects/SM/issues/SM-191) | Misc. unit test improvements [[detail]](@ref RN_DETAIL_SM_191) |   | Y | Y | |
| [SM-211](https://jira.sw.nxp.com/projects/SM/issues/SM-211) | Add new ele ext monitor command to display additional info [[detail]](@ref RN_DETAIL_SM_211) |   | Y | Y | Y |
| [SM-216](https://jira.sw.nxp.com/projects/SM/issues/SM-216) | Add gcc compiler version to info [[detail]](@ref RN_DETAIL_SM_216) |   | Y | Y | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-196](https://jira.sw.nxp.com/projects/SM/issues/SM-196) | Provide transition latency as property of SCMI performance level [[detail]](@ref RN_DETAIL_SM_196) |   | Y | Y | |
| [SM-199](https://jira.sw.nxp.com/projects/SM/issues/SM-199) | Incorrect configtool handling of overlapping block permissions [[detail]](@ref RN_DETAIL_SM_199) |   | Y | Y | |
| [SM-202](https://jira.sw.nxp.com/projects/SM/issues/SM-202) | System sleep entry can miss SM hardware handshakes [[detail]](@ref RN_DETAIL_SM_202) |   | Y | Y | |
| [SM-203](https://jira.sw.nxp.com/projects/SM/issues/SM-203) | GPIO 4/5 memory map incorrect [[detail]](@ref RN_DETAIL_SM_203) |   | Y | Y | |
| [SM-205](https://jira.sw.nxp.com/projects/SM/issues/SM-205) | Group shutdown results in LM0 (SM) shown in off state [[detail]](@ref RN_DETAIL_SM_205) |   | Y | Y | |
| [SM-206](https://jira.sw.nxp.com/projects/SM/issues/SM-206) | Cannot configure some reset permissions [[detail]](@ref RN_DETAIL_SM_206) |   | Y | Y | |
| [SM-207](https://jira.sw.nxp.com/projects/SM/issues/SM-207) | Cortex-M address not configured prior to power on [[detail]](@ref RN_DETAIL_SM_207) |   | Y | Y | |
| [SM-210](https://jira.sw.nxp.com/projects/SM/issues/SM-210) | Incorrect ELE error code caching [[detail]](@ref RN_DETAIL_SM_210) |   | Y | Y | |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|
| [SM-193](https://jira.sw.nxp.com/projects/SM/issues/SM-193) | SM 2025Q1 documentation updates |   | Y | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-7: Add support for i.MX94 {#RN_DETAIL_SM_7}
----------

Added device support for [i.MX94 family devices](@ref DEV_SM_MX94) inc. i.MX943. See the devices/MIMX94 directory.

Cfg files targeted at this device should include the following:

    MAKE    soc=MIMX94, board=<board name>, build=gcc_cross

    include ../devices/MIMX94/configtool/device.cfg

Note the list of resources, memory areas, etc. are different from i.MX95. See the configs/mx94evk.cfg file for reference.

SM-9: Add support for the i.MX94 EVK {#RN_DETAIL_SM_9}
----------

Added board support for the [i.MX94 EVK](@ref BRD_SM_MX94EVK). See the boards/mcimx94evk directory. Compile with the following:

    make config=mx94evk

Information about this port can be found in the [NXP i.MX94 EVK](@ref PORT_MX94_EVK) section of the RM.

Cfg files targeted at this board should include the following:

    MAKE    soc=MIMX94, board=mcimx94evk, build=gcc_cross

Also added board support for the [i.MX94 stub](@ref BRD_SM_MX94STUB) (minimal board access). See the boards/mcimx94stub directory.

Information about this port can be found in the [NXP i.MX94 Stub](@ref PORT_MX94_SB) section of the RM.

Cfg files targeted at this board should include the following:

    MAKE    soc=MIMX94, board=mcimx94stub, build=gcc_cross

This port is used mostly for emulation, early bring-up, and the DDR stress test tool. It does not contain code that will access PMICs, I2C devices, or GPIO. 


SM-75: Do not start ANA TMPSNS if started by ELE {#RN_DETAIL_SM_75}
----------

Modified code to not start the ANA TMPSNS if ELE starts it. This is based mostly on silicon version.

SM-178: Add V2X command to debug monitor {#RN_DETAIL_SM_178}
----------

Add two v2x monitor commands used for debug of V2X.
- v2x info
- v2x ping

SM-182: Support device abstraction to fuses/features {#RN_DETAIL_SM_182}
----------

Support i.MX95 phantom part numbers. 

SM-183: Add versioning and additional checks to the configtool {#RN_DETAIL_SM_183}
----------

This makes two changes:

- A version is written to the config files when the configtool is run. This version is then checked when the SM is compiled and an error generated if they do not match. This ensures old config files are not used. The version will updated when the configtool is changed.

- The configtool now checks to ensure the LM and SCMI_AGENT definitions are in numerical order. The tool will generate an error if not.

SM-184: Deassert the GPU reset when the GPUMIX is powered up {#RN_DETAIL_SM_184}
----------

SM was modified to take the GPU out of reset when the GPUMIX is powered on. This requires the SM own access to the BLK_CTRL_CPU module. Access to this module is removed from the AP. Customer need to make the same change to their SM cfg files.

Note the STRIPING_GRANULE and TEXFMT  fields in the BLK_CTRL_GPU are left at their reset state and the AP cannot set these. Any need to change these would have to be done in the SM config_user.h file.

SM-187: Misc. updates to SM configurations {#RN_DETAIL_SM_187}
----------

Updated device cfg files to zero out TRDC info left over from ELE.  Added nodbg option for memory regions to not map to the DAP. Added DDR region for V2X to access DDR holding the V2X firmware. Marked the V2X and ELE DDR regions as nodbg. Customers will need to make similar changes and rerun the configtool on their cfg files .

Add an unsupported cfg file (mx95rte.cfg) for real-time edge.

SM-190: Misc. coding standards fixes {#RN_DETAIL_SM_190}
----------

Misc. fixes of coding standards, style, MISRA, coverity, uncrustify, and cppcheck.

SM-191: Misc. unit test improvements {#RN_DETAIL_SM_191}
----------

Added unit tests to increase test coverage of the device layer.

SM-196: Provide transition latency as property of SCMI performance level {#RN_DETAIL_SM_196}
----------

Properties returned by the SCMI PERFORMANCE_DESCRIBE_LEVELS command include a worst-case transition latency in microseconds to move from any supported performance level to the level for which properties are being queried. 

Previously SM returned zero for the latency property.  SM has been updated to reflect the worst-case latency expected during PERFORMANCE_LEVEL_SET commands.  Note that this worst-case latency includes delay associated with the performance level transition, latency from outstanding agent commands, and latency from SM periodic servicing.

SM-198: Add support for message profiling {#RN_DETAIL_SM_198}
----------

SM has added the ability to profile messages during SM execution.  A new SM build option is available to enable message profiling support and set the depth of the profile log as follows:

**P=\<n\>** adds message profiling support with a depth of **n**.

Messages with the highest latency will be sorted and retained in the SM syslog.  The message log can be queried with SCMI_MiscSyslog() or displayed via the SM monitor **syslog** command.  

SM-199: Incorrect configtool handling of overlapping block permissions {#RN_DETAIL_SM_199}
----------

Modified configtool to properly combine MBC permissions when multiple settings are found. The result will be the OR of the permissions. This was only observed for the fuse block (FSB) as it was explicitly granted to the debug DOM9 as RO (0x4444) and again to DOM9 generically with RW access (0x6600). Customers will need to rerun the configtool on their cfg files to pick up these changes.

SM-202: System sleep entry can miss SM hardware handshakes {#RN_DETAIL_SM_202}
----------

SM queries the status of the GPC CMC (CPU Mode Controller) registers to determine if the current conditions allow system sleep mode entry.  Some CMC status registers report that a CPU has entered the SUSPEND sleep state before hardware state machines have fully completed the transition to SUSPEND.  SM usage of these CMC registers may result in wake sources being misconfigured during system sleep and missed wakeup events.

The SM algorithm has been updated to ensure all hardware state machines have completed the transition to SUSPEND prior to entering system sleep.

SM-203: GPIO 4/5 memory map incorrect {#RN_DETAIL_SM_203}
----------

Update address for GPIO4 and add GPIO5 in i.MX95 SoC header files.

SM-205: Group shutdown results in LM0 (SM) shown in off state {#RN_DETAIL_SM_205}
----------

Change group command iterations to exclude LM0.

SM-206: Cannot configure some reset permissions {#RN_DETAIL_SM_206}
----------

Updated reset protocol defines list to contain all of them for i.MX95.

SM-207: Cortex-M address not configured prior to power on {#RN_DETAIL_SM_207}
----------

Modified LM start/stop code to configure hardware boot addresses prior to any power on or off of the power domain containing the CPU. This solves issues with latching of the boot address by the hardware. Modified all cfg files to include a power up step in the start script. Customers will have to do the same if they wish to use SCMI_LmmPowerOn().

SM-210: Incorrect ELE error code caching {#RN_DETAIL_SM_210}
----------

Calls to ELE_RomIdGet() return the error status from any previous ELE call. This could be seen using the monitor 'ele info' command after a failed fuse command. This change fixed how cached ELE info handles the error status.

SM-211: Add new ele ext monitor command to display additional info {#RN_DETAIL_SM_211}
----------

Add new 'ele ext' command. Displays ELE ROM patch SHA256, FW SHA256, and other ELE info.

SM-216: Add gcc compiler version to info {#RN_DETAIL_SM_216}
----------

In the SM monitor info command, print the gcc version. If gcc was not used to compile the SM then nothing additional is printed.

