// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoderTester__Syms.h"


//======================

void VDecoderTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecoderTester* t=(VDecoderTester*)userthis;
    VDecoderTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VDecoderTester::traceChgThis(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDecoderTester::traceChgThis__2(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->DecoderTester__DOT__dut_io_inst),32);
	vcdp->chgBit  (c+2,(((((0U == (0xadf0c5aU & vlTOPp->DecoderTester__DOT__dut_io_inst)) 
			       | (0x1e2042a4U == (0x1e23e2a6U 
						  & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
			      | (0x30a641U == (0x3bb663U 
					       & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
			     | (0U == (0xadf0c5aU & vlTOPp->DecoderTester__DOT__dut_io_inst)))));
    }
}

void VDecoderTester::traceChgThis__3(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->DecoderTester__DOT__value),2);
	vcdp->chgBit  (c+4,((3U == (IData)(vlTOPp->DecoderTester__DOT__value))));
    }
}

void VDecoderTester::traceChgThis__4(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,(vlTOPp->clock));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
    }
}
