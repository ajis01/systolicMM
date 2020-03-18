// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUInt2Bundle__Syms.h"


//======================

void VUInt2Bundle::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUInt2Bundle* t=(VUInt2Bundle*)userthis;
    VUInt2Bundle__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUInt2Bundle::traceChgThis(VUInt2Bundle__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUInt2Bundle::traceChgThis__2(VUInt2Bundle__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UInt2Bundle__DOT__value));
    }
}

void VUInt2Bundle::traceChgThis__3(VUInt2Bundle__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
    }
}
