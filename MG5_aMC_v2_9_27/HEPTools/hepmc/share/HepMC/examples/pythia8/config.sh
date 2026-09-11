#!/bin/sh
if [ ! $?LD_LIBRARY_PATH ]; then
  export LD_LIBRARY_PATH=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib
fi
if [ $?LD_LIBRARY_PATH ]; then
  export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib
fi
export PYTHIA8DATA=${PYTHIA8_HOME}/xmldoc
