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
  Pythia_LIB	= -L$(GENSERdir)/lib -Wl,-rpath -Wl,$(GENSERdir)/lib \
                  -lpythia6_403 -lpythia6_403_dumm -lpythia6_403_pdfdumm
  Herwig_LIB	= -L$(GENSERdir)/lib -Wl,-rpath -Wl,$(GENSERdir)/lib \
                  -lherwig6_510 -lherwig6_510_dumm -lherwig6_510_pdfdumm

################################################################################ Compiler options
#
  CXX           = g++
  F77		= /home/karna/anaconda3/envs/MG5/bin/x86_64-conda-linux-gnu-gfortran
  INCLUDES 	= -I$(HepMCdir)/include -I$(CLHEPdir)/include
  CXXFLAGS      =  -ansi -pedantic -Wall -fvisibility-inlines-hidden -fmessage-length=0 -march=nocona -mtune=haswell -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O2 -ffunction-sections -pipe -isystem /home/karna/anaconda3/envs/MG5/include $(INCLUDES)
ifeq "$(CXX)" "g++"
   FLAGS 	= $(DFLG) -fno-second-underscore $(INCDIR)
else
  FLAGS 	= $(DFLG) $(INCDIR)
endif

  LINK_LIBS     = -Wl,-O2 -Wl,--sort-common -Wl,--as-needed -Wl,-z,relro -Wl,-z,now -Wl,--disable-new-dtags -Wl,--gc-sections -Wl,--allow-shlib-undefined -Wl,-rpath,/home/karna/anaconda3/envs/MG5/lib -Wl,-rpath-link,/home/karna/anaconda3/envs/MG5/lib -L/home/karna/anaconda3/envs/MG5/lib 

UNAME = $(shell uname)
ifneq "$(UNAME)" "Darwin"
  LINK_LIBS     += -Wl,-rpath -Wl,$(HepMCdir)/lib
endif

ifeq "$(UNAME)" "Linux"
ifeq "$(F77)" "gfortran"
    LINK_LIBS     += -lgfortran
else
    LINK_LIBS     += -lg2c 
endif
endif

  initpydata_OBJ= initpydata.o
  pythia_OBJ    = initPythia.o initpydata.o
  HDRS          = $(HepMCdir)/include/HepMC/*.h *.h
  EXAMPLES	= example_MyHerwig.exe	\
		  example_MyPythia.exe	\
		  example_MyPythiaOnlyToHepMC.exe	\
		  example_PythiaStreamIO.exe	\
		  testPythiaCopies.exe	\
		  testHerwigCopies.exe

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
.SUFFIXES:      .o .cxx .f .exe
all:	$(EXAMPLES)

example_MyHerwig.exe: example_MyHerwig.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) example_MyHerwig.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Herwig_LIB) $(LINK_LIBS) -o $@

example_MyPythia.exe: $(initpydata_OBJ) $(pythia_OBJ) example_MyPythia.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) $(pythia_OBJ) example_MyPythia.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Pythia_LIB) $(LINK_LIBS) -o $@

example_MyPythiaOnlyToHepMC.exe: $(initpydata_OBJ) $(pythia_OBJ) example_MyPythiaOnlyToHepMC.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) $(pythia_OBJ) example_MyPythiaOnlyToHepMC.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Pythia_LIB) $(LINK_LIBS) -o $@

example_PythiaStreamIO.exe: $(initpydata_OBJ) $(pythia_OBJ) example_PythiaStreamIO.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) $(pythia_OBJ) example_PythiaStreamIO.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Pythia_LIB) $(LINK_LIBS) -o $@

testPythiaCopies.exe: $(initpydata_OBJ) $(pythia_OBJ) testPythiaCopies.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) $(pythia_OBJ) testPythiaCopies.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Pythia_LIB) $(LINK_LIBS) -o $@

testHerwigCopies.exe: testHerwigCopies.o
	@echo "Building $@ ..."
	$(CXX) $(FLAGS) testHerwigCopies.o \
		$(HepMClib) $(HepMCfiolib) \
	        $(Herwig_LIB) $(LINK_LIBS) -o $@

###############################################################################
# instructions for building a .o file from a .cxx file
#
.cc.o:         $(HDRS) $<
	@echo "Compiling $< with $(CXX) ..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

###############################################################################
# instructions for building a .o file from a .f file
#
.f.o:           $<
	@echo "Compiling $< with $(F77) ..."
	@$(F77) $(FLAGS) -c $< -o $@

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

