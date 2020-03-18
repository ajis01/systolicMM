# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/simulator-example-GemminiRocketConfig

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/verilator_install/install/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O1 -std=c++11 -I/home/ajis01/scratch/CS252A_Project/chipyard/toolchains/riscv-tools/include -D__STDC_FORMAT_MACROS -DTEST_HARNESS=VTestHarness -DVERILATOR \
	-I/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig -include /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.plusArgs -include /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/verilator.h \
	-include /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/ajis01/scratch/CS252A_Project/chipyard/toolchains/riscv-tools/lib -Wl,-rpath,/home/ajis01/scratch/CS252A_Project/chipyard/toolchains/riscv-tools/lib -L/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator -lfesvr -lpthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDTM \
	SimJTAG \
	SimSerial \
	SimUART \
	emulator \
	remote_bitbang \
	uart \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDTM.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimDTM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimSerial.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimSerial.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimUART.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/emulator.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/uart.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/simulator-example-GemminiRocketConfig: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-