Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2024q1) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q2 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2024q1) and this release (imx_sm_2025q2).

New Feature {#RN_CL_NEW}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-131](https://jira.sw.nxp.com/projects/SM/issues/SM-131) | Support system run mode |   | Y | Y | Y | Y |
| [SM-197](https://jira.sw.nxp.com/projects/SM/issues/SM-197) | Support i.MX95 B0 |   | | | Y | |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-200](https://jira.sw.nxp.com/projects/SM/issues/SM-200) | Improve BBNSM RTC access timing |   | Y | Y | Y | Y |
| [SM-204](https://jira.sw.nxp.com/projects/SM/issues/SM-204) | Move to new SDK3 headers |   | Y | Y | Y | Y |
| [SM-208](https://jira.sw.nxp.com/projects/SM/issues/SM-208) | Misc. updates to SM configurations |   | Y | Y | Y | Y |
| [SM-215](https://jira.sw.nxp.com/projects/SM/issues/SM-215) | Add SCMI LMM protocol function to set boot address of a CPU |   | Y | Y | Y | Y |
| [SM-217](https://jira.sw.nxp.com/projects/SM/issues/SM-217) | Add monitor rst command to allow assert/negate of resets [[detail]](@ref RN_DETAIL_SM_217) |   | Y | Y | Y | Y |
| [SM-220](https://jira.sw.nxp.com/projects/SM/issues/SM-220) | Coding standard fixes |   | Y | Y | Y | Y |
| [SM-224](https://jira.sw.nxp.com/projects/SM/issues/SM-224) | Upgrade eMcem component to EAR 0.8.4 |   | Y | Y | Y | Y |
| [SM-226](https://jira.sw.nxp.com/projects/SM/issues/SM-226) | Support misc. makefile variables from the configtool [[detail]](@ref RN_DETAIL_SM_226) |   | Y | Y | Y | Y |
| [SM-232](https://jira.sw.nxp.com/projects/SM/issues/SM-232) | Enable Neutron NPU with SMMU |   | Y | Y | Y | |
| [SM-233](https://jira.sw.nxp.com/projects/SM/issues/SM-233) | Support negative voltages to board functions |   | Y | Y | Y | Y |
| [SM-235](https://jira.sw.nxp.com/projects/SM/issues/SM-235) | Add ECID in SM info output [[detail]](@ref RN_DETAIL_SM_235) |   | Y | Y | Y | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-212](https://jira.sw.nxp.com/projects/SM/issues/SM-212) | Insufficient argument checking for monitor pmic commands |   | Y | Y | Y | Y |
| [SM-213](https://jira.sw.nxp.com/projects/SM/issues/SM-213) | Insufficient argument checking for monitor trdc commands [[detail]](@ref RN_DETAIL_SM_213) |   | Y | Y | Y | Y |
| [SM-214](https://jira.sw.nxp.com/projects/SM/issues/SM-214) | Insufficient argument checking for monitor fuse commands |   | Y | Y | Y | Y |
| [SM-221](https://jira.sw.nxp.com/projects/SM/issues/SM-221) | Extended config flag not set for spread spectrum clocks [[detail]](@ref RN_DETAIL_SM_221) |   | Y | Y | Y | Y |
| [SM-223](https://jira.sw.nxp.com/projects/SM/issues/SM-223) | Wakeups must be masked for CPUs that do not constrain system sleep entry [[detail]](@ref RN_DETAIL_SM_223) |   | Y | Y | Y | Y |
| [SM-229](https://jira.sw.nxp.com/projects/SM/issues/SM-229) | Manage NETC M33S with a virtual power domain to avoid power dependencies |   | | | | Y |
| [SM-230](https://jira.sw.nxp.com/projects/SM/issues/SM-230) | Incorrect configtool output for debug/DAP domain [[detail]](@ref RN_DETAIL_SM_230) |   | Y | Y | Y | Y |
| [SM-236](https://jira.sw.nxp.com/projects/SM/issues/SM-236) | PMIC soft errors incorrectly reported as boot reason [[detail]](@ref RN_DETAIL_SM_236) |   | Y | Y | Y | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-186](https://jira.sw.nxp.com/projects/SM/issues/SM-186) | Implement DDR RX replica workaround |   | Y | Y | Y | Y |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-209](https://jira.sw.nxp.com/projects/SM/issues/SM-209) | SM 2025Q2 documentation updates |   | Y | Y | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-213: Insufficient argument checking for monitor trdc commands {#RN_DETAIL_SM_213}
----------

Check DID parameter against number of DIDs reported by a TRDC.

SM-217: Add monitor rst command to allow assert/negate of resets {#RN_DETAIL_SM_217}
----------

Added the following commands to the monitor:

- rst.r - will display all reset domains and their current state
- rst.w <domain> <action> - will perform reset action on domain

Actions include assert, negate, and auto. Auto (autonomous) will usually assert+negate to do a complete reset.



SM-221: Extended config flag not set for spread spectrum clocks {#RN_DETAIL_SM_221}
----------

Updated code to set the extended clock attribute if the clock supports spread spectrum settings.

SM-223: Wakeups must be masked for CPUs that do not constrain system sleep entry {#RN_DETAIL_SM_223}
----------

GPC wakeups for A55Cx may remain enabled during low-power flows that impact the A55P power state.  SM system sleep code only saves/masks/restores A55P GPC wakeups during system sleep.  This can cause the system to hang upon resume since an A55Cx with GPC wakeups enabled may start to resume before the system is ready.  The solution is to mask GPC wakeups for all CPUs during system sleep, even if those CPUs are being "forced" into system sleep (i.e., CPU is not being considered by GPC for system sleep entry). 

SM-226: Support misc. makefile variables from the configtool {#RN_DETAIL_SM_226}
----------

Added option to generate makefile variable definitions from the configtool. The MAKE line can now contain one or more var=A|B options where the A is the name of the variable and B is the optional value. If |B is not present, then the variable is set to 1.

SM-230: Incorrect configtool output for debug/DAP domain {#RN_DETAIL_SM_230}
----------

Modified the configool to:

- Properly handle DID ranges when generating debug DID mappings.
- Correctly map the last MBC entry to the debug DID.
- Do not map MBC/MRC entries with perm = 0/none to the debug DID.

Customers should regenerate their config headers.

SM-235: Add ECID in SM info output {#RN_DETAIL_SM_235}
----------

The ECID value can be read from the fuse registers. The ECID register bit offsets in the fusemap is as below:
 
|Word|Packed Bit Names|Word Usage|
|---|---|---|
|12|ECID[127:96]|ECID3|
|13|ECID[95:64]|ECID2|
|14|ECID[63:32]|ECID1|
|15|ECID[31:0]|ECID0|

Added support to read and print the above ECID register in the "Info" command of debug monitor. The output of the info command will look as below:

    >$ info
    SM Version    = Build 578, Commit 2c8469fe
    SM Config     = mx95evk, mSel=0
    Board         = i.MX95 EVK, attr=0x00000000
    Silicon       = i.MX95 A1
    Boot mode     = USB serial download
    Boot device   = USB1
    Boot stage    = serial
    Boot set      = 1
    ECID          = 0x0123456789ABCDEF0123456789ABCDEF
    PMIC 0 (0x08) = 0x20, 0x09, 0x10, 0x00, 0x01
    PMIC 1 (0x2A) = 0x54, 0x22, 0x00, 0x0B
    PMIC 2 (0x29) = 0x55, 0x22, 0x00, 0x0A
    Compiler      = gcc 12.3.1 20230626


SM-236: PMIC soft errors incorrectly reported as boot reason {#RN_DETAIL_SM_236}
----------

Modified reference board port code to mask PMIC soft fault bits when determining if a reset was cause by the PMIC. Soft faults do not result in a reset unless elevated to hard faults.

Customers have to make similar changes to their board ports.

