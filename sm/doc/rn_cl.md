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

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-7](https://jira.sw.nxp.com/projects/SM/issues/SM-7) | Add support for i.MX94 |   | | |
| [SM-9](https://jira.sw.nxp.com/projects/SM/issues/SM-9) | Add support for the i.MX94 EVK |   | | |
| [SM-198](https://jira.sw.nxp.com/projects/SM/issues/SM-198) | Add support for message profiling [[detail]](@ref RN_DETAIL_SM_198) |   | Y | Y |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-75](https://jira.sw.nxp.com/projects/SM/issues/SM-75) | Do not start ANA TMPSNS if started by ELE [[detail]](@ref RN_DETAIL_SM_75) |   | Y | Y |
| [SM-178](https://jira.sw.nxp.com/projects/SM/issues/SM-178) | Add V2X command to debug monitor [[detail]](@ref RN_DETAIL_SM_178) |   | Y | Y |
| [SM-182](https://jira.sw.nxp.com/projects/SM/issues/SM-182) | Support device abstraction to fuses/features [[detail]](@ref RN_DETAIL_SM_182) |   | Y | Y |
| [SM-183](https://jira.sw.nxp.com/projects/SM/issues/SM-183) | Add versioning and additional checks to the configtool [[detail]](@ref RN_DETAIL_SM_183) |   | Y | Y |
| [SM-184](https://jira.sw.nxp.com/projects/SM/issues/SM-184) | Deassert the GPU reset when the GPUMIX is powered up [[detail]](@ref RN_DETAIL_SM_184) |   | Y | Y |
| [SM-187](https://jira.sw.nxp.com/projects/SM/issues/SM-187) | Misc. updates to SM configurations [[detail]](@ref RN_DETAIL_SM_187) |   | Y | Y |
| [SM-190](https://jira.sw.nxp.com/projects/SM/issues/SM-190) | Misc. coding standards fixes [[detail]](@ref RN_DETAIL_SM_190) |   | Y | Y |
| [SM-191](https://jira.sw.nxp.com/projects/SM/issues/SM-191) | Misc. unit test improvements [[detail]](@ref RN_DETAIL_SM_191) |   | Y | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-196](https://jira.sw.nxp.com/projects/SM/issues/SM-196) | Provide transition latency as property of SCMI performance level [[detail]](@ref RN_DETAIL_SM_196) |   | Y | Y |
| [SM-199](https://jira.sw.nxp.com/projects/SM/issues/SM-199) | Incorrect configtool handling of overlapping block permissions [[detail]](@ref RN_DETAIL_SM_199) |   | Y | Y |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-193](https://jira.sw.nxp.com/projects/SM/issues/SM-193) | SM 2025Q1 documentation updates |   | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-75: Do not start ANA TMPSNS if started by ELE {#RN_DETAIL_SM_75}
----------

Modified code to not start ANA TMPSNS if ELE starts. This is based mostly on silicon version.

SM-178: Add V2X command to debug monitor {#RN_DETAIL_SM_178}
----------

Add two v2x monitor commands used for debug of V2X.
- v2x info
- v2x ping

SM-182: Support device abstraction to fuses/features {#RN_DETAIL_SM_182}
----------

Support imx95 phantom part numbers. 

SM-183: Add versioning and additional checks to the configtool {#RN_DETAIL_SM_183}
----------

This makes two changes:

- A version is written to the config files when the configtool is run. This version is then checked when the SM is compiled and an error generated if they do not match. This ensures old config files are not used. The version will updated when the configtool is changed.

- The configtool now checks to ensure the LM and SCMI_AGENT definitions are in numerical order. The tool will generate an error if not.

SM-184: Deassert the GPU reset when the GPUMIX is powered up {#RN_DETAIL_SM_184}
----------

SM was modified to take the GPU out of reset when the GPUMIX is powered on. This requires the SM own access to the BLK_CTRL_CPU module. Access to this module is removed from the AP. Customer need to make the same change to their SM cfg files.

Note the STRIPING_GRANULE and TEXFMT  fields in the BLK_CTRL_GPU are left at their reset state and the AP cannot set these. ANy need to change these would have to be done in the SM config_user.h file.

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

