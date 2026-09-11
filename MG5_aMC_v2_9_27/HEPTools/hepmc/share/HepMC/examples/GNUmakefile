################################################################################
# Makefile for building a HepMC executable with the gcc compiler
#
# Matt.Dobbs@CERN.CH  1.2000
#
# This makefiles also works to compile the example programs.
# I.E.: syntax for compiling the example_MyPythia.cc example:
#       gmake example_MyPythia.exe
# or simply   gmake all     to compile all examples.
#
################################################################################ Define directory paths 
#    You may have to change GENSERdir and/or other variables
#
  HepMCdir             = /home/karna/Descargas/madgraph/MG5_aMC_v2_9_27/HEPTools/hepmc
  HepMClib             = -L$(HepMCdir)/lib -lHepMC
  HepMCfiolib          = -L$(HepMCdir)/lib -lHepMCfio
  GENSERdir            =  
  CLHEPdir             =  

################################################################################ Compiler options
#
  CXX           = g++
  F77		= /home/karna/anaconda3/envs/MG5/bin/x86_64-conda-linux-gnu-gfortran
  INCLUDES 	= -I$(HepMCdir)/include -I$(CLHEPdir)/include
  CXXFLAGS      =  -ansi -pedantic -Wall -fvisibility-inlines-hidden -fmessage-length=0 -march=nocona -mtune=haswell -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O2 -ffunction-sections -pipe -isystem /home/karna/anaconda3/envs/MG5/include $(INCLUDES)
  FLAGS 	= $(DFLG) $(INCDIR)
ifeq "$(CXX)" "g++"
   FLAGS 	+= -fno-second-underscore
endif

  EXAMPLES	= example_BuildEventFromScratch.exe	\
		  example_EventSelection.exe	\
		  example_UsingIterators.exe
  LINK_LIBS     = -Wl,-O2 -Wl,--sort-common -Wl,--as-needed -Wl,-z,relro -Wl,-z,now -Wl,--disable-new-dtags -Wl,--gc-sections -Wl,--allow-shlib-undefined -Wl,-rpath,/home/karna/anaconda3/envs/MG5/lib -Wl,-rpath-link,/home/karna/anaconda3/envs/MG5/lib -L/home/karna/anaconda3/envs/MG5/lib 
  UNAME = $(shell uname)

ifneq (,$(strip $(CLHEPdir)))
  EXAMPLES	+= example_VectorConversion.exe
ifeq "$(UNAME)" "Darwin"
  CLHEP_LIB     = -L$(CLHEPdir)/lib -lCLHEP 
else
  CLHEP_LIB     = -L$(CLHEPdir)/lib -lCLHEP -Wl,-rpath -Wl,$(CLHEPdir)/lib
endif  
endif

ifeq "$(UNAME)" "Darwin"
else
  LINK_LIBS     += -Wl,-rpath -Wl,$(HepMCdir)/lib
endif

  HDRS          = $(HepMCdir)/include/HepMC/*.h *.h

################################################################################ 

PLATFORM=$(shell uname)

ifeq "$(PLATFORM)" "Linux"
    LINK_LIBS     += -lg2c 
endif

################################################################################ definition of the compiler options
#	-I location of directory containing include files
#	-L location of directory containing libraries
#       -lname include the library from -L location called libname.a
#	   -lg2c is the library containing info on converting fortran to C
#          -lf   is the library containing the intrinsic for HPUX only.
#	-shared make a shared library as output
#	-fPIC produce position independent code
#        necessary on some platforms (including HPUX) for -shared
# 	-fpic ^^ same(?)
#	-O optimizes
#	-g produces output for the debugger
#       -pg produces output for gprof profiler
#       note: if you want to see all warnings and ensure ansi standard 
#             compatibility, use:
#             -pipe -ansi -pedantic -fnonnull-objects \
#             -W -Wall -Wwrite-strings -Wpointer-arith -Wnested-externs \
#             -Woverloaded-virtual -Wbad-function-cast -fnonnull-objects
#       The proper order for cernlib libraries is:
#       -lpawlib -lgraflib -lgrafX11 -lmathlib -lkernlib -lpacklib -ljetset74
#
# makefile syntax:
#        for target thedir/target.suf from source anotherdir/source.suf2
#        ${*D}  = thedir
#        ${*F}  = target
#        $*     = thedir/target
#        $@     = thedir/target.suf
#        $<     = anotherdir/source.suf2
#  

###############################################################################
#
.SUFFIXES:      .o .cc .exe
all:	$(EXAMPLES)

example_BuildEventFromScratch.exe: example_BuildEventFromScratch.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) example_BuildEventFromScratch.o \
		$(HepMClib) \
	        $(LINK_LIBS) -o $@

example_VectorConversion.exe: example_VectorConversion.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) example_VectorConversion.o \
		$(HepMClib) \
		$(CLHEP_LIB) \
	        $(LINK_LIBS) -o $@

example_EventSelection.exe: example_EventSelection.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) example_EventSelection.o \
		$(HepMClib) \
	        $(LINK_LIBS) -o $@

example_UsingIterators.exe: example_UsingIterators.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) example_UsingIterators.o \
		$(HepMClib) \
	        $(LINK_LIBS) -o $@

###############################################################################
# instructions for building a .o file from a .cc file
#
.cc.o:         $(HDRS) $<
	@echo "Compiling $< with $(CXX) ..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

###############################################################################
# gmake clean       removes all garbage from HepMC directories.
#
clean:
	rm -f *.o

###############################################################################
# gmake distclean       removes all compiled libraries, executables, +garbage
#                       to prepare the package for distribution
distclean: 
	$(MAKE) clean --no-print-directory
	rm -f *.exe
	rm -f *.dat

