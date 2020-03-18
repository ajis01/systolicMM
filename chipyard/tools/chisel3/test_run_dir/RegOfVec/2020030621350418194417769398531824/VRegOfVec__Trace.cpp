// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegOfVec__Syms.h"


//======================

void VRegOfVec::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegOfVec* t=(VRegOfVec*)userthis;
    VRegOfVec__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VRegOfVec::traceChgThis(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRegOfVec::traceChgThis__2(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->RegOfVec__DOT__value),2);
	vcdp->chgBit  (c+2,((2U == (IData)(vlTOPp->RegOfVec__DOT__value))));
    }
}

void VRegOfVec::traceChgThis__3(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
    }
}
