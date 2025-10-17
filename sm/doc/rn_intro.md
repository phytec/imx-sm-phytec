Introduction {#mainpage}
============

This document contains release notes for the i.MX9 System Manager (SM). This includes:

- [Highlights](@ref RN_HIGH)
- [Changes from the previous release](@ref RN_CL)
- [Known issues](@ref RN_KN)
- [Additional info](@ref RN_ADD)

It is **critical** customers review the [Additional Info](@ref RN_ADD) section for changes
required to board ports and agent APIs.

The table below lists the release information:

| Release Info      |                             |
|-------------------|-----------------------------|
| Release name      | #SM_VERSION                 |
| Previous release  | #SM_PREV_VER                |
| Branch            | #SM_BRANCH                  |
| Build number      | #SM_BUILD                   |
| Commit ID         | #SM_COMMIT                  |
| Build date        | #SM_DATE                    |
| Supported devices | #SM_DEVICES, and phantoms   |
| Tested ELE FW     | #SM_ELE_VER                 |
| Tested mkimage    | #MKIMAGE_BRANCH             |
| Tested Linux      | #MKIMAGE_BUILD              |

<br>
<br>

Highlights {#RN_HIGH}
==========

Removed:

- **Support for i.MX95 A0/1**

Added:

- Support for sending frequency/voltage change messages to ELE
- Misc controls for motor control BLK_CTRL registers on i.MX94
- Support for DDR ECC multi-bit errors to generate a system/LM reset

Note these are highlights of the original release. These do not cover changes
in subsequent patch releases.

