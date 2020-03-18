// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegOfVec__Syms.h"


//======================

void VRegOfVec::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRegOfVec::traceInit, &VRegOfVec::traceFull, &VRegOfVec::traceChg, this);
}
void VRegOfVec::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRegOfVec* t=(VRegOfVec*)userthis;
    VRegOfVec__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRegOfVec::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegOfVec* t=(VRegOfVec*)userthis;
    VRegOfVec__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRegOfVec::traceInitThis(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRegOfVec::traceFullThis(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRegOfVec::traceInitThis__1(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBit  (c+3,"RegOfVec clock",-1);
	vcdp->declBit  (c+4,"RegOfVec reset",-1);
	vcdp->declBus  (c+1,"RegOfVec value",-1,1,0);
	// Tracing: RegOfVec _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RegOfVec/2020030621350418194417769398531824/RegOfVec.v:6
	vcdp->declBit  (c+2,"RegOfVec done",-1);
	// Tracing: RegOfVec _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RegOfVec/2020030621350418194417769398531824/RegOfVec.v:8
	// Tracing: RegOfVec _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RegOfVec/2020030621350418194417769398531824/RegOfVec.v:9
    }
}

void VRegOfVec::traceFullThis__1(VRegOfVec__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->RegOfVec__DOT__value),2);
	vcdp->fullBit  (c+2,((2U == (IData)(vlTOPp->RegOfVec__DOT__value))));
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
    }
}
