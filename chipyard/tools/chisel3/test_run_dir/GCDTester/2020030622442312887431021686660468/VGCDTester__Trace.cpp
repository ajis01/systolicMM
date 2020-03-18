// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


//======================

void VGCDTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGCDTester* t=(VGCDTester*)userthis;
    VGCDTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VGCDTester::traceChgThis(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VGCDTester::traceChgThis__2(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->GCDTester__DOT__first));
	vcdp->chgBus  (c+2,(vlTOPp->GCDTester__DOT__dut__DOT__x),32);
	vcdp->chgBit  (c+3,((0U == vlTOPp->GCDTester__DOT__dut__DOT__y)));
	vcdp->chgBus  (c+4,(vlTOPp->GCDTester__DOT__dut__DOT__y),32);
    }
}

void VGCDTester::traceChgThis__3(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->clock));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
    }
}
