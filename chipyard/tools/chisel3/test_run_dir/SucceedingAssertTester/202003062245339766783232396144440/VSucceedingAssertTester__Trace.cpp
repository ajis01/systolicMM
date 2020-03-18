// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSucceedingAssertTester__Syms.h"


//======================

void VSucceedingAssertTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSucceedingAssertTester* t=(VSucceedingAssertTester*)userthis;
    VSucceedingAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VSucceedingAssertTester::traceChgThis(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VSucceedingAssertTester::traceChgThis__2(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->SucceedingAssertTester__DOT__value),2);
    }
}

void VSucceedingAssertTester::traceChgThis__3(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBit  (c+4,(((~ (IData)(vlTOPp->reset)) 
			     & (3U == (IData)(vlTOPp->SucceedingAssertTester__DOT__value)))));
    }
}
