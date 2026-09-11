# PYTHIA configuration file.
# Generated on mar 21 jul 2026 20:12:09 CST with the following command:
# ./configure --prefix=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/pythia8/ --with-hepmc2=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc --with-hepmc2-include=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/include --with-gzip=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib --cxx-common='-ldl -fPIC -lstdc++ -std=c++11 -O2 -pthread -DHEPMC2HACK -DHEPMC2'

# Install directory prefixes.
PREFIX_BIN=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/pythia8//bin
PREFIX_INCLUDE=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/pythia8//include
PREFIX_LIB=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/pythia8//lib
PREFIX_SHARE=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/pythia8//share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
CXX=g++
CXX_DTAGS=-Wl,--disable-new-dtags
CXX_COMMON=-ldl -fPIC -lstdc++ -std=c++11 -O2 -pthread -DHEPMC2HACK -DHEPMC2 -DGZIP -I/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib/include
CXX_SHARED=-shared
CXX_SONAME=-Wl,-soname,
LIB_SUFFIX=.so
OBJ_COMMON=

EVTGEN_USE=false
EVTGEN_CONFIG=
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

FASTJET3_USE=false
FASTJET3_CONFIG=
FASTJET3_BIN=
FASTJET3_INCLUDE=
FASTJET3_LIB=

HEPMC2_USE=true
HEPMC2_CONFIG=
HEPMC2_BIN=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/
HEPMC2_INCLUDE=-I/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/include
HEPMC2_LIB=-L/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib -Wl,-rpath,/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc/lib -lHepMC

HEPMC3_USE=false
HEPMC3_CONFIG=
HEPMC3_BIN=
HEPMC3_INCLUDE=
HEPMC3_LIB=

LHAPDF5_USE=false
LHAPDF5_CONFIG=
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=

LHAPDF6_USE=false
LHAPDF6_CONFIG=
LHAPDF6_BIN=
LHAPDF6_INCLUDE=
LHAPDF6_LIB=

POWHEG_USE=false
POWHEG_CONFIG=
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

RIVET_USE=false
RIVET_CONFIG=
RIVET_BIN=
RIVET_INCLUDE=
RIVET_LIB=

YODA_USE=false
YODA_CONFIG=
YODA_BIN=
YODA_INCLUDE=
YODA_LIB=

ROOT_USE=false
ROOT_CONFIG=
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

GZIP_USE=true
GZIP_CONFIG=
GZIP_BIN=/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib/
GZIP_INCLUDE=-I/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib/include
GZIP_LIB=-L/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib/lib -Wl,-rpath,/home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/zlib/lib -lz

PYTHON_USE=false
PYTHON_CONFIG=
PYTHON_BIN=
PYTHON_INCLUDE=
PYTHON_LIB=

MG5MES_USE=false
MG5MES_CONFIG=
MG5MES_BIN=
MG5MES_INCLUDE=
MG5MES_LIB=

OPENMP_USE=false
OPENMP_CONFIG=
OPENMP_BIN=
OPENMP_INCLUDE=
OPENMP_LIB=

MPICH_USE=false
MPICH_CONFIG=
MPICH_BIN=
MPICH_INCLUDE=
MPICH_LIB=

HDF5_USE=false
HDF5_CONFIG=
HDF5_BIN=
HDF5_INCLUDE=
HDF5_LIB=

HIGHFIVE_USE=false
HIGHFIVE_CONFIG=
HIGHFIVE_BIN=
HIGHFIVE_INCLUDE=
HIGHFIVE_LIB=
