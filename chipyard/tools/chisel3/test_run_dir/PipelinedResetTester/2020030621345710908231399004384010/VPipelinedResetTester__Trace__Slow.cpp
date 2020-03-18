// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelinedResetTester__Syms.h"


//======================

void VPipelinedResetTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VPipelinedResetTester::traceInit, &VPipelinedResetTester::traceFull, &VPipelinedResetTester::traceChg, this);
}
void VPipelinedResetTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPipelinedResetTester* t=(VPipelinedResetTester*)userthis;
    VPipelinedResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPipelinedResetTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPipelinedResetTester* t=(VPipelinedResetTester*)userthis;
    VPipelinedResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VPipelinedResetTester::traceInitThis(VPipelinedResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPipelinedResetTester::traceFullThis(VPipelinedResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPipelinedResetTester::traceInitThis__1(VPipelinedResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"PipelinedResetTester clock",-1);
	vcdp->declBit  (c+3,"PipelinedResetTester reset",-1);
	// Tracing: PipelinedResetTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v:5
	vcdp->declBus  (c+1,"PipelinedResetTester value",-1,1,0);
	// Tracing: PipelinedResetTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v:7
	// Tracing: PipelinedResetTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v:8
	// Tracing: PipelinedResetTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v:9
	vcdp->declBit  (c+4,"PipelinedResetTester done",-1);
    }
}

void VPipelinedResetTester::traceFullThis__1(VPipelinedResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->PipelinedResetTester__DOT__value),2);
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBit  (c+4,(((~ (IData)(vlTOPp->reset)) 
			      & (3U == (IData)(vlTOPp->PipelinedResetTester__DOT__value)))));
    }
}
