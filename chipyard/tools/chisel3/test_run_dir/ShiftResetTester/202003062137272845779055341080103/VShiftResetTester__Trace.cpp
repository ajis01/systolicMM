// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


//======================

void VShiftResetTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VShiftResetTester* t=(VShiftResetTester*)userthis;
    VShiftResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VShiftResetTester::traceChgThis(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VShiftResetTester::traceChgThis__2(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->ShiftResetTester__DOT__value),2);
	vcdp->chgBit  (c+2,((2U == (IData)(vlTOPp->ShiftResetTester__DOT__value))));
	vcdp->chgBus  (c+3,(vlTOPp->ShiftResetTester__DOT__sr),5);
    }
}

void VShiftResetTester::traceChgThis__3(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,(vlTOPp->clock));
	vcdp->chgBit  (c+5,(vlTOPp->reset));
    }
}
