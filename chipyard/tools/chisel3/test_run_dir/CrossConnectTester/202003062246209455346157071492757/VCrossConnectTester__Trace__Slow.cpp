// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCrossConnectTester__Syms.h"


//======================

void VCrossConnectTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCrossConnectTester::traceInit, &VCrossConnectTester::traceFull, &VCrossConnectTester::traceChg, this);
}
void VCrossConnectTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCrossConnectTester* t=(VCrossConnectTester*)userthis;
    VCrossConnectTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCrossConnectTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCrossConnectTester* t=(VCrossConnectTester*)userthis;
    VCrossConnectTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCrossConnectTester::traceInitThis(VCrossConnectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossConnectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCrossConnectTester::traceFullThis(VCrossConnectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossConnectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCrossConnectTester::traceInitThis__1(VCrossConnectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossConnectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"CrossConnectTester clock",-1);
	vcdp->declBit  (c+2,"CrossConnectTester reset",-1);
	// Tracing: CrossConnectTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CrossConnectTester/202003062246209455346157071492757/CrossConnectTester.v:5
    }
}

void VCrossConnectTester::traceFullThis__1(VCrossConnectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossConnectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
