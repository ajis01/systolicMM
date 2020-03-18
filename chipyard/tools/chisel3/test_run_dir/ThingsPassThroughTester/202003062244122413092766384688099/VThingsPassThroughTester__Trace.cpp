// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughTester__Syms.h"


//======================

void VThingsPassThroughTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VThingsPassThroughTester* t=(VThingsPassThroughTester*)userthis;
    VThingsPassThroughTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VThingsPassThroughTester::traceChgThis(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VThingsPassThroughTester::traceChgThis__2(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)))));
	vcdp->chgBit  (c+2,((1U & ((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
				   >> 2U))));
	vcdp->chgBit  (c+3,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4)))));
    }
}

void VThingsPassThroughTester::traceChgThis__3(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,((0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
	vcdp->chgBus  (c+5,(((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
			      ? 0xaU : ((0x12U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
					 ? 9U : ((0x11U 
						  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						  ? 3U
						  : 
						 ((0x10U 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						   ? 4U
						   : 
						  ((0xfU 
						    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						    ? 0xaU
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						     ? 0xaU
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						      ? 3U
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						       ? 0xfU
						       : 
						      ((0xbU 
							== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						        ? 0xfU
						        : 
						       ((0xaU 
							 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							 ? 0xcU
							 : 
							((9U 
							  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							  ? 5U
							  : 
							 ((8U 
							   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							   ? 9U
							   : 
							  ((7U 
							    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							    ? 0U
							    : 
							   ((6U 
							     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							     ? 7U
							     : 
							    ((5U 
							      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							      ? 0xdU
							      : 
							     ((4U 
							       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							       ? 0U
							       : 
							      ((3U 
								== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							        ? 0xaU
							        : 
							       ((2U 
								 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
								 ? 0xaU
								 : 
								((1U 
								  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
								  ? 0xcU
								  : 0U)))))))))))))))))))),4);
	vcdp->chgBus  (c+6,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T
			    [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1]),4);
	vcdp->chgBit  (c+7,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->chgBit  (c+8,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->chgBit  (c+9,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->chgBit  (c+10,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->chgBit  (c+11,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->chgBit  (c+12,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->chgBit  (c+13,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->chgBit  (c+14,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->chgBit  (c+15,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->chgBit  (c+16,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->chgBit  (c+17,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->chgBit  (c+18,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->chgBit  (c+19,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->chgBit  (c+20,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->chgBit  (c+21,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->chgBit  (c+22,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->chgBus  (c+23,(vlTOPp->ThingsPassThroughTester__DOT__value),5);
	vcdp->chgBus  (c+24,(vlTOPp->ThingsPassThroughTester__DOT__value_1),5);
	vcdp->chgBus  (c+25,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value),2);
	vcdp->chgBus  (c+26,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1),2);
    }
}

void VThingsPassThroughTester::traceChgThis__4(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+27,(vlTOPp->clock));
	vcdp->chgBit  (c+28,(vlTOPp->reset));
    }
}
