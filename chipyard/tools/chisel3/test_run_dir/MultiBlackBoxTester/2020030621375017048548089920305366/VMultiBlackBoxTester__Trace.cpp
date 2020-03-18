// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiBlackBoxTester__Syms.h"


//======================

void VMultiBlackBoxTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiBlackBoxTester* t=(VMultiBlackBoxTester*)userthis;
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VMultiBlackBoxTester::traceChgThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiBlackBoxTester::traceChgThis__2(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
    }
}
