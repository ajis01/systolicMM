// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUInt2VecOfBool__Syms.h"


//======================

void VUInt2VecOfBool::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUInt2VecOfBool::traceInit, &VUInt2VecOfBool::traceFull, &VUInt2VecOfBool::traceChg, this);
}
void VUInt2VecOfBool::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUInt2VecOfBool* t=(VUInt2VecOfBool*)userthis;
    VUInt2VecOfBool__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUInt2VecOfBool::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUInt2VecOfBool* t=(VUInt2VecOfBool*)userthis;
    VUInt2VecOfBool__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUInt2VecOfBool::traceInitThis(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUInt2VecOfBool::traceFullThis(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUInt2VecOfBool::traceInitThis__1(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"UInt2VecOfBool clock",-1);
	vcdp->declBit  (c+3,"UInt2VecOfBool reset",-1);
	vcdp->declBit  (c+1,"UInt2VecOfBool value",-1);
	// Tracing: UInt2VecOfBool _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2VecOfBool/202003062137136939446939340098143/UInt2VecOfBool.v:6
	// Tracing: UInt2VecOfBool _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2VecOfBool/202003062137136939446939340098143/UInt2VecOfBool.v:7
	// Tracing: UInt2VecOfBool _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2VecOfBool/202003062137136939446939340098143/UInt2VecOfBool.v:8
    }
}

void VUInt2VecOfBool::traceFullThis__1(VUInt2VecOfBool__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->UInt2VecOfBool__DOT__value));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
    }
}
