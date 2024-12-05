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
| [SM-7](https://jira.sw.nxp.com/projects/SM/issues/SM-7) | Add support for i.MX943 |   | | |
| [SM-9](https://jira.sw.nxp.com/projects/SM/issues/SM-9) | Add support for the i.MX943 EVK |   | | |

Improvement {#RN_CL_IMP}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-75](https://jira.sw.nxp.com/projects/SM/issues/SM-75) | Do not start ANA TMPSNS if ELE starts |   | Y | Y |
| [SM-178](https://jira.sw.nxp.com/projects/SM/issues/SM-178) | Add V2X command to debug monitor [[detail]](@ref RN_DETAIL_SM_178) |   | Y | Y |
| [SM-182](https://jira.sw.nxp.com/projects/SM/issues/SM-182) | Support device abstraction to fuses/features |   | Y | Y |
| [SM-183](https://jira.sw.nxp.com/projects/SM/issues/SM-183) | Add versioning and additional checks to the configtool [[detail]](@ref RN_DETAIL_SM_183) |   | Y | Y |
| [SM-184](https://jira.sw.nxp.com/projects/SM/issues/SM-184) | Deassert the GPU reset when the GPUMIX is powered up [[detail]](@ref RN_DETAIL_SM_184) |   | | Y |
| [SM-187](https://jira.sw.nxp.com/projects/SM/issues/SM-187) | Misc. updates to SM configurations |   | Y | Y |
| [SM-190](https://jira.sw.nxp.com/projects/SM/issues/SM-190) | Misc. coding standards fixes |   | Y | Y |
| [SM-191](https://jira.sw.nxp.com/projects/SM/issues/SM-191) | Misc. unit test improvements |   | Y | Y |

Silicon Workaround {#RN_CL_REQ}
------------

These are a mix of silicon errata workarounds and recommended usage changes.

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-196](https://jira.sw.nxp.com/projects/SM/issues/SM-196) | Provide transition latency as property of SCMI performance level |   | Y | Y |

Documentation {#RN_CL_DOC}
------------

| Key     | Summary                        | Patch | MX95<br> (A0) | MX95<br> (A1) |
|------------|-------------------------------|-------|---|---|
| [SM-193](https://jira.sw.nxp.com/projects/SM/issues/SM-193) | SM 2025Q1 documentation updates |   | Y | Y |

Details {#CL_DETAIL}
=======

This section provides details for select changes.

SM-178: Add V2X command to debug monitor {#RN_DETAIL_SM_178}
----------

Add two v2x monitor commands used for debug of V2X.
- v2x info
- v2x ping

SM-183: Add versioning and additional checks to the configtool {#RN_DETAIL_SM_183}
----------

This makes two changes:

- A version is written to the config files when the configtool is run. This version is then checked when the SM is compiled and an error generated if they do not match. This ensures old config files are not used. The version will updated when the configtool is changed.

- The configtool now checks to ensure the LM and SCMI_AGENT definitions are in numerical order. The tool will generate an error if not.

SM-184: Deassert the GPU reset when the GPUMIX is powered up {#RN_DETAIL_SM_184}
----------

SM was modified to take the GPU out of reset when the GPUMIX is powered on. This requires the SM own access to the BLK_CTRL_CPU module. Access to this module is removed from the AP. Customer need to make the same change to their SM cfg files.

Note the STRIPING_GRANULE and TEXFMT  fields in the BLK_CTRL_GPU are left at their reset state and the AP cannot set these. ANy need to change these would have to be done in the SM config_user.h file.

