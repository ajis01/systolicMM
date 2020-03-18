// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordIOTester__Syms.h"


//======================

void VRecordIOTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRecordIOTester::traceInit, &VRecordIOTester::traceFull, &VRecordIOTester::traceChg, this);
}
void VRecordIOTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRecordIOTester* t=(VRecordIOTester*)userthis;
    VRecordIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRecordIOTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRecordIOTester* t=(VRecordIOTester*)userthis;
    VRecordIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRecordIOTester::traceInitThis(VRecordIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRecordIOTester::traceFullThis(VRecordIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRecordIOTester::traceInitThis__1(VRecordIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"RecordIOTester clock",-1);
	vcdp->declBit  (c+2,"RecordIOTester reset",-1);
	// Tracing: RecordIOTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordIOTester/2020030621362311429496166045126006/RecordIOTester.v:5
    }
}

void VRecordIOTester::traceFullThis__1(VRecordIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
