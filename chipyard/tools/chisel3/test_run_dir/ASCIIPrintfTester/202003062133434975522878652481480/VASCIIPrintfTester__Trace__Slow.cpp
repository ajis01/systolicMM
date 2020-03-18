// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VASCIIPrintfTester__Syms.h"


//======================

void VASCIIPrintfTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VASCIIPrintfTester::traceInit, &VASCIIPrintfTester::traceFull, &VASCIIPrintfTester::traceChg, this);
}
void VASCIIPrintfTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VASCIIPrintfTester* t=(VASCIIPrintfTester*)userthis;
    VASCIIPrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VASCIIPrintfTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VASCIIPrintfTester* t=(VASCIIPrintfTester*)userthis;
    VASCIIPrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VASCIIPrintfTester::traceInitThis(VASCIIPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VASCIIPrintfTester::traceFullThis(VASCIIPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VASCIIPrintfTester::traceInitThis__1(VASCIIPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ASCIIPrintfTester clock",-1);
	vcdp->declBit  (c+2,"ASCIIPrintfTester reset",-1);
	// Tracing: ASCIIPrintfTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintfTester/202003062133434975522878652481480/ASCIIPrintfTester.v:5
    }
}

void VASCIIPrintfTester::traceFullThis__1(VASCIIPrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
