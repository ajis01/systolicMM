// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdderTreeTester__Syms.h"


//======================

void VAdderTreeTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAdderTreeTester::traceInit, &VAdderTreeTester::traceFull, &VAdderTreeTester::traceChg, this);
}
void VAdderTreeTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAdderTreeTester* t=(VAdderTreeTester*)userthis;
    VAdderTreeTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAdderTreeTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAdderTreeTester* t=(VAdderTreeTester*)userthis;
    VAdderTreeTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAdderTreeTester::traceInitThis(VAdderTreeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAdderTreeTester::traceFullThis(VAdderTreeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAdderTreeTester::traceInitThis__1(VAdderTreeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"AdderTreeTester clock",-1);
	vcdp->declBit  (c+2,"AdderTreeTester reset",-1);
	// Tracing: AdderTreeTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AdderTreeTester/2020030621335915390360443220381270/AdderTreeTester.v:5
    }
}

void VAdderTreeTester::traceFullThis__1(VAdderTreeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAdderTreeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
