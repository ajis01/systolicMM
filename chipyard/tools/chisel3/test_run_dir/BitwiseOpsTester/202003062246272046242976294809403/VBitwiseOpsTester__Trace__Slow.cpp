// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitwiseOpsTester__Syms.h"


//======================

void VBitwiseOpsTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBitwiseOpsTester::traceInit, &VBitwiseOpsTester::traceFull, &VBitwiseOpsTester::traceChg, this);
}
void VBitwiseOpsTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBitwiseOpsTester* t=(VBitwiseOpsTester*)userthis;
    VBitwiseOpsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBitwiseOpsTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBitwiseOpsTester* t=(VBitwiseOpsTester*)userthis;
    VBitwiseOpsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBitwiseOpsTester::traceInitThis(VBitwiseOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitwiseOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBitwiseOpsTester::traceFullThis(VBitwiseOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitwiseOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBitwiseOpsTester::traceInitThis__1(VBitwiseOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitwiseOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"BitwiseOpsTester clock",-1);
	vcdp->declBit  (c+2,"BitwiseOpsTester reset",-1);
	// Tracing: BitwiseOpsTester _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BitwiseOpsTester/202003062246272046242976294809403/BitwiseOpsTester.v:5
    }
}

void VBitwiseOpsTester::traceFullThis__1(VBitwiseOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBitwiseOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
