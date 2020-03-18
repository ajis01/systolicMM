// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSinglePrintfTester__Syms.h"


//======================

void VSinglePrintfTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VSinglePrintfTester::traceInit, &VSinglePrintfTester::traceFull, &VSinglePrintfTester::traceChg, this);
}
void VSinglePrintfTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSinglePrintfTester* t=(VSinglePrintfTester*)userthis;
    VSinglePrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSinglePrintfTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSinglePrintfTester* t=(VSinglePrintfTester*)userthis;
    VSinglePrintfTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VSinglePrintfTester::traceInitThis(VSinglePrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSinglePrintfTester::traceFullThis(VSinglePrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSinglePrintfTester::traceInitThis__1(VSinglePrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"SinglePrintfTester clock",-1);
	vcdp->declBit  (c+2,"SinglePrintfTester reset",-1);
	// Tracing: SinglePrintfTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SinglePrintfTester/20200306213331226012562717122457/SinglePrintfTester.v:5
    }
}

void VSinglePrintfTester::traceFullThis__1(VSinglePrintfTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
