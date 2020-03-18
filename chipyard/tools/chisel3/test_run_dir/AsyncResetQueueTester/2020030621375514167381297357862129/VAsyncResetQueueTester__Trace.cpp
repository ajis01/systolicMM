// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


//======================

void VAsyncResetQueueTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAsyncResetQueueTester* t=(VAsyncResetQueueTester*)userthis;
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAsyncResetQueueTester::traceChgThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAsyncResetQueueTester::traceChgThis__2(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->AsyncResetQueueTester__DOT__queue_clock));
    }
}

void VAsyncResetQueueTester::traceChgThis__3(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5)))));
	vcdp->chgBus  (c+3,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value),2);
	vcdp->chgBus  (c+4,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1),2);
    }
}

void VAsyncResetQueueTester::traceChgThis__4(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5,(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count),3);
    }
}

void VAsyncResetQueueTester::traceChgThis__5(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+6,(vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext));
	vcdp->chgBus  (c+7,(vlTOPp->AsyncResetQueueTester__DOT__value),2);
	vcdp->chgBit  (c+8,((3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value))));
	vcdp->chgBus  (c+9,(vlTOPp->AsyncResetQueueTester__DOT__value_1),4);
	vcdp->chgBit  (c+10,((0xfU == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1))));
	vcdp->chgBit  (c+11,(vlTOPp->AsyncResetQueueTester__DOT__doCheck));
    }
}

void VAsyncResetQueueTester::traceChgThis__6(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+12,(vlTOPp->clock));
	vcdp->chgBit  (c+13,(vlTOPp->reset));
    }
}
