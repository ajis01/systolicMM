// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexAssignTester__Syms.h"


//======================

void VComplexAssignTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VComplexAssignTester* t=(VComplexAssignTester*)userthis;
    VComplexAssignTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VComplexAssignTester::traceChgThis(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VComplexAssignTester::traceChgThis__2(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->ComplexAssignTester__DOT__value));
    }
}

void VComplexAssignTester::traceChgThis__3(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
    }
}
