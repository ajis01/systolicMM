// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


//======================

void VAsyncResetAggregateTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAsyncResetAggregateTester* t=(VAsyncResetAggregateTester*)userthis;
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAsyncResetAggregateTester::traceChgThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
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

void VAsyncResetAggregateTester::traceChgThis__2(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->AsyncResetAggregateTester__DOT__slowClk));
    }
}

void VAsyncResetAggregateTester::traceChgThis__3(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x),8);
	vcdp->chgBus  (c+3,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y),8);
	vcdp->chgBus  (c+4,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x),8);
	vcdp->chgBus  (c+5,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y),8);
    }
}

void VAsyncResetAggregateTester::traceChgThis__4(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+6,(vlTOPp->AsyncResetAggregateTester__DOT__value),2);
	vcdp->chgBit  (c+7,((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value))));
	vcdp->chgBus  (c+8,(vlTOPp->AsyncResetAggregateTester__DOT__value_1),4);
	vcdp->chgBit  (c+9,((0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1))));
    }
}

void VAsyncResetAggregateTester::traceChgThis__5(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+10,(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext));
    }
}

void VAsyncResetAggregateTester::traceChgThis__6(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+11,(vlTOPp->clock));
	vcdp->chgBit  (c+12,(vlTOPp->reset));
    }
}
