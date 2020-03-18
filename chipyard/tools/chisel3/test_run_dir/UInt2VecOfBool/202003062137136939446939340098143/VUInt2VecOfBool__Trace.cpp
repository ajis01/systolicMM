// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUInt2VecOfBool__Syms.h"


//======================

void VUInt2VecOfBool::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUInt2VecOfBool* t=(VUInt2VecOfBool*)userthis;
    VUInt2VecOfBool__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUInt2VecOfBool::traceChgThis(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUInt2VecOfBool::traceChgThis__2(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UInt2VecOfBool__DOT__value));
    }
}

void VUInt2VecOfBool::traceChgThis__3(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
    }
}
