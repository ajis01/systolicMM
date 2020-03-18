// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


//======================

void VLFSRResetTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLFSRResetTester* t=(VLFSRResetTester*)userthis;
    VLFSRResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VLFSRResetTester::traceChgThis(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VLFSRResetTester::traceChgThis__2(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((3U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
	vcdp->chgBit  (c+2,((1U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
	vcdp->chgBit  (c+3,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
	vcdp->chgBit  (c+4,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_1));
	vcdp->chgBit  (c+5,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_2));
	vcdp->chgBit  (c+6,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_3));
	vcdp->chgBus  (c+7,(vlTOPp->LFSRResetTester__DOT__value),3);
	vcdp->chgBit  (c+8,((4U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
    }
}

void VLFSRResetTester::traceChgThis__3(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9,(vlTOPp->clock));
	vcdp->chgBit  (c+10,(vlTOPp->reset));
    }
}
