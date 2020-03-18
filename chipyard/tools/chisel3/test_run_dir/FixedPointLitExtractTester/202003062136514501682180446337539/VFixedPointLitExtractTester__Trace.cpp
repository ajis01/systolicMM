// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFixedPointLitExtractTester__Syms.h"


//======================

void VFixedPointLitExtractTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFixedPointLitExtractTester* t=(VFixedPointLitExtractTester*)userthis;
    VFixedPointLitExtractTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VFixedPointLitExtractTester::traceChgThis(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFixedPointLitExtractTester::traceChgThis__2(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
    }
}
