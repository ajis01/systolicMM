// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStrongEnumFSMTester__Syms.h"


//======================

void VStrongEnumFSMTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStrongEnumFSMTester* t=(VStrongEnumFSMTester*)userthis;
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VStrongEnumFSMTester::traceChgThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStrongEnumFSMTester::traceChgThis__2(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->StrongEnumFSMTester__DOT__dut_io_in));
    }
}

void VStrongEnumFSMTester::traceChgThis__3(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,((2U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state))));
	vcdp->chgBus  (c+3,(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state),2);
	vcdp->chgBus  (c+4,(vlTOPp->StrongEnumFSMTester__DOT__value),4);
    }
}

void VStrongEnumFSMTester::traceChgThis__4(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->clock));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
    }
}
