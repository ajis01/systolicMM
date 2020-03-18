// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueCloneTester__Syms.h"


//======================

void VQueueCloneTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueueCloneTester* t=(VQueueCloneTester*)userthis;
    VQueueCloneTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VQueueCloneTester::traceChgThis(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueueCloneTester::traceChgThis__2(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T_5)))));
	vcdp->chgBit  (c+2,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T_4)))));
	vcdp->chgBit  (c+3,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T_5)))));
	vcdp->chgBit  (c+4,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T_4)))));
    }
}

void VQueueCloneTester::traceChgThis__3(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->QueueCloneTester__DOT__start));
	vcdp->chgBit  (c+6,(vlTOPp->QueueCloneTester__DOT__accept));
	vcdp->chgBus  (c+7,(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T
			    [vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__value_1]),32);
	vcdp->chgBus  (c+8,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T
			    [vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value_1]),32);
	vcdp->chgBit  (c+9,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value));
	vcdp->chgBit  (c+10,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value_1));
    }
}

void VQueueCloneTester::traceChgThis__4(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+11,(vlTOPp->clock));
	vcdp->chgBit  (c+12,(vlTOPp->reset));
    }
}
