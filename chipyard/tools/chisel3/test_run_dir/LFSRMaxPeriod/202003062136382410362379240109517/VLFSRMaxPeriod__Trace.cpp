// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


//======================

void VLFSRMaxPeriod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLFSRMaxPeriod* t=(VLFSRMaxPeriod*)userthis;
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VLFSRMaxPeriod::traceChgThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLFSRMaxPeriod::traceChgThis__2(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),3);
    }
}

void VLFSRMaxPeriod::traceChgThis__3(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
	vcdp->chgBit  (c+3,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1));
	vcdp->chgBit  (c+4,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2));
	vcdp->chgBit  (c+5,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->chgBus  (c+6,(vlTOPp->LFSRMaxPeriod__DOT__seed),3);
	vcdp->chgBus  (c+7,(vlTOPp->LFSRMaxPeriod__DOT__value),3);
	vcdp->chgBit  (c+8,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			     & (6U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->chgBus  (c+9,(vlTOPp->LFSRMaxPeriod__DOT__last),3);
    }
}

void VLFSRMaxPeriod::traceChgThis__4(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+10,(vlTOPp->clock));
	vcdp->chgBit  (c+11,(vlTOPp->reset));
    }
}
