// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBundleToUnitTester__Syms.h"


//======================

void VBundleToUnitTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBundleToUnitTester::traceInit, &VBundleToUnitTester::traceFull, &VBundleToUnitTester::traceChg, this);
}
void VBundleToUnitTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBundleToUnitTester* t=(VBundleToUnitTester*)userthis;
    VBundleToUnitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBundleToUnitTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBundleToUnitTester* t=(VBundleToUnitTester*)userthis;
    VBundleToUnitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBundleToUnitTester::traceInitThis(VBundleToUnitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBundleToUnitTester::traceFullThis(VBundleToUnitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBundleToUnitTester::traceInitThis__1(VBundleToUnitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"BundleToUnitTester clock",-1);
	vcdp->declBit  (c+2,"BundleToUnitTester reset",-1);
	// Tracing: BundleToUnitTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BundleToUnitTester/2020030622441210138532574625447360/BundleToUnitTester.v:5
    }
}

void VBundleToUnitTester::traceFullThis__1(VBundleToUnitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
