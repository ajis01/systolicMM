// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMulLookupTester__Syms.h"


//======================

void VMulLookupTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMulLookupTester::traceInit, &VMulLookupTester::traceFull, &VMulLookupTester::traceChg, this);
}
void VMulLookupTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMulLookupTester* t=(VMulLookupTester*)userthis;
    VMulLookupTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMulLookupTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMulLookupTester* t=(VMulLookupTester*)userthis;
    VMulLookupTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMulLookupTester::traceInitThis(VMulLookupTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMulLookupTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMulLookupTester::traceFullThis(VMulLookupTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMulLookupTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMulLookupTester::traceInitThis__1(VMulLookupTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMulLookupTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"MulLookupTester clock",-1);
	vcdp->declBit  (c+2,"MulLookupTester reset",-1);
	// Tracing: MulLookupTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MulLookupTester/2020030621372117642824627065246943/MulLookupTester.v:5
    }
}

void VMulLookupTester::traceFullThis__1(VMulLookupTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMulLookupTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
