// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"


//======================

void VParameterizedAggregateOneHotTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedAggregateOneHotTester* t=(VParameterizedAggregateOneHotTester*)userthis;
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VParameterizedAggregateOneHotTester::traceChgThis(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedAggregateOneHotTester::traceChgThis__2(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
    }
}
