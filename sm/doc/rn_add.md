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

Made some API additions:

- LP compute flag for the SCMI_CpuSleepModeSet() function. This can be set
  with the SCMI_CPU_FLAGS_LP_COMPUTE() macro.
- SCMI MISC protocol function, SCMI_MiscDdrInfoGet(), that can be used to get
  info about the DDR memory regions in the system. The MISC protocol version
  updated to 1.1.

Configuration Changes {#RN_ADD_CONFIG}
=====================

The following are cfg file changes that customers **must** make to their cfg files
and rebuild their config headers.

- Marked SM (LM0) API access as none.
- Updated the list of clocks used by the SM.

Optional:

- Added access to BRD_SM_CTRL_TEST_A for all agents. Used for testing.

Note the cfg tool was enhanced to check for agent access to SM clocks. In addition,
some clock associations removed for CPUs. Customers must rebuild their headers to
ensure agents do not have control of CPU clocks via the SCMI clock protocol. These
should be managed via the SCMI performance protocol.

Board Interface Changes {#RN_ADD_BOARD}
=======================

None

Board Implementation Changes {#RN_ADD_BOARD_IMP}
============================

Customers **must** make the following changes in their board port:

- Move BOARD_SWI_IRQn definition to use SWI_0_IRQn
- On MX95, renamed LPCAC_PC to M33_CACHE_CTRLPC and LPCAC_PS to M33_CACHE_CTRLPS. 

Optional, but recommended:

- Added error log support to board init functions.
- If using the PCA2131 RTC, fix added to enable battery monitoring at boot.
- Added BRD_SM_ControlAction() and BRD_SM_CTRL_TEST_A to facilitate testing.
- Lots of coding standards fixes.

