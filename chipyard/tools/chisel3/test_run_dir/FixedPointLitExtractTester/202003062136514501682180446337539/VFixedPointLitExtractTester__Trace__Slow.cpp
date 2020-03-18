// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFixedPointLitExtractTester__Syms.h"


//======================

void VFixedPointLitExtractTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VFixedPointLitExtractTester::traceInit, &VFixedPointLitExtractTester::traceFull, &VFixedPointLitExtractTester::traceChg, this);
}
void VFixedPointLitExtractTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFixedPointLitExtractTester* t=(VFixedPointLitExtractTester*)userthis;
    VFixedPointLitExtractTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFixedPointLitExtractTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFixedPointLitExtractTester* t=(VFixedPointLitExtractTester*)userthis;
    VFixedPointLitExtractTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VFixedPointLitExtractTester::traceInitThis(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFixedPointLitExtractTester::traceFullThis(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFixedPointLitExtractTester::traceInitThis__1(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"FixedPointLitExtractTester clock",-1);
	vcdp->declBit  (c+2,"FixedPointLitExtractTester reset",-1);
	// Tracing: FixedPointLitExtractTester _T_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointLitExtractTester/202003062136514501682180446337539/FixedPointLitExtractTester.v:5
    }
}

void VFixedPointLitExtractTester::traceFullThis__1(VFixedPointLitExtractTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointLitExtractTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
