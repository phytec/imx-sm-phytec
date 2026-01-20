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

# SMCT is expected as a path to SM Config Tool root directory
ifdef SMCT
# SMCT needs python3 or python in general
ifndef PYTHON3
	PY3_ERRCODE=$(shell (python3 --version 1>/dev/null 2>/dev/null); echo $$?)
ifeq (0, $(PY3_ERRCODE))
	PYTHON3 := python3
else
	PYTHON3 := python
endif
endif
	# probe running SMCT
	SMCT_ERRCODE=$(shell ($(PYTHON3) $(SMCT)/smct.py --version 1>/dev/null 2>/dev/null); echo $$?)
else
	SMCT_ERRCODE=1
endif

# Generate configuration using SMCT (if specified) or using default configtool.pl
cfg :
ifeq (0,$(SMCT_ERRCODE))
	@echo "Generating ./configs/$(CONFIG) using smct.py"
	$(AT)$(PYTHON3) $(SMCT)/smct.py -f --sm_dir $(ROOT_DIR) --load_cfg $(CONFIG).cfg -o $(CONFIG)
else
ifdef SMCT
	@echo "Warning: SMCT tool directory specified ($(SMCT)) but '$(PYTHON3) smct.py' has failed"
endif
	@echo "Generating ./configs/$(CONFIG) using configtool.pl"
	$(AT)$(ROOT_DIR)/configs/configtool.pl -i ./configs/$(CONFIG).cfg -o ./configs/$(CONFIG)
endif

# Generate configuration overview using configtool.pl
info :
	$(AT)$(ROOT_DIR)/configs/configinfo.pl -i ./configs/$(CONFIG).cfg

