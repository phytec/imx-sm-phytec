## ###################################################################
##
## Copyright 2023-2024 NXP
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

CPPCHECK_IGNORE += -iCMSIS
CPPCHECK_IGNORE += -i$(ROOT_DIR)/drivers/lpuart
CPPCHECK_IGNORE += -i$(ROOT_DIR)/drivers/lpi2c
CPPCHECK_IGNORE += -i$(ROOT_DIR)/drivers/mu1
CPPCHECK_IGNORE += -i$(ROOT_DIR)/drivers/rgpio
CPPCHECK_DEFINE += -USIMU -DTRDC_LOAD -DCPPCHECK
CPPCHECK_DEFINE += -DCPU_MIMX95_cm33
CPPCHECK_DEFINE += -DCPU_MIMX94_cm33
CPPCHECK_DEFINE += -UDOX -UDOXYGEN
CPPCHECK_DEFINE += -U__cplusplus
CPPCHECK_RULES += --enable=warning,performance,style
CPPCHECK_RULES += --inline-suppr
CPPCHECK_RULES += --suppress=unreadVariable
CPPCHECK_RULES += --suppress=unusedStructMember
CPPCHECK_RULES += --suppress=redundantAssignment
CPPCHECK_RULES += --suppress=nullPointerRedundantCheck
CPPCHECK_RULES += --suppress=knownConditionTrueFalse
CPPCHECK_RULES += --suppress=preprocessorErrorDirective

cppcheck :
	@echo "Checking ...."
	$(AT)cppcheck --error-exitcode=1 -q -j 4 --std=c99 $(CPPCHECK_DEFINE) $(CPPCHECK_IGNORE) $(CPPCHECK_RULES) --template='{file}:{line}: ({id}) {message}' .

