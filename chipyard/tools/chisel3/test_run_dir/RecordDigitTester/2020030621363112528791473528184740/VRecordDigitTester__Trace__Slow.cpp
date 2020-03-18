// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordDigitTester__Syms.h"


//======================

void VRecordDigitTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRecordDigitTester::traceInit, &VRecordDigitTester::traceFull, &VRecordDigitTester::traceChg, this);
}
void VRecordDigitTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRecordDigitTester* t=(VRecordDigitTester*)userthis;
    VRecordDigitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRecordDigitTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRecordDigitTester* t=(VRecordDigitTester*)userthis;
    VRecordDigitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRecordDigitTester::traceInitThis(VRecordDigitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordDigitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRecordDigitTester::traceFullThis(VRecordDigitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordDigitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRecordDigitTester::traceInitThis__1(VRecordDigitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordDigitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"RecordDigitTester clock",-1);
	vcdp->declBit  (c+2,"RecordDigitTester reset",-1);
	// Tracing: RecordDigitTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordDigitTester/2020030621363112528791473528184740/RecordDigitTester.v:5
    }
}

void VRecordDigitTester::traceFullThis__1(VRecordDigitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordDigitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
