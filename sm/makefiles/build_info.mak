## ###################################################################
##
## Copyright 2023-2025 NXP
##
## Redistribution and use in source and binary forms, with or without modification,
## are permitted provided that the following conditions are met:
##
## o Redistributions of source code must retain the above copyright notice, this list
##   of conditions and the following disclaimer.
##
## o Redistributions in binary form must reproduce the above copyright notice, this
##   list of conditions and the following disclaimer in the documentation and/or
##   other materials provided with the distribution.
##
## o Neither the name of the copyright holder nor the names of its
##   contributors may be used to endorse or promote products derived from this
##   software without specific prior written permission.
##
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
## ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
## WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
## DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
## ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
## (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
## LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
## ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
## (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
## SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
##
##
## ###################################################################

SM_VERSION = imx_sm_2025q1
SM_PREV_VER = imx_sm_2024q4
SM_SNAP = 0

SM_DEVICES = i.MX95 (A0), i.MX95 (A1), i.MX94 (A0)
SM_ELE_VER = 2.0.1

MKIMAGE_BRANCH = lf-6.12.3_1.0.0
MKIMAGE_BUILD = Linux_IMX_6.12.3_1.0.0_RC3
MKIMAGE_N = latest

GIT_EXISTS=$(shell (git rev-parse --show-cdup 2>/dev/null) && echo 1 || echo 0)

$(OUT)/build_info.h :
	@echo "Generating $@"
	$(AT)mkdir -p $(dir $@)
	$(AT)/bin/echo '#ifndef BUILD_INFO_H' > $@
	$(AT)/bin/echo '#define BUILD_INFO_H' >> $@
	$(AT)/bin/echo '' >> $@
	$(AT)/bin/echo '#define SM_VERSION "$(SM_VERSION)"' >> $@
	$(AT)/bin/echo '#define SM_PREV_VER "$(SM_PREV_VER)"' >> $@
	$(AT)/bin/echo '#define SM_SNAP $(SM_SNAP)U' >> $@
	$(AT)/bin/echo '' >> $@
	$(AT)/bin/echo '#define SM_DEVICES "$(SM_DEVICES)"' >> $@
	$(AT)/bin/echo '#define SM_ELE_VER "$(SM_ELE_VER)"' >> $@
	$(AT)/bin/echo -n '#define ' >> $@
	$(AT)-grep -o "configVer = [0-9]*" ./configs/configtool.pl >> $@
	$(AT)/bin/echo '' >> $@
ifeq (0,$(GIT_EXISTS))
	$(AT)/bin/echo '#define SM_BRANCH Unknown' >> $@
	$(AT)/bin/echo '#define SM_BUILD 0UL' >> $@
	$(AT)/bin/echo '#define SM_COMMIT 0x0UL' >> $@
else
	$(AT)/bin/echo -n '#define SM_BRANCH ' >> $@
ifeq ($(origin BRANCH),undefined)
	$(AT)-git rev-parse --abbrev-ref HEAD >> $@
else
	$(AT)/bin/echo $(BRANCH) >> $@
endif
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo '' >> $@
	$(AT)/bin/echo -n '#define SM_BUILD ' >> $@
	$(AT)-git rev-list --count --first-parent HEAD >> $@
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo 'UL' >> $@
	$(AT)/bin/echo -n '#define SM_COMMIT 0x' >> $@
	$(AT)-git rev-parse --short=8 HEAD >> $@
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo 'UL' >> $@
endif
	$(AT)date +'#define SM_DATE "%b %d %C%y"' >> $@
	$(AT)date +'#define SM_TIME "%T"' >> $@
	$(AT)/bin/echo '' >> $@
	$(AT)/bin/echo '#define SM_MKIMAGE_BRANCH "$(MKIMAGE_BRANCH)"' >> $@
	$(AT)/bin/echo '#define SM_MKIMAGE_BUILD "$(MKIMAGE_BUILD)"' >> $@
	$(AT)/bin/echo '#define SM_MKIMAGE_N "$(MKIMAGE_N)"' >> $@
	$(AT)/bin/echo '' >> $@
	$(AT)/bin/echo '#endif' >> $@
	$(AT)-sed -i 's/configVer = \([0-9]*\)/SM_CONFIG_VER \1U/g' $@ 

rn_info.sed :
	$(AT)/bin/echo '' > $@
	$(AT)/bin/echo "sed -i 's/\#SM_VERSION/$(SM_VERSION)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#SM_PREV_VER/$(SM_PREV_VER)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#SM_DEVICES/$(SM_DEVICES)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#SM_ELE_VER/$(SM_ELE_VER)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#SM_CONFIG_VER/$(SM_CONFIG_VER)/g' rn.md" >> $@
	$(AT)/bin/echo -n "sed -i 's/\#SM_BRANCH/" >> $@
ifeq ($(origin BRANCH),undefined)
	$(AT)-git rev-parse --abbrev-ref HEAD >> $@
else
	$(AT)/bin/echo $(BRANCH) >> $@
endif
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo "/g' rn.md" >> $@
	$(AT)/bin/echo -n "sed -i 's/\#SM_BUILD/" >> $@
	$(AT)-git rev-list --count --first-parent HEAD >> $@
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo "/g' rn.md" >> $@
	$(AT)/bin/echo -n "sed -i 's/\#SM_COMMIT/" >> $@
	$(AT)-git rev-parse --short=8 HEAD >> $@
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo "/g' rn.md" >> $@
	$(AT)/bin/echo -n "sed -i 's/\#SM_DATE/" >> $@
	$(AT)date +'%b %d %C%y' >> $@
	$(AT)-perl -pi -e 'chomp if eof' $@
	$(AT)/bin/echo "/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#MKIMAGE_BRANCH/$(MKIMAGE_BRANCH)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/\#MKIMAGE_BUILD/$(MKIMAGE_BUILD)/g' rn.md" >> $@
	$(AT)/bin/echo "sed -i 's/_RC[0-9]//g' rn.md" >> $@
	$(AT)/bin/echo '' >> $@

