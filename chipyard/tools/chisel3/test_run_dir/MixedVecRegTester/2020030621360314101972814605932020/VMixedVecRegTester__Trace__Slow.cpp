// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecRegTester__Syms.h"


//======================

void VMixedVecRegTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMixedVecRegTester::traceInit, &VMixedVecRegTester::traceFull, &VMixedVecRegTester::traceChg, this);
}
void VMixedVecRegTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMixedVecRegTester* t=(VMixedVecRegTester*)userthis;
    VMixedVecRegTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMixedVecRegTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecRegTester* t=(VMixedVecRegTester*)userthis;
    VMixedVecRegTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMixedVecRegTester::traceInitThis(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMixedVecRegTester::traceFullThis(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedVecRegTester::traceInitThis__1(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+7,"clock",-1);
	vcdp->declBit  (c+8,"reset",-1);
	vcdp->declBit  (c+7,"MixedVecRegTester clock",-1);
	vcdp->declBit  (c+8,"MixedVecRegTester reset",-1);
	vcdp->declBit  (c+1,"MixedVecRegTester reg_5",-1);
	// Tracing: MixedVecRegTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:6
	vcdp->declBit  (c+2,"MixedVecRegTester reg_4",-1);
	// Tracing: MixedVecRegTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:8
	vcdp->declBit  (c+3,"MixedVecRegTester reg_3",-1);
	// Tracing: MixedVecRegTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:10
	vcdp->declBit  (c+4,"MixedVecRegTester reg_2",-1);
	// Tracing: MixedVecRegTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:12
	vcdp->declBit  (c+5,"MixedVecRegTester reg_1",-1);
	// Tracing: MixedVecRegTester _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:14
	vcdp->declBit  (c+6,"MixedVecRegTester doneReg",-1);
	// Tracing: MixedVecRegTester _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:16
	// Tracing: MixedVecRegTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:17
	// Tracing: MixedVecRegTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:18
	// Tracing: MixedVecRegTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:19
	// Tracing: MixedVecRegTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:20
	// Tracing: MixedVecRegTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:21
	// Tracing: MixedVecRegTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:22
	// Tracing: MixedVecRegTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:23
	// Tracing: MixedVecRegTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:24
	// Tracing: MixedVecRegTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:25
	// Tracing: MixedVecRegTester _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:26
	// Tracing: MixedVecRegTester _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:27
	// Tracing: MixedVecRegTester _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:28
	// Tracing: MixedVecRegTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030621360314101972814605932020/MixedVecRegTester.v:29
    }
}

void VMixedVecRegTester::traceFullThis__1(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->MixedVecRegTester__DOT__reg_5));
	vcdp->fullBit  (c+2,(vlTOPp->MixedVecRegTester__DOT__reg_4));
	vcdp->fullBit  (c+3,(vlTOPp->MixedVecRegTester__DOT__reg_3));
	vcdp->fullBit  (c+4,(vlTOPp->MixedVecRegTester__DOT__reg_2));
	vcdp->fullBit  (c+5,(vlTOPp->MixedVecRegTester__DOT__reg_1));
	vcdp->fullBit  (c+6,(vlTOPp->MixedVecRegTester__DOT__doneReg));
	vcdp->fullBit  (c+7,(vlTOPp->clock));
	vcdp->fullBit  (c+8,(vlTOPp->reset));
    }
}
