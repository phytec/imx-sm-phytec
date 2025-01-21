Additional Notes {#RN_ADD}
================

This section details any additional notes about the original release. These do not cover
changes in patch releases.

General {#RN_ADD_GEN}
=======

When the SM is compiled for release into production devices, it is **critical** that this
is done without the debug monitor (M=0). The default is monitor enabled (M=1). For example:

	make config=mx95evk M=0

Turning off the debug monitor will eliminate the linking of the standard C library.

The tool chain used with this SM is Arm GNU Toolchain Version **12.3.Rel1** obtained from 
[Arm GNU Toolchain](https://developer.arm.com/Tools%20and%20Software/GNU%20Toolchain).
Use the x86_64 Linux hosted AArch32 bare-metal target (arm-none-eabi) toolchain.

Supported development environments include Ubuntu 2020.04, 2022.04, and 2024.04. Supported
versions of doxygen include 1.8.17, 1.9.1, and 1.9.8.

SCMI API Changes {#RN_ADD_API}
================

None

Configuration Changes {#RN_ADD_CONFIG}
=====================

The following are cfg file changes that customers **must** make to their cfg files
and rebuild their config headers.

- Move access to BLK_CTRL_GPUMIX from any clients to the SM (LM0).
- Add nodbg to the ELE DDR region (if defined).
- Define V2X DDR region to contain the V2X FW (if using V2X).
- Add power domain start for any Cortex-M that might have FW loaded by another core.

Board Interface Changes {#RN_ADD_BOARD}
=======================

None

Board Implementation Changes {#RN_ADD_BOARD_IMP}
============================

Customers **must** make the following changes in their board port:

- Convert to use of the device fuse API.
- Move BOARD_PERF_VDROP definition from brd_sm.c to brd_sm.h.

