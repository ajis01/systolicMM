// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNoneOptionBundleTester__Syms.h"


//======================

void VNoneOptionBundleTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VNoneOptionBundleTester::traceInit, &VNoneOptionBundleTester::traceFull, &VNoneOptionBundleTester::traceChg, this);
}
void VNoneOptionBundleTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VNoneOptionBundleTester* t=(VNoneOptionBundleTester*)userthis;
    VNoneOptionBundleTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VNoneOptionBundleTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VNoneOptionBundleTester* t=(VNoneOptionBundleTester*)userthis;
    VNoneOptionBundleTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VNoneOptionBundleTester::traceInitThis(VNoneOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNoneOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VNoneOptionBundleTester::traceFullThis(VNoneOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNoneOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VNoneOptionBundleTester::traceInitThis__1(VNoneOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNoneOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"NoneOptionBundleTester clock",-1);
	vcdp->declBit  (c+2,"NoneOptionBundleTester reset",-1);
	// Tracing: NoneOptionBundleTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/NoneOptionBundleTester/2020030621371313069127855939067283/NoneOptionBundleTester.v:5
    }
}

void VNoneOptionBundleTester::traceFullThis__1(VNoneOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNoneOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
