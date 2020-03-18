// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnableTester__Syms.h"


//======================

void VEnableTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEnableTester* t=(VEnableTester*)userthis;
    VEnableTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VEnableTester::traceChgThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VEnableTester::traceChgThis__2(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->EnableTester__DOT__ens),24);
	vcdp->chgBus  (c+2,(vlTOPp->EnableTester__DOT__value),5);
	vcdp->chgBus  (c+3,(vlTOPp->EnableTester__DOT__value_1),6);
	vcdp->chgBit  (c+4,((0x20U == (IData)(vlTOPp->EnableTester__DOT__value_1))));
    }
}

void VEnableTester::traceChgThis__3(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->clock));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
    }
}
