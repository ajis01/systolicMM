// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecRegTester__Syms.h"


//======================

void VMixedVecRegTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecRegTester* t=(VMixedVecRegTester*)userthis;
    VMixedVecRegTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VMixedVecRegTester::traceChgThis(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMixedVecRegTester::traceChgThis__2(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->MixedVecRegTester__DOT__reg_5));
	vcdp->chgBit  (c+2,(vlTOPp->MixedVecRegTester__DOT__reg_4));
	vcdp->chgBit  (c+3,(vlTOPp->MixedVecRegTester__DOT__reg_3));
	vcdp->chgBit  (c+4,(vlTOPp->MixedVecRegTester__DOT__reg_2));
	vcdp->chgBit  (c+5,(vlTOPp->MixedVecRegTester__DOT__reg_1));
	vcdp->chgBit  (c+6,(vlTOPp->MixedVecRegTester__DOT__doneReg));
    }
}

void VMixedVecRegTester::traceChgThis__3(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+7,(vlTOPp->clock));
	vcdp->chgBit  (c+8,(vlTOPp->reset));
    }
}
