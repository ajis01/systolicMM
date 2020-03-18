// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecUIntDynamicIndexTester__Syms.h"


//======================

void VMixedVecUIntDynamicIndexTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMixedVecUIntDynamicIndexTester::traceInit, &VMixedVecUIntDynamicIndexTester::traceFull, &VMixedVecUIntDynamicIndexTester::traceChg, this);
}
void VMixedVecUIntDynamicIndexTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMixedVecUIntDynamicIndexTester* t=(VMixedVecUIntDynamicIndexTester*)userthis;
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMixedVecUIntDynamicIndexTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecUIntDynamicIndexTester* t=(VMixedVecUIntDynamicIndexTester*)userthis;
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMixedVecUIntDynamicIndexTester::traceInitThis(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMixedVecUIntDynamicIndexTester::traceFullThis(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedVecUIntDynamicIndexTester::traceInitThis__1(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBit  (c+3,"MixedVecUIntDynamicIndexTester clock",-1);
	vcdp->declBit  (c+4,"MixedVecUIntDynamicIndexTester reset",-1);
	vcdp->declBus  (c+1,"MixedVecUIntDynamicIndexTester value",-1,1,0);
	// Tracing: MixedVecUIntDynamicIndexTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:6
	vcdp->declBit  (c+2,"MixedVecUIntDynamicIndexTester done",-1);
	// Tracing: MixedVecUIntDynamicIndexTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:8
	// Tracing: MixedVecUIntDynamicIndexTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:9
	// Tracing: MixedVecUIntDynamicIndexTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:10
	// Tracing: MixedVecUIntDynamicIndexTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:11
	// Tracing: MixedVecUIntDynamicIndexTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:12
	// Tracing: MixedVecUIntDynamicIndexTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:13
	// Tracing: MixedVecUIntDynamicIndexTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:14
	// Tracing: MixedVecUIntDynamicIndexTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:15
	// Tracing: MixedVecUIntDynamicIndexTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:16
    }
}

void VMixedVecUIntDynamicIndexTester::traceFullThis__1(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value),2);
	vcdp->fullBit  (c+2,((3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))));
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
    }
}
