// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecUIntDynamicIndexTester__Syms.h"


//======================

void VMixedVecUIntDynamicIndexTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecUIntDynamicIndexTester* t=(VMixedVecUIntDynamicIndexTester*)userthis;
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VMixedVecUIntDynamicIndexTester::traceChgThis(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMixedVecUIntDynamicIndexTester::traceChgThis__2(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value),2);
	vcdp->chgBit  (c+2,((3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))));
    }
}

void VMixedVecUIntDynamicIndexTester::traceChgThis__3(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
    }
}
