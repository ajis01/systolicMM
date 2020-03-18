// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStopTester__Syms.h"


//======================

void VStopTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VStopTester::traceInit, &VStopTester::traceFull, &VStopTester::traceChg, this);
}
void VStopTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStopTester* t=(VStopTester*)userthis;
    VStopTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStopTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStopTester* t=(VStopTester*)userthis;
    VStopTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VStopTester::traceInitThis(VStopTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStopTester::traceFullThis(VStopTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStopTester::traceInitThis__1(VStopTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"StopTester clock",-1);
	vcdp->declBit  (c+2,"StopTester reset",-1);
	// Tracing: StopTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopTester/202003062134507827776449670700007/StopTester.v:5
    }
}

void VStopTester::traceFullThis__1(VStopTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
