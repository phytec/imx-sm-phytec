Change List {#RN_CL}
===========

The tables below also indicate which patch version, if any, in the previous release (
imx_sm_2025q1) includes the change. Note some of these patches may not have been released yet and
the data could change.

SM 2025Q2 Change List {#RN_P0}
====================================

Below is a list of changes between the previous release (imx_sm_2025q1) and this release (imx_sm_2025q2).

New Feature {#RN_CL_NEW}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-197](https://jira.sw.nxp.com/projects/SM/issues/SM-197) | Support i.MX95 B0 [[detail]](@ref RN_DETAIL_SM_197) |   | | | Y | |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-200](https://jira.sw.nxp.com/projects/SM/issues/SM-200) | Improve BBNSM RTC access timing [[detail]](@ref RN_DETAIL_SM_200) |   | Y | Y | Y | Y |
| [SM-208](https://jira.sw.nxp.com/projects/SM/issues/SM-208) | Misc. updates to SM configurations [[detail]](@ref RN_DETAIL_SM_208) |   | Y | Y | Y | Y |
| [SM-215](https://jira.sw.nxp.com/projects/SM/issues/SM-215) | Add SCMI LMM protocol function to set boot address of a CPU [[detail]](@ref RN_DETAIL_SM_215) |   | Y | Y | Y | Y |
| [SM-217](https://jira.sw.nxp.com/projects/SM/issues/SM-217) | Add monitor rst command to allow assert/negate of resets [[detail]](@ref RN_DETAIL_SM_217) |   | Y | Y | Y | Y |
| [SM-220](https://jira.sw.nxp.com/projects/SM/issues/SM-220) | Coding standard fixes and test improvements [[detail]](@ref RN_DETAIL_SM_220) |   | Y | Y | Y | Y |
| [SM-224](https://jira.sw.nxp.com/projects/SM/issues/SM-224) | Upgrade eMcem component to EAR 0.8.4 [[detail]](@ref RN_DETAIL_SM_224) |   | Y | Y | Y | Y |
| [SM-226](https://jira.sw.nxp.com/projects/SM/issues/SM-226) | Support misc. makefile variables from the configtool [[detail]](@ref RN_DETAIL_SM_226) |   | Y | Y | Y | Y |
| [SM-232](https://jira.sw.nxp.com/projects/SM/issues/SM-232) | Enable Neutron NPU with SMMU [[detail]](@ref RN_DETAIL_SM_232) |   | Y | Y | Y | |
| [SM-233](https://jira.sw.nxp.com/projects/SM/issues/SM-233) | Support negative voltages to board functions |   | Y | Y | Y | Y |
| [SM-234](https://jira.sw.nxp.com/projects/SM/issues/SM-234) | Upgrade GCC toolchain to Q4 2024 [[detail]](@ref RN_DETAIL_SM_234) |   | Y | Y | Y | Y |
| [SM-235](https://jira.sw.nxp.com/projects/SM/issues/SM-235) | Add ECID in SM info output [[detail]](@ref RN_DETAIL_SM_235) |   | Y | Y | Y | Y |
| [SM-239](https://jira.sw.nxp.com/projects/SM/issues/SM-239) | Add new rpmsg cfg file for i.MX94 |   | | | | Y |
| [SM-242](https://jira.sw.nxp.com/projects/SM/issues/SM-242) | Send LM suspend/wake notifications [[detail]](@ref RN_DETAIL_SM_242) |   | Y | Y | Y | Y |
| [SM-245](https://jira.sw.nxp.com/projects/SM/issues/SM-245) | Remove BLK_CTRL_CORTEX from A55 NS domain [[detail]](@ref RN_DETAIL_SM_245) |   | | | | Y |
| [SM-256](https://jira.sw.nxp.com/projects/SM/issues/SM-256) | Changes to move SHE1 to A55 core for i.MX94 [[detail]](@ref RN_DETAIL_SM_256) |   | | | | Y |

Bug {#RN_CL_BUG}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-212](https://jira.sw.nxp.com/projects/SM/issues/SM-212) | Insufficient argument checking for monitor pmic commands [[detail]](@ref RN_DETAIL_SM_212) |   | Y | Y | Y | Y |
| [SM-213](https://jira.sw.nxp.com/projects/SM/issues/SM-213) | Insufficient argument checking for monitor trdc commands [[detail]](@ref RN_DETAIL_SM_213) |   | Y | Y | Y | Y |
| [SM-214](https://jira.sw.nxp.com/projects/SM/issues/SM-214) | Insufficient argument checking for monitor fuse commands [[detail]](@ref RN_DETAIL_SM_214) |   | Y | Y | Y | Y |
| [SM-221](https://jira.sw.nxp.com/projects/SM/issues/SM-221) | Extended config flag not set for spread spectrum clocks [[detail]](@ref RN_DETAIL_SM_221) |   | Y | Y | Y | Y |
| [SM-223](https://jira.sw.nxp.com/projects/SM/issues/SM-223) | Wakeups must be masked for CPUs that do not constrain system sleep entry [[detail]](@ref RN_DETAIL_SM_223) |   | Y | Y | Y | Y |
| [SM-229](https://jira.sw.nxp.com/projects/SM/issues/SM-229) | Manage NETC M33S with a virtual power domain to avoid power dependencies [[detail]](@ref RN_DETAIL_SM_229) |   | | | | Y |
| [SM-230](https://jira.sw.nxp.com/projects/SM/issues/SM-230) | Incorrect configtool output for debug/DAP domain [[detail]](@ref RN_DETAIL_SM_230) |   | Y | Y | Y | Y |
| [SM-236](https://jira.sw.nxp.com/projects/SM/issues/SM-236) | PMIC soft errors incorrectly reported as boot reason [[detail]](@ref RN_DETAIL_SM_236) |   | Y | Y | Y | Y |
| [SM-238](https://jira.sw.nxp.com/projects/SM/issues/SM-238) | Add device-level restrictions for SCMI reset protocol [[detail]](@ref RN_DETAIL_SM_238) |   | Y | Y | Y | Y |
| [SM-241](https://jira.sw.nxp.com/projects/SM/issues/SM-241) | Bit width of LM number not consistent in the LMM protocol [[detail]](@ref RN_DETAIL_SM_241) |   | Y | Y | Y | Y |
| [SM-243](https://jira.sw.nxp.com/projects/SM/issues/SM-243) | Incorrect reference to WAKEUPMIX memory slice instance [[detail]](@ref RN_DETAIL_SM_243) |   | | | | Y |
| [SM-246](https://jira.sw.nxp.com/projects/SM/issues/SM-246) | ELE enabled temp sensor may cause SM to reset [[detail]](@ref RN_DETAIL_SM_246) |   | | | Y | Y |
| [SM-247](https://jira.sw.nxp.com/projects/SM/issues/SM-247) | Insufficient argument checking for monitor memory (mm/md) commands [[detail]](@ref RN_DETAIL_SM_247) |   | Y | Y | Y | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-186](https://jira.sw.nxp.com/projects/SM/issues/SM-186) | Implement DDR RX replica workaround [[detail]](@ref RN_DETAIL_SM_186) |   | Y | Y | Y | Y |
| [SM-244](https://jira.sw.nxp.com/projects/SM/issues/SM-244) | Align DRAM rates to datasheet [[detail]](@ref RN_DETAIL_SM_244) |   | | | | Y |
| [SM-253](https://jira.sw.nxp.com/projects/SM/issues/SM-253) | Enable GPUMIX SSI transaction blocking for clock-gated GPU module [[detail]](@ref RN_DETAIL_SM_253) |   | | | Y | |
| [SM-255](https://jira.sw.nxp.com/projects/SM/issues/SM-255) | Support extended industrial temp range [[detail]](@ref RN_DETAIL_SM_255) |   | Y | Y | Y | Y |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) | MX95<br> (B0) | MX94<br> (A0) |
|------------|-------------------------------|-------|---|---|---|---|
| [SM-209](https://jira.sw.nxp.com/projects/SM/issues/SM-209) | SM 2025Q2 documentation updates |   | Y | Y | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-186: Implement DDR RX replica workaround {#RN_DETAIL_SM_186}
----------

Integrated DDR RX Replica workaround for iMX943 and iMX95. To disable, add var=no_rx_replica to the configuration MAKE line.

SM-197: Support i.MX95 B0 {#RN_DETAIL_SM_197}
----------

Documentation updates for the addition of i.MX95 B0. other changes include:
 - Dynamic skip of LP handshake SWA

 - Some config changes for SMMU use by Linux

In addition, some other changes are required for i.MX95 B0:
 - SM-246: ELE enabled temp sensor may cause SM to reset
 - SM-253: Enable SSI transaction blocking for clock-gated modules

SM-200: Improve BBNSM RTC access timing {#RN_DETAIL_SM_200}
----------

Optimized some accesses to the BBNSM. Eliminated unnecessary reads. Defered some accesses during boot until after other cores are started. Worst-case function call latency went from ~3ms to ~2ms.

SM-208: Misc. updates to SM configurations {#RN_DETAIL_SM_208}
----------

Made the following changes to various cfg files:
 - Remove CPU power domain access

 - Remove DDRC access (alt cfg)

 - Add new i.MX94 jailhouse cfg

 - Remove extra notify buffer config

 - Update Android cfg files

 - Give ELE access to the DAP ISP port

 - Support split assignment for DACs on last to eDMA2 channels

 - Enable A55 TCU

 - Add new RPMSG cfg files

 - Remove unused V2X resource assignments

Customers may require similar changes in their cfg files.

SM-212: Insufficient argument checking for monitor pmic commands {#RN_DETAIL_SM_212}
----------

For the *pmic.r* debug monitor command, the error message was not being reported on the M33 console when an invalid argument was provided. Support has now been added to report the error on the console in such cases.

For the *pmic.w* debug monitor command, the validation check for the parameter values was missing. Therefore, a validation check has been added to ensure the parameters passed to the *pmic.w* command is correct.

SM-213: Insufficient argument checking for monitor trdc commands {#RN_DETAIL_SM_213}
----------

Check DID parameter against number of DIDs reported by a TRDC.

SM-214: Insufficient argument checking for monitor fuse commands {#RN_DETAIL_SM_214}
----------

For the *fuse* debug monitor command, if an out-of-bound value is passed as an argument, then as per the earlier implementation, the parameter is reassign to zero and passed it to the underlying function. However, it should report an error for the invalid parameter.

Therefore, support has been added to report the error on the console when an invalid parameter is passed to the *fuse* command.

SM-215: Add SCMI LMM protocol function to set boot address of a CPU {#RN_DETAIL_SM_215}
----------

Added a new SCMI API call, SCMI_LmmResetVectorSet(), to allow a caller with PRIV permissions for an LM to set the boot address of CPUs contained in the SM config start list. This allows an agent that is managing an LM to power it on via SCMI_LmmPowerOn(), load code, set the boot address via SCMI_LmmResetVectorSet(), and then boot the LM via SCMI_LmmBoot(). The LM is still responsible for configuring its resume address or the boot address of any CPUs not in the start list.

Also added the number of agents to the attributes field returned by SCMI_LmmAttributes().

The LMM protocol version was increased from 1.0 to 1.1. New features but backwards compatible.

SM-217: Add monitor rst command to allow assert/negate of resets {#RN_DETAIL_SM_217}
----------

Added the following commands to the monitor:

- rst.r - will display all reset domains and their current state
- rst.w \<domain> \<action> - will perform reset action on domain

Actions include assert, negate, and auto. Auto (autonomous) will usually assert+negate to do a complete reset.



SM-220: Coding standard fixes and test improvements {#RN_DETAIL_SM_220}
----------

Fixed some ISO21434 compliance issues (Cert-Int31C and Cert-Int30C) in the SM code base.

SM-221: Extended config flag not set for spread spectrum clocks {#RN_DETAIL_SM_221}
----------

Updated code to set the extended clock attribute if the clock supports spread spectrum settings.

SM-223: Wakeups must be masked for CPUs that do not constrain system sleep entry {#RN_DETAIL_SM_223}
----------

GPC wakeups for A55Cx may remain enabled during low-power flows that impact the A55P power state.  SM system sleep code only saves/masks/restores A55P GPC wakeups during system sleep.  This can cause the system to hang upon resume since an A55Cx with GPC wakeups enabled may start to resume before the system is ready.  The solution is to mask GPC wakeups for all CPUs during system sleep, even if those CPUs are being "forced" into system sleep (i.e., CPU is not being considered by GPC for system sleep entry). 

SM-224: Upgrade eMcem component to EAR 0.8.4 {#RN_DETAIL_SM_224}
----------

Upgraded the eMcem component (FCCU driver) to EAR 0.8.4.

SM-226: Support misc. makefile variables from the configtool {#RN_DETAIL_SM_226}
----------

Added option to generate makefile variable definitions from the configtool. The MAKE line can now contain one or more var=A|B options where the A is the name of the variable and B is the optional value. If |B is not present, then the variable is set to 1.

SM-229: Manage NETC M33S with a virtual power domain to avoid power dependencies {#RN_DETAIL_SM_229}
----------

SM previously enabled hardware-control of NETCMIX to manage the MIX power state based on the sleep mode of NETC M33S.  Agents owning the NETCMIX power domain are also allowed to forcibly power up/down the NETCMIX.  This results in potential conflicts between the power state requested by the NETC M33S logical machine and agents with permission to directly control the NETCMIX power state.

A new virtual power domain for NETC M33S was created to allow the appropriate arbitration of the NETCMIX power state between the NETC M33S logical machine and agents with permission to control the NETCMIX power sate.

SM-230: Incorrect configtool output for debug/DAP domain {#RN_DETAIL_SM_230}
----------

Modified the configool to:

- Properly handle DID ranges when generating debug DID mappings.
- Correctly map the last MBC entry to the debug DID.
- Do not map MBC/MRC entries with perm = 0/none to the debug DID.

Customers should regenerate their config headers.

SM-232: Enable Neutron NPU with SMMU {#RN_DETAIL_SM_232}
----------

Updated the i.MX95 cfg files to map NPU to a streamID of 0xD and clear KPA. Customers will need the same change if their AP code will use the SMMU for NPU.

SM-234: Upgrade GCC toolchain to Q4 2024 {#RN_DETAIL_SM_234}
----------

Support for Arm GNU Toolchain version 14.2.rel1 is added for SM. Download and extract [arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi.tar.xz](https://developer.arm.com/-/media/Files/downloads/gnu/14.2.rel1/binrel/arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi.tar.xz) for AArch32 bare-metal target (arm-none-eabi) to a directory and export it's path to 'TOOLS' shell variable.

For Example: if the toolchain (arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi.tar.xz) is installed in /tools directory then export TOOLS shell variable as "export TOOLS=/tools"

SM-235: Add ECID in SM info output {#RN_DETAIL_SM_235}
----------

The ECID value can be read from the fuse registers. The ECID register bit offsets in the fusemap is as below:
 
| Word | Packed Bit Names | Word Usage |
|---|---|---|
| 12 | ECID[127:96] | ECID3 |
| 13 | ECID[95:64] | ECID2 |
| 14 | ECID[63:32] | ECID1 |
| 15 | ECID[31:0] | ECID0 |

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
    Compiler      = gcc 14.2.1 20241119


SM-236: PMIC soft errors incorrectly reported as boot reason {#RN_DETAIL_SM_236}
----------

Modified reference board port code to mask PMIC soft fault bits when determining if a reset was cause by the PMIC. Soft faults do not result in a reset unless elevated to hard faults.

Customers have to make similar changes to their board ports.

SM-238: Add device-level restrictions for SCMI reset protocol {#RN_DETAIL_SM_238}
----------

Managment of some reset domains exposed via the SCMI reset protocol may result in a non-recoverable SoC state.  An additional layer of protection was added to the SM device layer to reject management of reset domains that may lead to said state.

In addition, the definition of the GPUMIX reset domain was missing from the SM global reset line table and has been properly populated.

SM-241: Bit width of LM number not consistent in the LMM protocol {#RN_DETAIL_SM_241}
----------

Reduced the field for num LM in the attributes from 8 bits to 5 bits to better align with the HW and reset reason limitations. Noted the current range for num LM is 1-16. The SCMI_LMM_PROTO_ATTR_NUM_LM macro is updated.

SM-242: Send LM suspend/wake notifications {#RN_DETAIL_SM_242}
----------

The NXP SCMI LMM protocol supports sending notifications when an LM suspends or resumes (aka wakes). See SCMI_LmmEvent(). Agents must request notifications via SCMI_LmmNotify() for events of type SCMI_LMM_NOTIFY_SUSPEND and/or SCMI_LMM_NOTIFY_WAKE. This is documented as conditional on hardware support as this feature requires the underlying device layer and hardware to report CPU suspend/resume events.

On i.MX9 devices, the GPC/SRC cannot report all these events and even those events it does report may be in the middle of the transition. The only solution to detect all events once completed is to poll periodically for the status of the CPUs. This change adds such polling in the SM periodic tick (currently 10ms). The result has a few implications: the notifications may occur with a delay up to the tick interval plus servicing time for other agents, and if a suspend/resume happen together within this total period then the transitions may not be detected and no notifications sent.

SM-243: Incorrect reference to WAKEUPMIX memory slice instance {#RN_DETAIL_SM_243}
----------

The MX94 MIX management info structure for WAKEUPMIX has incorrect reference to memory slice instance.  Depending on the compiler and associated optimization level, this incorrect reference may result in an invalid access to the memory slice instance during calls to configure MIX memory retention.

SM-244: Align DRAM rates to datasheet {#RN_DETAIL_SM_244}
----------

MX94 DRAM rates (MT/s) were aligned to the latest datasheet and corresponding rates programmed by OEI.

SM-245: Remove BLK_CTRL_CORTEX from A55 NS domain {#RN_DETAIL_SM_245}
----------

If the BLK_CTRL_CORTEX is assigned to A55 NS domain, the DEV_SM_PD_A55P will be assigned to A55 NS domain and Linux will then manage this power domain incorrectly. Nothing in BLK_CTRL_CORTEX needs to be controlled by Linux, so this resource assignment is removed from the A55 NS agent.

SM-246: ELE enabled temp sensor may cause SM to reset {#RN_DETAIL_SM_246}
----------

Reworked code that sets temp sensor thresholds to support the case where ELE (ROM or FW) enables the sensor and locks out SM access to the secure page on the sensor. This required configuring a threshold, clearing the filter, and then later in a timer interrupt enable the threshold interrupt. Otherwise, most of the time the interrupt would fire immediately. As this includes configuring the panic temp, often a system with the ELE change will reboot with a panic alarm when the SM starts and tries to configure the panic threshold.

SM-247: Insufficient argument checking for monitor memory (mm/md) commands {#RN_DETAIL_SM_247}
----------

For the mm/md debug monitor command, if an out-of-bound value is passed as an argument, then as per the earlier implementation, the parameter is reassign to 0x80000000 and passed to the underlying function. However, it should report an error for the invalid parameter.

Therefore, support has been added to report the error on the console when an invalid parameter is passed to the mm/md command.

SM-253: Enable GPUMIX SSI transaction blocking for clock-gated GPU module {#RN_DETAIL_SM_253}
----------

Transactions to modules with clocks gated can result in CPU hangs that are not recoverable by the SM.  For GPU module clock gating, GPUMIX SSI black hole mode is engaged by SM to ensure such accesses are terminated with a proper bus fault.

SM-255: Support extended industrial temp range {#RN_DETAIL_SM_255}
----------

Updated the market segment fuse setting 1 to mean ext. industrial rather than ext. consumer in order to match the latest data sheet. This means that fuse setting will now have a panic temp of 125C (+2C margin).

SM-256: Changes to move SHE1 to A55 core for i.MX94 {#RN_DETAIL_SM_256}
----------

On i.MX94, V2X_SHE0 MU is configured in most cfgs for use by AP-NS.
 * It was enabled for V2X-SHE0 features on previous i.MX94 ER releases.
 * Starting with the Q2 release, V2X_SHE0 MU will be switched to FCE features.
 * Hence, there will be no V2X-SHE function on Q2 in Linux if the V2X_SHE1 MU is not moved from the M7 to AP-NS.

V2X_SHE1 MU, which was configured to be owned by the M7, is now given to AP core.

The ELE FW team is planning to implement a scheme to share the MU between SHE and FCE and when these changes are delivered in a future release then this change will be reverted.

