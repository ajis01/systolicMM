// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVecOfBool2UInt__Syms.h"


//======================

void VVecOfBool2UInt::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VVecOfBool2UInt* t=(VVecOfBool2UInt*)userthis;
    VVecOfBool2UInt__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VVecOfBool2UInt::traceChgThis(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VVecOfBool2UInt::traceChgThis__2(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->VecOfBool2UInt__DOT__value));
    }
}

void VVecOfBool2UInt::traceChgThis__3(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
    }
}
