// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWidthTester__Syms.h"


//======================

void VWidthTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VWidthTester::traceInit, &VWidthTester::traceFull, &VWidthTester::traceChg, this);
}
void VWidthTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VWidthTester* t=(VWidthTester*)userthis;
    VWidthTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VWidthTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VWidthTester* t=(VWidthTester*)userthis;
    VWidthTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VWidthTester::traceInitThis(VWidthTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWidthTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VWidthTester::traceFullThis(VWidthTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWidthTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VWidthTester::traceInitThis__1(VWidthTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWidthTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"WidthTester clock",-1);
	vcdp->declBit  (c+2,"WidthTester reset",-1);
	// Tracing: WidthTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WidthTester/202003062245129605781363298546753/WidthTester.v:5
    }
}

void VWidthTester::traceFullThis__1(VWidthTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWidthTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
