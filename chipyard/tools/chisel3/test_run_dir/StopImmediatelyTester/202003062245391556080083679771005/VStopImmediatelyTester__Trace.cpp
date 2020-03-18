// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStopImmediatelyTester__Syms.h"


//======================

void VStopImmediatelyTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStopImmediatelyTester* t=(VStopImmediatelyTester*)userthis;
    VStopImmediatelyTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VStopImmediatelyTester::traceChgThis(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStopImmediatelyTester::traceChgThis__2(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->StopImmediatelyTester__DOT__cycle),4);
    }
}

void VStopImmediatelyTester::traceChgThis__3(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
    }
}
