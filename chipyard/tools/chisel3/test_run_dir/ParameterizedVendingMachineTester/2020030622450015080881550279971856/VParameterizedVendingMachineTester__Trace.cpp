// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


//======================

void VParameterizedVendingMachineTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VParameterizedVendingMachineTester::traceChgThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VParameterizedVendingMachineTester::traceChgThis__2(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			     | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				| ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				   | ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				      & ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					 | ((0x5eU 
					     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					    & ((0x5dU 
						== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					       | ((0x5cU 
						   != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						  & ((0x5bU 
						      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						     & ((0x5aU 
							 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							| ((0x59U 
							    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							   | ((0x58U 
							       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							      & ((0x57U 
								  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								 | ((0x56U 
								     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								    & ((0x55U 
									== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								       | ((0x54U 
									   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									  | ((0x53U 
									      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									     & ((0x52U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x51U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x50U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x49U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x40U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x10U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xdU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((7U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((6U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| (1U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	vcdp->chgBit  (c+2,((6U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
	vcdp->chgBus  (c+3,(vlTOPp->ParameterizedVendingMachineTester__DOT__value),7);
	vcdp->chgBit  (c+4,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))));
	vcdp->chgBus  (c+5,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
	vcdp->chgBus  (c+6,((((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			      | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				 | ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				    | ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				       & ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					  | ((0x5eU 
					      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					     & ((0x5dU 
						 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						| ((0x5cU 
						    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						   & ((0x5bU 
						       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						      & ((0x5aU 
							  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							 | ((0x59U 
							     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							    | ((0x58U 
								!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							       & ((0x57U 
								   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								  | ((0x56U 
								      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								     & ((0x55U 
									 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									| ((0x54U 
									    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									   | ((0x53U 
									       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									      & ((0x52U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x51U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x50U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x49U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x40U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x10U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xdU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((7U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((6U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| (1U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
			      ? 1U : 0U)),3);
    }
}

void VParameterizedVendingMachineTester::traceChgThis__3(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+7,(vlTOPp->clock));
	vcdp->chgBit  (c+8,(vlTOPp->reset));
    }
}
