// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "V_2__Syms.h"


//======================

void V_2::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    V_2* t=(V_2*)userthis;
    V_2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void V_2::traceChgThis(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void V_2::traceChgThis__2(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
    }
}
