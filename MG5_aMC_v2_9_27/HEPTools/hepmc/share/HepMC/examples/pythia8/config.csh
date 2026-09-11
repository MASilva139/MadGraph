#!/bin/csh
if( ! $?LD_LIBRARY_PATH ) then
  setenv LD_LIBRARY_PATH /home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib
else
  setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib
endif
setenv PYTHIA8DATA ${PYTHIA8_HOME}/xmldoc
