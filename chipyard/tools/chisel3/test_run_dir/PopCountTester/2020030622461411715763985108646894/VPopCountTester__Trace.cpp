// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


//======================

void VPopCountTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPopCountTester* t=(VPopCountTester*)userthis;
    VPopCountTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VPopCountTester::traceChgThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPopCountTester::traceChgThis__2(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->PopCountTester__DOT__x));
	vcdp->chgBus  (c+2,(vlTOPp->PopCountTester__DOT__x),2);
    }
}

void VPopCountTester::traceChgThis__3(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
    }
}
