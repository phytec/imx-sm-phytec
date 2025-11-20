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

The tool chain used with this SM is Arm GNU Toolchain Version **$TC_VER** obtained from
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

- Added name attributes to all DOM sections. Without this warnings will be generated.
- Removed assignment of PERF_DRAM to AP-S and AP-NS as DDR frequency changes are not
  supported.

Optional:

- For i.MX94, assign owners for the new motor controls.
- Defined the reaction to DDR ECC MBE errors. The default is to reset the system.
  Other options are to do nothing or to reset an LM (assuming all of DDR is used
  by one LM). NXP cfg files added an explicit configuration to reset the system.

      FAULT_DRAM          OWNER, reaction=sys_reset

Board Interface Changes {#RN_ADD_BOARD}
=======================

None

Board Implementation Changes {#RN_ADD_BOARD_IMP}
============================

Customers **must** make the following changes in their board port:

- Changes to check the power state of the A55 PF53 before trying to enable the
  sensor or read the temp. This change applies only to the i.MX95 EVK and
  customer systems that copy the EVK PMIC structure.

Optional, but recommended:

- Converted C++ style comments to C style.


