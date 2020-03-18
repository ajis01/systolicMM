// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestHarness) {
    VTestHarness__Syms* __restrict vlSymsp = __VlSymsp = new VTestHarness__Syms(this, name());
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, VTestHarness___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestHarness::__Vconfigure(VTestHarness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestHarness::~VTestHarness() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestHarness::_initial__TOP__1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,95,0,3);
    VL_SIGW(__Vtemp2,159,0,5);
    VL_SIGW(__Vtemp3,159,0,5);
    VL_SIGW(__Vtemp4,159,0,5);
    VL_SIGW(__Vtemp5,159,0,5);
    VL_SIGW(__Vtemp6,159,0,5);
    VL_SIGW(__Vtemp7,159,0,5);
    VL_SIGW(__Vtemp8,159,0,5);
    VL_SIGW(__Vtemp9,159,0,5);
    VL_SIGW(__Vtemp10,159,0,5);
    VL_SIGW(__Vtemp11,159,0,5);
    VL_SIGW(__Vtemp12,159,0,5);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp1[0U] = 0x783d2564U;
    __Vtemp1[1U] = 0x72745f74U;
    __Vtemp1[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(3,__Vtemp1),
				vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp2),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp3),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp4),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp5),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp6),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp7),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp8),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp9),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp10),
				vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp11),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp12),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__2(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__2\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp13,159,0,5);
    VL_SIGW(__Vtemp14,159,0,5);
    VL_SIGW(__Vtemp15,159,0,5);
    VL_SIGW(__Vtemp16,159,0,5);
    VL_SIGW(__Vtemp17,159,0,5);
    VL_SIGW(__Vtemp18,159,0,5);
    VL_SIGW(__Vtemp19,159,0,5);
    VL_SIGW(__Vtemp20,159,0,5);
    VL_SIGW(__Vtemp21,159,0,5);
    VL_SIGW(__Vtemp22,159,0,5);
    VL_SIGW(__Vtemp23,159,0,5);
    VL_SIGW(__Vtemp24,159,0,5);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp13),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp14),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp15),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp16),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp17),
				vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp18),
				vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp19),
				vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp20),
				vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp21),
				vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp22),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp23),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp24),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__3(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__3\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp25,159,0,5);
    VL_SIGW(__Vtemp26,159,0,5);
    VL_SIGW(__Vtemp27,159,0,5);
    VL_SIGW(__Vtemp28,159,0,5);
    VL_SIGW(__Vtemp29,159,0,5);
    VL_SIGW(__Vtemp30,159,0,5);
    VL_SIGW(__Vtemp31,159,0,5);
    VL_SIGW(__Vtemp32,159,0,5);
    VL_SIGW(__Vtemp33,159,0,5);
    VL_SIGW(__Vtemp34,159,0,5);
    VL_SIGW(__Vtemp35,159,0,5);
    VL_SIGW(__Vtemp36,159,0,5);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp25),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp26),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp27),
				vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp28),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp29),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp30),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp31),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp32),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp33),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp34),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp35),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp36),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__4(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__4\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp37,159,0,5);
    VL_SIGW(__Vtemp38,159,0,5);
    VL_SIGW(__Vtemp39,159,0,5);
    VL_SIGW(__Vtemp40,159,0,5);
    VL_SIGW(__Vtemp41,159,0,5);
    VL_SIGW(__Vtemp42,159,0,5);
    VL_SIGW(__Vtemp43,159,0,5);
    VL_SIGW(__Vtemp44,159,0,5);
    VL_SIGW(__Vtemp45,159,0,5);
    VL_SIGW(__Vtemp46,159,0,5);
    VL_SIGW(__Vtemp47,159,0,5);
    VL_SIGW(__Vtemp48,159,0,5);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp37),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp38),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp39[0U] = 0x743d2564U;
    __Vtemp39[1U] = 0x6d656f75U;
    __Vtemp39[2U] = 0x6b5f7469U;
    __Vtemp39[3U] = 0x656c696eU;
    __Vtemp39[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp39),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp40[0U] = 0x743d2564U;
    __Vtemp40[1U] = 0x6d656f75U;
    __Vtemp40[2U] = 0x6b5f7469U;
    __Vtemp40[3U] = 0x656c696eU;
    __Vtemp40[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp40),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp41[0U] = 0x743d2564U;
    __Vtemp41[1U] = 0x6d656f75U;
    __Vtemp41[2U] = 0x6b5f7469U;
    __Vtemp41[3U] = 0x656c696eU;
    __Vtemp41[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp41),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp42[0U] = 0x743d2564U;
    __Vtemp42[1U] = 0x6d656f75U;
    __Vtemp42[2U] = 0x6b5f7469U;
    __Vtemp42[3U] = 0x656c696eU;
    __Vtemp42[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp42),
				vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp43[0U] = 0x743d2564U;
    __Vtemp43[1U] = 0x6d656f75U;
    __Vtemp43[2U] = 0x6b5f7469U;
    __Vtemp43[3U] = 0x656c696eU;
    __Vtemp43[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp43),
				vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp44[0U] = 0x743d2564U;
    __Vtemp44[1U] = 0x6d656f75U;
    __Vtemp44[2U] = 0x6b5f7469U;
    __Vtemp44[3U] = 0x656c696eU;
    __Vtemp44[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp44),
				vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp45[0U] = 0x743d2564U;
    __Vtemp45[1U] = 0x6d656f75U;
    __Vtemp45[2U] = 0x6b5f7469U;
    __Vtemp45[3U] = 0x656c696eU;
    __Vtemp45[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp45),
				vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp46[0U] = 0x743d2564U;
    __Vtemp46[1U] = 0x6d656f75U;
    __Vtemp46[2U] = 0x6b5f7469U;
    __Vtemp46[3U] = 0x656c696eU;
    __Vtemp46[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp46),
				vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp47[0U] = 0x743d2564U;
    __Vtemp47[1U] = 0x6d656f75U;
    __Vtemp47[2U] = 0x6b5f7469U;
    __Vtemp47[3U] = 0x656c696eU;
    __Vtemp47[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp47),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp48[0U] = 0x743d2564U;
    __Vtemp48[1U] = 0x6d656f75U;
    __Vtemp48[2U] = 0x6b5f7469U;
    __Vtemp48[3U] = 0x656c696eU;
    __Vtemp48[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp48),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__5(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__5\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp49,159,0,5);
    VL_SIGW(__Vtemp50,159,0,5);
    VL_SIGW(__Vtemp51,159,0,5);
    VL_SIGW(__Vtemp52,159,0,5);
    VL_SIGW(__Vtemp53,159,0,5);
    VL_SIGW(__Vtemp54,159,0,5);
    VL_SIGW(__Vtemp55,159,0,5);
    VL_SIGW(__Vtemp56,159,0,5);
    VL_SIGW(__Vtemp57,159,0,5);
    VL_SIGW(__Vtemp58,159,0,5);
    VL_SIGW(__Vtemp59,159,0,5);
    VL_SIGW(__Vtemp60,159,0,5);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp49[0U] = 0x743d2564U;
    __Vtemp49[1U] = 0x6d656f75U;
    __Vtemp49[2U] = 0x6b5f7469U;
    __Vtemp49[3U] = 0x656c696eU;
    __Vtemp49[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp49),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp50[0U] = 0x743d2564U;
    __Vtemp50[1U] = 0x6d656f75U;
    __Vtemp50[2U] = 0x6b5f7469U;
    __Vtemp50[3U] = 0x656c696eU;
    __Vtemp50[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp50),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp51[0U] = 0x743d2564U;
    __Vtemp51[1U] = 0x6d656f75U;
    __Vtemp51[2U] = 0x6b5f7469U;
    __Vtemp51[3U] = 0x656c696eU;
    __Vtemp51[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp51),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp52[0U] = 0x743d2564U;
    __Vtemp52[1U] = 0x6d656f75U;
    __Vtemp52[2U] = 0x6b5f7469U;
    __Vtemp52[3U] = 0x656c696eU;
    __Vtemp52[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp52),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp53[0U] = 0x743d2564U;
    __Vtemp53[1U] = 0x6d656f75U;
    __Vtemp53[2U] = 0x6b5f7469U;
    __Vtemp53[3U] = 0x656c696eU;
    __Vtemp53[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp53),
				vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp54[0U] = 0x743d2564U;
    __Vtemp54[1U] = 0x6d656f75U;
    __Vtemp54[2U] = 0x6b5f7469U;
    __Vtemp54[3U] = 0x656c696eU;
    __Vtemp54[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp54),
				vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp55[0U] = 0x743d2564U;
    __Vtemp55[1U] = 0x6d656f75U;
    __Vtemp55[2U] = 0x6b5f7469U;
    __Vtemp55[3U] = 0x656c696eU;
    __Vtemp55[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp55),
				vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp56[0U] = 0x743d2564U;
    __Vtemp56[1U] = 0x6d656f75U;
    __Vtemp56[2U] = 0x6b5f7469U;
    __Vtemp56[3U] = 0x656c696eU;
    __Vtemp56[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp56),
				vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp57[0U] = 0x743d2564U;
    __Vtemp57[1U] = 0x6d656f75U;
    __Vtemp57[2U] = 0x6b5f7469U;
    __Vtemp57[3U] = 0x656c696eU;
    __Vtemp57[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp57),
				vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp58[0U] = 0x743d2564U;
    __Vtemp58[1U] = 0x6d656f75U;
    __Vtemp58[2U] = 0x6b5f7469U;
    __Vtemp58[3U] = 0x656c696eU;
    __Vtemp58[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp58),
				vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp59[0U] = 0x743d2564U;
    __Vtemp59[1U] = 0x6d656f75U;
    __Vtemp59[2U] = 0x6b5f7469U;
    __Vtemp59[3U] = 0x656c696eU;
    __Vtemp59[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp59),
				vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp60[0U] = 0x743d2564U;
    __Vtemp60[1U] = 0x6d656f75U;
    __Vtemp60[2U] = 0x6b5f7469U;
    __Vtemp60[3U] = 0x656c696eU;
    __Vtemp60[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp60),
				vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__6(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__6\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp61,159,0,5);
    VL_SIGW(__Vtemp62,159,0,5);
    VL_SIGW(__Vtemp63,95,0,3);
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp61[0U] = 0x743d2564U;
    __Vtemp61[1U] = 0x6d656f75U;
    __Vtemp61[2U] = 0x6b5f7469U;
    __Vtemp61[3U] = 0x656c696eU;
    __Vtemp61[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp61),
				vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151693
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:373164
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__intsource__DOT__AsyncResetRegVec_w2_i0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__intsource_1__DOT__AsyncResetRegVec_w1_i0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__intsource_2__DOT__AsyncResetRegVec_w1_i0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/plusarg_reader.v:17
    __Vtemp62[0U] = 0x733d2564U;
    __Vtemp62[1U] = 0x79636c65U;
    __Vtemp62[2U] = 0x72655f63U;
    __Vtemp62[3U] = 0x785f636fU;
    __Vtemp62[4U] = 0x6d61U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp62),
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.v:38
    __Vtemp63[0U] = 0x673d2573U;
    __Vtemp63[1U] = 0x72746c6fU;
    __Vtemp63[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64,VL_CVT_PACK_STR_NW(3,__Vtemp63),
			       vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fuartlog);// Function: uart_init at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.v:40
    vlSymsp->TOP____024unit.__Vdpiimwrap_uart_init_TOP____024unit(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fuartlog, vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fuartno);
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_ = 0U;
    }
}

void VTestHarness::_initial__TOP__7(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__7\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__intsource__DOT__AsyncResetRegVec_w1_i0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
}

void VTestHarness::_initial__TOP__8(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__8\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
}

void VTestHarness::_initial__TOP__9(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__9\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ = 0U;
    }
}

void VTestHarness::_initial__TOP__10(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__10\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151751
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ = 0U;
    }
}
