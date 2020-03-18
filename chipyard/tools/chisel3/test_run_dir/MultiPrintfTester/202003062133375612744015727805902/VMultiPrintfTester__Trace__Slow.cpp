// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiPrintfTester__Syms.h"


//======================

void VMultiPrintfTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMultiPrintfTester::traceInit, &VMultiPrintfTester::traceFull, &VMultiPrintfTester::traceChg, this);
}
void VMultiPrintfTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMultiPrintfTester* t=(VMultiPrintfTester*)userthis;
    VMultiPrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMultiPrintfTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiPrintfTester* t=(VMultiPrintfTester*)userthis;
    VMultiPrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMultiPrintfTester::traceInitThis(VMultiPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMultiPrintfTester::traceFullThis(VMultiPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiPrintfTester::traceInitThis__1(VMultiPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"MultiPrintfTester clock",-1);
	vcdp->declBit  (c+2,"MultiPrintfTester reset",-1);
	// Tracing: MultiPrintfTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiPrintfTester/202003062133375612744015727805902/MultiPrintfTester.v:5
    }
}

void VMultiPrintfTester::traceFullThis__1(VMultiPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
