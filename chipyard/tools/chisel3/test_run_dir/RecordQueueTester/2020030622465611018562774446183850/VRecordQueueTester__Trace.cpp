// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


//======================

void VRecordQueueTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRecordQueueTester* t=(VRecordQueueTester*)userthis;
    VRecordQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VRecordQueueTester::traceChgThis(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRecordQueueTester::traceChgThis__2(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)))));
	vcdp->chgBit  (c+2,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8)))));
    }
}

void VRecordQueueTester::traceChgThis__3(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,((0U == (IData)(vlTOPp->RecordQueueTester__DOT__value))));
	vcdp->chgBus  (c+4,(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_bar
			    [vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]),32);
	vcdp->chgBus  (c+5,(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_foo
			    [vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]),32);
	vcdp->chgBus  (c+6,(vlTOPp->RecordQueueTester__DOT__value),2);
	vcdp->chgBit  (c+7,((3U == (IData)(vlTOPp->RecordQueueTester__DOT__value))));
	vcdp->chgBus  (c+8,(vlTOPp->RecordQueueTester__DOT__queue__DOT__value),2);
	vcdp->chgBus  (c+9,(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1),2);
    }
}

void VRecordQueueTester::traceChgThis__4(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+10,(vlTOPp->clock));
	vcdp->chgBit  (c+11,(vlTOPp->reset));
    }
}
