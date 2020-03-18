// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


//======================

void VLFSRResetTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VLFSRResetTester::traceInit, &VLFSRResetTester::traceFull, &VLFSRResetTester::traceChg, this);
}
void VLFSRResetTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VLFSRResetTester* t=(VLFSRResetTester*)userthis;
    VLFSRResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VLFSRResetTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLFSRResetTester* t=(VLFSRResetTester*)userthis;
    VLFSRResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VLFSRResetTester::traceInitThis(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VLFSRResetTester::traceFullThis(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLFSRResetTester::traceInitThis__1(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+6,"clock",-1);
	vcdp->declBit  (c+7,"reset",-1);
	vcdp->declBit  (c+6,"LFSRResetTester clock",-1);
	vcdp->declBit  (c+7,"LFSRResetTester reset",-1);
	vcdp->declBit  (c+6,"LFSRResetTester lfsr_clock",-1);
	vcdp->declBit  (c+1,"LFSRResetTester lfsr_reset",-1);
	vcdp->declBit  (c+2,"LFSRResetTester lfsr_io_seed_valid",-1);
	vcdp->declBit  (c+3,"LFSRResetTester lfsr_io_out_0",-1);
	vcdp->declBus  (c+4,"LFSRResetTester value",-1,2,0);
	// Tracing: LFSRResetTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:61
	vcdp->declBit  (c+5,"LFSRResetTester done",-1);
	// Tracing: LFSRResetTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:63
	// Tracing: LFSRResetTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:64
	// Tracing: LFSRResetTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:65
	// Tracing: LFSRResetTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:66
	// Tracing: LFSRResetTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:67
	// Tracing: LFSRResetTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:68
	// Tracing: LFSRResetTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:69
	// Tracing: LFSRResetTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:70
	// Tracing: LFSRResetTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:71
	// Tracing: LFSRResetTester _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:72
	vcdp->declBit  (c+6,"LFSRResetTester lfsr clock",-1);
	vcdp->declBit  (c+1,"LFSRResetTester lfsr reset",-1);
	vcdp->declBit  (c+2,"LFSRResetTester lfsr io_seed_valid",-1);
	vcdp->declBit  (c+3,"LFSRResetTester lfsr io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRResetTester lfsr state_0",-1);
	// Tracing: LFSRResetTester lfsr _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:8
	// Tracing: LFSRResetTester lfsr _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062244239773761637698201532/LFSRResetTester.v:9
    }
}

void VLFSRResetTester::traceFullThis__1(VLFSRResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((3U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
	vcdp->fullBit  (c+2,((1U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
	vcdp->fullBit  (c+3,(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
	vcdp->fullBus  (c+4,(vlTOPp->LFSRResetTester__DOT__value),3);
	vcdp->fullBit  (c+5,((4U == (IData)(vlTOPp->LFSRResetTester__DOT__value))));
	vcdp->fullBit  (c+6,(vlTOPp->clock));
	vcdp->fullBit  (c+7,(vlTOPp->reset));
    }
}
