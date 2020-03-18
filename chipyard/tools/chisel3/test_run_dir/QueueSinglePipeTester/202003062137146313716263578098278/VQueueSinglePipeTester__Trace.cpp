// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueSinglePipeTester__Syms.h"


//======================

void VQueueSinglePipeTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueueSinglePipeTester* t=(VQueueSinglePipeTester*)userthis;
    VQueueSinglePipeTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VQueueSinglePipeTester::traceChgThis(VQueueSinglePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueSinglePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueueSinglePipeTester::traceChgThis__2(VQueueSinglePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueSinglePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->QueueSinglePipeTester__DOT__q_io_enq_ready));
	vcdp->chgBit  (c+2,((1U & ((IData)(vlTOPp->QueueSinglePipeTester__DOT___T_15) 
				   >> 4U))));
    }
}

void VQueueSinglePipeTester::traceChgThis__3(VQueueSinglePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueSinglePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,((0x14U > (IData)(vlTOPp->QueueSinglePipeTester__DOT__value))));
	vcdp->chgBit  (c+4,(vlTOPp->QueueSinglePipeTester__DOT__q__DOT___T_1));
	vcdp->chgBit  (c+5,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->chgBit  (c+6,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->chgBit  (c+7,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->chgBit  (c+8,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->chgBit  (c+9,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->chgBit  (c+10,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->chgBit  (c+11,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->chgBit  (c+12,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->chgBit  (c+13,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->chgBit  (c+14,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->chgBit  (c+15,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->chgBit  (c+16,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->chgBit  (c+17,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->chgBit  (c+18,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->chgBit  (c+19,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->chgBit  (c+20,(vlTOPp->QueueSinglePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->chgBus  (c+21,(vlTOPp->QueueSinglePipeTester__DOT__value),5);
	vcdp->chgBus  (c+22,(vlTOPp->QueueSinglePipeTester__DOT__value_1),5);
    }
}

void VQueueSinglePipeTester::traceChgThis__4(VQueueSinglePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueSinglePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+23,(vlTOPp->clock));
	vcdp->chgBit  (c+24,(vlTOPp->reset));
    }
}
