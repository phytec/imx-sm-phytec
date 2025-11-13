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

- Added num agents to attributes returned by SCMI_LmmAttributes() - this returns the
  number of agents an LM contains
- Reduced SCMI_LMM_PROTO_ATTR_NUM_LM() to five bits as the max is current 16.
- Added SCMI_LmmResetVectorSet() to allow an agent without CPU permissions but with
  LM permissions to configure the boot address of booting CPUs

Configuration Changes {#RN_ADD_CONFIG}
=====================

The following are cfg file changes that customers **must** make to their cfg files
and rebuild their config headers.

On i.MX95:

- Enabled NETC, NPU, USB, SDHC traffic to go to the SMMU (kpa=0); these changes are
  required to match the associated Linux BSP
- Removed erroneous V2X_FH assignment to AP-NS
- Moved V2X_SHE1 from the M7 to AP-NS; not doing this will require Linux BSP changes

On i.MX94:

- BLK_CTRL_CORTEX moved to SM ownership; required else Linux will power off the
  A55 platform by accident
- Power domain for the M33S changed from PD_NETC to PD_M33S (new virtual domain)

On all:

- Split EDMA2_CH60_61 and DMA2_CH62_63 into A and B sides as HW allows each to have
  unique assignment

Configtool version incremented to 2; **requires** customer configs to be rebuilt.

Optional:

- Removed extra notification queue depth settings (only first applies)
- Support make variable specifications in the cfg file, use var=no_rx_replica to
  disable the DDR RX replica workaround

Board Interface Changes {#RN_ADD_BOARD}
=======================

- BRD_SM_SupplyLevelSet() and BRD_SM_SupplyLevelGet() microvolt parameter changed
  to integer (int32_t); mostly done to eliminate CERT-C issues with conversions but
  also to allow boards to have configurable negative voltages if needed.

Board Implementation Changes {#RN_ADD_BOARD_IMP}
============================

Customers **must** make the following changes in their board port:

- Changes to voltage supply functions to support the change to integer voltages
- Mask PMIC soft fault bits when determining if a reset was cause by the PMIC
- Fix issue with external RTC (PCA2131) alarm interrupt

Optional, but recommended:

- Many CERT-C changes

