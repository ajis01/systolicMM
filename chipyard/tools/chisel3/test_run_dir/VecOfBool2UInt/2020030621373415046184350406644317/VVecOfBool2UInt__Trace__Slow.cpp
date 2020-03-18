// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVecOfBool2UInt__Syms.h"


//======================

void VVecOfBool2UInt::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VVecOfBool2UInt::traceInit, &VVecOfBool2UInt::traceFull, &VVecOfBool2UInt::traceChg, this);
}
void VVecOfBool2UInt::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VVecOfBool2UInt* t=(VVecOfBool2UInt*)userthis;
    VVecOfBool2UInt__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VVecOfBool2UInt::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VVecOfBool2UInt* t=(VVecOfBool2UInt*)userthis;
    VVecOfBool2UInt__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VVecOfBool2UInt::traceInitThis(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VVecOfBool2UInt::traceFullThis(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VVecOfBool2UInt::traceInitThis__1(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"VecOfBool2UInt clock",-1);
	vcdp->declBit  (c+3,"VecOfBool2UInt reset",-1);
	vcdp->declBit  (c+1,"VecOfBool2UInt value",-1);
	// Tracing: VecOfBool2UInt _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/VecOfBool2UInt/2020030621373415046184350406644317/VecOfBool2UInt.v:6
	// Tracing: VecOfBool2UInt _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/VecOfBool2UInt/2020030621373415046184350406644317/VecOfBool2UInt.v:7
	// Tracing: VecOfBool2UInt _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/VecOfBool2UInt/2020030621373415046184350406644317/VecOfBool2UInt.v:8
    }
}

void VVecOfBool2UInt::traceFullThis__1(VVecOfBool2UInt__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->VecOfBool2UInt__DOT__value));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
    }
}
