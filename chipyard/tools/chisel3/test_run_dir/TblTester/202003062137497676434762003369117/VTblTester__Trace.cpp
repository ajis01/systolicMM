// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


//======================

void VTblTester::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTblTester* t=(VTblTester*)userthis;
    VTblTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTblTester::traceChgThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTblTester::traceChgThis__2(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->TblTester__DOT__dut_io_wi),4);
	vcdp->chgBus  (c+2,(vlTOPp->TblTester__DOT__dut_io_ri),4);
	vcdp->chgBus  (c+3,(vlTOPp->TblTester__DOT__dut_io_d),4);
	vcdp->chgBus  (c+4,(vlTOPp->TblTester__DOT__dut_io_o),4);
	vcdp->chgBus  (c+5,(vlTOPp->TblTester__DOT__dut__DOT__m
			    [vlTOPp->TblTester__DOT__dut_io_ri]),4);
    }
}

void VTblTester::traceChgThis__3(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+6,(vlTOPp->TblTester__DOT__value),3);
	vcdp->chgBit  (c+7,((7U == (IData)(vlTOPp->TblTester__DOT__value))));
	vcdp->chgBus  (c+8,(vlTOPp->TblTester__DOT__dut__DOT__m[0]),4);
	vcdp->chgBus  (c+9,(vlTOPp->TblTester__DOT__dut__DOT__m[1]),4);
	vcdp->chgBus  (c+10,(vlTOPp->TblTester__DOT__dut__DOT__m[2]),4);
	vcdp->chgBus  (c+11,(vlTOPp->TblTester__DOT__dut__DOT__m[3]),4);
	vcdp->chgBus  (c+12,(vlTOPp->TblTester__DOT__dut__DOT__m[4]),4);
	vcdp->chgBus  (c+13,(vlTOPp->TblTester__DOT__dut__DOT__m[5]),4);
	vcdp->chgBus  (c+14,(vlTOPp->TblTester__DOT__dut__DOT__m[6]),4);
	vcdp->chgBus  (c+15,(vlTOPp->TblTester__DOT__dut__DOT__m[7]),4);
	vcdp->chgBus  (c+16,(vlTOPp->TblTester__DOT__dut__DOT__m[8]),4);
	vcdp->chgBus  (c+17,(vlTOPp->TblTester__DOT__dut__DOT__m[9]),4);
	vcdp->chgBus  (c+18,(vlTOPp->TblTester__DOT__dut__DOT__m[10]),4);
	vcdp->chgBus  (c+19,(vlTOPp->TblTester__DOT__dut__DOT__m[11]),4);
	vcdp->chgBus  (c+20,(vlTOPp->TblTester__DOT__dut__DOT__m[12]),4);
	vcdp->chgBus  (c+21,(vlTOPp->TblTester__DOT__dut__DOT__m[13]),4);
	vcdp->chgBus  (c+22,(vlTOPp->TblTester__DOT__dut__DOT__m[14]),4);
	vcdp->chgBus  (c+23,(vlTOPp->TblTester__DOT__dut__DOT__m[15]),4);
    }
}

void VTblTester::traceChgThis__4(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+24,(vlTOPp->clock));
	vcdp->chgBit  (c+25,(vlTOPp->reset));
    }
}
