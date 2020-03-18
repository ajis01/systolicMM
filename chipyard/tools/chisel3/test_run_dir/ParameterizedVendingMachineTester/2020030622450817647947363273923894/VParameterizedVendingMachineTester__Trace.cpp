// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


//======================

void VParameterizedVendingMachineTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VParameterizedVendingMachineTester::traceChgThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedVendingMachineTester::traceChgThis__2(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))));
	vcdp->chgBit  (c+2,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				   >> 1U))));
	vcdp->chgBit  (c+3,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				   >> 2U))));
	vcdp->chgBit  (c+4,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				   >> 3U))));
	vcdp->chgBus  (c+5,(((8U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
			      ? 0x19U : ((4U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					  ? 0xaU : 
					 ((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					   ? 5U : (
						   (1U 
						    & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
						    ? 1U
						    : 0U))))),8);
    }
}

void VParameterizedVendingMachineTester::traceChgThis__3(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+6,((0x96U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
	vcdp->chgBus  (c+7,(vlTOPp->ParameterizedVendingMachineTester__DOT__value),7);
	vcdp->chgBit  (c+8,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))));
	vcdp->chgBus  (c+9,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),8);
    }
}

void VParameterizedVendingMachineTester::traceChgThis__4(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+10,(vlTOPp->clock));
	vcdp->chgBit  (c+11,(vlTOPp->reset));
    }
}
