// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueReasonableReadyValid__Syms.h"


//======================

void VQueueReasonableReadyValid::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueueReasonableReadyValid* t=(VQueueReasonableReadyValid*)userthis;
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VQueueReasonableReadyValid::traceChgThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueueReasonableReadyValid::traceChgThis__2(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_5)))));
	vcdp->chgBit  (c+2,((1U & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_20) 
				   >> 8U))));
	vcdp->chgBit  (c+3,((1U & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_4)))));
	vcdp->chgBus  (c+4,(vlTOPp->QueueReasonableReadyValid__DOT__q_io_count),2);
    }
}

void VQueueReasonableReadyValid::traceChgThis__3(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,((0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value))));
	vcdp->chgBit  (c+6,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->chgBit  (c+7,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->chgBit  (c+8,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->chgBit  (c+9,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->chgBit  (c+10,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->chgBit  (c+11,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->chgBit  (c+12,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->chgBit  (c+13,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->chgBit  (c+14,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->chgBit  (c+15,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->chgBit  (c+16,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->chgBit  (c+17,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->chgBit  (c+18,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->chgBit  (c+19,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->chgBit  (c+20,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->chgBit  (c+21,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->chgBus  (c+22,(vlTOPp->QueueReasonableReadyValid__DOT__value),5);
	vcdp->chgBus  (c+23,(vlTOPp->QueueReasonableReadyValid__DOT__value_1),5);
	vcdp->chgBit  (c+24,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__value));
	vcdp->chgBit  (c+25,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT__value_1));
    }
}

void VQueueReasonableReadyValid::traceChgThis__4(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+26,(vlTOPp->clock));
	vcdp->chgBit  (c+27,(vlTOPp->reset));
    }
}
