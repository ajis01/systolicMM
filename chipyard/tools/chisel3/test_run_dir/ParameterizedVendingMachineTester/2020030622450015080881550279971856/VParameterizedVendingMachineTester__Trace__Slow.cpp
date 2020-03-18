// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


//======================

void VParameterizedVendingMachineTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VParameterizedVendingMachineTester::traceInit, &VParameterizedVendingMachineTester::traceFull, &VParameterizedVendingMachineTester::traceChg, this);
}
void VParameterizedVendingMachineTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VParameterizedVendingMachineTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VParameterizedVendingMachineTester::traceInitThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VParameterizedVendingMachineTester::traceFullThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedVendingMachineTester::traceInitThis__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+7,"clock",-1);
	vcdp->declBit  (c+8,"reset",-1);
	vcdp->declBit  (c+7,"ParameterizedVendingMachineTester clock",-1);
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester reset",-1);
	vcdp->declBit  (c+7,"ParameterizedVendingMachineTester dut_clock",-1);
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester dut_reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut_io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut_io_dispense",-1);
	vcdp->declBus  (c+3,"ParameterizedVendingMachineTester value",-1,6,0);
	// Tracing: ParameterizedVendingMachineTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:73
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester done",-1);
	// Tracing: ParameterizedVendingMachineTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:75
	// Tracing: ParameterizedVendingMachineTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:76
	// Tracing: ParameterizedVendingMachineTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:77
	// Tracing: ParameterizedVendingMachineTester _GEN_202 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:78
	// Tracing: ParameterizedVendingMachineTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:79
	// Tracing: ParameterizedVendingMachineTester _GEN_203 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:80
	// Tracing: ParameterizedVendingMachineTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:81
	// Tracing: ParameterizedVendingMachineTester _GEN_204 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:82
	// Tracing: ParameterizedVendingMachineTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:83
	// Tracing: ParameterizedVendingMachineTester _GEN_205 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:84
	// Tracing: ParameterizedVendingMachineTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:85
	// Tracing: ParameterizedVendingMachineTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:86
	// Tracing: ParameterizedVendingMachineTester _GEN_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:87
	// Tracing: ParameterizedVendingMachineTester _GEN_206 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:88
	// Tracing: ParameterizedVendingMachineTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:89
	// Tracing: ParameterizedVendingMachineTester _GEN_207 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:90
	// Tracing: ParameterizedVendingMachineTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:91
	// Tracing: ParameterizedVendingMachineTester _GEN_208 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:92
	// Tracing: ParameterizedVendingMachineTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:93
	// Tracing: ParameterizedVendingMachineTester _GEN_209 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:94
	// Tracing: ParameterizedVendingMachineTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:95
	// Tracing: ParameterizedVendingMachineTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:96
	// Tracing: ParameterizedVendingMachineTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:97
	// Tracing: ParameterizedVendingMachineTester _GEN_210 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:98
	// Tracing: ParameterizedVendingMachineTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:99
	// Tracing: ParameterizedVendingMachineTester _GEN_211 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:100
	// Tracing: ParameterizedVendingMachineTester _GEN_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:101
	// Tracing: ParameterizedVendingMachineTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:102
	// Tracing: ParameterizedVendingMachineTester _GEN_212 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:103
	// Tracing: ParameterizedVendingMachineTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:104
	// Tracing: ParameterizedVendingMachineTester _GEN_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:105
	// Tracing: ParameterizedVendingMachineTester _GEN_213 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:106
	// Tracing: ParameterizedVendingMachineTester _GEN_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:107
	// Tracing: ParameterizedVendingMachineTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:108
	// Tracing: ParameterizedVendingMachineTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:109
	// Tracing: ParameterizedVendingMachineTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:110
	// Tracing: ParameterizedVendingMachineTester _GEN_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:111
	// Tracing: ParameterizedVendingMachineTester _GEN_214 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:112
	// Tracing: ParameterizedVendingMachineTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:113
	// Tracing: ParameterizedVendingMachineTester _GEN_215 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:114
	// Tracing: ParameterizedVendingMachineTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:115
	// Tracing: ParameterizedVendingMachineTester _GEN_216 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:116
	// Tracing: ParameterizedVendingMachineTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:117
	// Tracing: ParameterizedVendingMachineTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:118
	// Tracing: ParameterizedVendingMachineTester _GEN_217 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:119
	// Tracing: ParameterizedVendingMachineTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:120
	// Tracing: ParameterizedVendingMachineTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:121
	// Tracing: ParameterizedVendingMachineTester _GEN_218 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:122
	// Tracing: ParameterizedVendingMachineTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:123
	// Tracing: ParameterizedVendingMachineTester _GEN_219 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:124
	// Tracing: ParameterizedVendingMachineTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:125
	// Tracing: ParameterizedVendingMachineTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:126
	// Tracing: ParameterizedVendingMachineTester _GEN_220 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:127
	// Tracing: ParameterizedVendingMachineTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:128
	// Tracing: ParameterizedVendingMachineTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:129
	// Tracing: ParameterizedVendingMachineTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:130
	// Tracing: ParameterizedVendingMachineTester _GEN_221 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:131
	// Tracing: ParameterizedVendingMachineTester _GEN_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:132
	// Tracing: ParameterizedVendingMachineTester _GEN_222 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:133
	// Tracing: ParameterizedVendingMachineTester _GEN_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:134
	// Tracing: ParameterizedVendingMachineTester _GEN_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:135
	// Tracing: ParameterizedVendingMachineTester _GEN_223 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:136
	// Tracing: ParameterizedVendingMachineTester _GEN_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:137
	// Tracing: ParameterizedVendingMachineTester _GEN_224 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:138
	// Tracing: ParameterizedVendingMachineTester _GEN_42 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:139
	// Tracing: ParameterizedVendingMachineTester _GEN_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:140
	// Tracing: ParameterizedVendingMachineTester _GEN_225 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:141
	// Tracing: ParameterizedVendingMachineTester _GEN_44 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:142
	// Tracing: ParameterizedVendingMachineTester _GEN_45 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:143
	// Tracing: ParameterizedVendingMachineTester _GEN_46 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:144
	// Tracing: ParameterizedVendingMachineTester _GEN_47 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:145
	// Tracing: ParameterizedVendingMachineTester _GEN_48 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:146
	// Tracing: ParameterizedVendingMachineTester _GEN_49 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:147
	// Tracing: ParameterizedVendingMachineTester _GEN_226 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:148
	// Tracing: ParameterizedVendingMachineTester _GEN_50 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:149
	// Tracing: ParameterizedVendingMachineTester _GEN_51 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:150
	// Tracing: ParameterizedVendingMachineTester _GEN_227 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:151
	// Tracing: ParameterizedVendingMachineTester _GEN_52 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:152
	// Tracing: ParameterizedVendingMachineTester _GEN_53 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:153
	// Tracing: ParameterizedVendingMachineTester _GEN_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:154
	// Tracing: ParameterizedVendingMachineTester _GEN_228 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:155
	// Tracing: ParameterizedVendingMachineTester _GEN_55 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:156
	// Tracing: ParameterizedVendingMachineTester _GEN_229 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:157
	// Tracing: ParameterizedVendingMachineTester _GEN_56 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:158
	// Tracing: ParameterizedVendingMachineTester _GEN_57 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:159
	// Tracing: ParameterizedVendingMachineTester _GEN_58 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:160
	// Tracing: ParameterizedVendingMachineTester _GEN_59 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:161
	// Tracing: ParameterizedVendingMachineTester _GEN_60 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:162
	// Tracing: ParameterizedVendingMachineTester _GEN_230 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:163
	// Tracing: ParameterizedVendingMachineTester _GEN_61 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:164
	// Tracing: ParameterizedVendingMachineTester _GEN_62 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:165
	// Tracing: ParameterizedVendingMachineTester _GEN_231 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:166
	// Tracing: ParameterizedVendingMachineTester _GEN_63 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:167
	// Tracing: ParameterizedVendingMachineTester _GEN_64 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:168
	// Tracing: ParameterizedVendingMachineTester _GEN_232 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:169
	// Tracing: ParameterizedVendingMachineTester _GEN_65 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:170
	// Tracing: ParameterizedVendingMachineTester _GEN_66 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:171
	// Tracing: ParameterizedVendingMachineTester _GEN_233 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:172
	// Tracing: ParameterizedVendingMachineTester _GEN_67 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:173
	// Tracing: ParameterizedVendingMachineTester _GEN_68 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:174
	// Tracing: ParameterizedVendingMachineTester _GEN_234 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:175
	// Tracing: ParameterizedVendingMachineTester _GEN_69 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:176
	// Tracing: ParameterizedVendingMachineTester _GEN_70 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:177
	// Tracing: ParameterizedVendingMachineTester _GEN_71 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:178
	// Tracing: ParameterizedVendingMachineTester _GEN_72 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:179
	// Tracing: ParameterizedVendingMachineTester _GEN_235 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:180
	// Tracing: ParameterizedVendingMachineTester _GEN_73 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:181
	// Tracing: ParameterizedVendingMachineTester _GEN_236 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:182
	// Tracing: ParameterizedVendingMachineTester _GEN_74 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:183
	// Tracing: ParameterizedVendingMachineTester _GEN_237 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:184
	// Tracing: ParameterizedVendingMachineTester _GEN_75 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:185
	// Tracing: ParameterizedVendingMachineTester _GEN_238 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:186
	// Tracing: ParameterizedVendingMachineTester _GEN_76 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:187
	// Tracing: ParameterizedVendingMachineTester _GEN_77 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:188
	// Tracing: ParameterizedVendingMachineTester _GEN_239 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:189
	// Tracing: ParameterizedVendingMachineTester _GEN_78 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:190
	// Tracing: ParameterizedVendingMachineTester _GEN_240 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:191
	// Tracing: ParameterizedVendingMachineTester _GEN_79 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:192
	// Tracing: ParameterizedVendingMachineTester _GEN_241 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:193
	// Tracing: ParameterizedVendingMachineTester _GEN_80 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:194
	// Tracing: ParameterizedVendingMachineTester _GEN_81 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:195
	// Tracing: ParameterizedVendingMachineTester _GEN_82 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:196
	// Tracing: ParameterizedVendingMachineTester _GEN_83 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:197
	// Tracing: ParameterizedVendingMachineTester _GEN_84 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:198
	// Tracing: ParameterizedVendingMachineTester _GEN_85 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:199
	// Tracing: ParameterizedVendingMachineTester _GEN_242 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:200
	// Tracing: ParameterizedVendingMachineTester _GEN_86 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:201
	// Tracing: ParameterizedVendingMachineTester _GEN_243 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:202
	// Tracing: ParameterizedVendingMachineTester _GEN_87 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:203
	// Tracing: ParameterizedVendingMachineTester _GEN_88 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:204
	// Tracing: ParameterizedVendingMachineTester _GEN_244 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:205
	// Tracing: ParameterizedVendingMachineTester _GEN_89 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:206
	// Tracing: ParameterizedVendingMachineTester _GEN_90 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:207
	// Tracing: ParameterizedVendingMachineTester _GEN_245 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:208
	// Tracing: ParameterizedVendingMachineTester _GEN_91 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:209
	// Tracing: ParameterizedVendingMachineTester _GEN_246 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:210
	// Tracing: ParameterizedVendingMachineTester _GEN_92 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:211
	// Tracing: ParameterizedVendingMachineTester _GEN_93 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:212
	// Tracing: ParameterizedVendingMachineTester _GEN_94 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:213
	// Tracing: ParameterizedVendingMachineTester _GEN_247 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:214
	// Tracing: ParameterizedVendingMachineTester _GEN_95 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:215
	// Tracing: ParameterizedVendingMachineTester _GEN_96 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:216
	// Tracing: ParameterizedVendingMachineTester _GEN_248 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:217
	// Tracing: ParameterizedVendingMachineTester _GEN_97 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:218
	// Tracing: ParameterizedVendingMachineTester _GEN_98 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:219
	// Tracing: ParameterizedVendingMachineTester _GEN_249 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:220
	// Tracing: ParameterizedVendingMachineTester _GEN_99 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:221
	// Tracing: ParameterizedVendingMachineTester _GEN_250 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:222
	// Tracing: ParameterizedVendingMachineTester _GEN_100 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:223
	// Tracing: ParameterizedVendingMachineTester _GEN_251 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:224
	// Tracing: ParameterizedVendingMachineTester _GEN_112 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:225
	// Tracing: ParameterizedVendingMachineTester _GEN_113 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:226
	// Tracing: ParameterizedVendingMachineTester _GEN_114 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:227
	// Tracing: ParameterizedVendingMachineTester _GEN_115 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:228
	// Tracing: ParameterizedVendingMachineTester _GEN_116 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:229
	// Tracing: ParameterizedVendingMachineTester _GEN_117 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:230
	// Tracing: ParameterizedVendingMachineTester _GEN_118 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:231
	// Tracing: ParameterizedVendingMachineTester _GEN_119 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:232
	// Tracing: ParameterizedVendingMachineTester _GEN_120 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:233
	// Tracing: ParameterizedVendingMachineTester _GEN_121 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:234
	// Tracing: ParameterizedVendingMachineTester _GEN_252 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:235
	// Tracing: ParameterizedVendingMachineTester _GEN_122 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:236
	// Tracing: ParameterizedVendingMachineTester _GEN_123 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:237
	// Tracing: ParameterizedVendingMachineTester _GEN_124 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:238
	// Tracing: ParameterizedVendingMachineTester _GEN_125 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:239
	// Tracing: ParameterizedVendingMachineTester _GEN_126 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:240
	// Tracing: ParameterizedVendingMachineTester _GEN_127 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:241
	// Tracing: ParameterizedVendingMachineTester _GEN_128 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:242
	// Tracing: ParameterizedVendingMachineTester _GEN_129 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:243
	// Tracing: ParameterizedVendingMachineTester _GEN_130 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:244
	// Tracing: ParameterizedVendingMachineTester _GEN_131 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:245
	// Tracing: ParameterizedVendingMachineTester _GEN_132 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:246
	// Tracing: ParameterizedVendingMachineTester _GEN_133 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:247
	// Tracing: ParameterizedVendingMachineTester _GEN_253 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:248
	// Tracing: ParameterizedVendingMachineTester _GEN_134 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:249
	// Tracing: ParameterizedVendingMachineTester _GEN_135 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:250
	// Tracing: ParameterizedVendingMachineTester _GEN_136 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:251
	// Tracing: ParameterizedVendingMachineTester _GEN_137 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:252
	// Tracing: ParameterizedVendingMachineTester _GEN_138 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:253
	// Tracing: ParameterizedVendingMachineTester _GEN_139 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:254
	// Tracing: ParameterizedVendingMachineTester _GEN_140 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:255
	// Tracing: ParameterizedVendingMachineTester _GEN_141 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:256
	// Tracing: ParameterizedVendingMachineTester _GEN_142 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:257
	// Tracing: ParameterizedVendingMachineTester _GEN_143 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:258
	// Tracing: ParameterizedVendingMachineTester _GEN_144 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:259
	// Tracing: ParameterizedVendingMachineTester _GEN_254 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:260
	// Tracing: ParameterizedVendingMachineTester _GEN_145 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:261
	// Tracing: ParameterizedVendingMachineTester _GEN_146 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:262
	// Tracing: ParameterizedVendingMachineTester _GEN_147 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:263
	// Tracing: ParameterizedVendingMachineTester _GEN_148 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:264
	// Tracing: ParameterizedVendingMachineTester _GEN_149 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:265
	// Tracing: ParameterizedVendingMachineTester _GEN_150 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:266
	// Tracing: ParameterizedVendingMachineTester _GEN_151 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:267
	// Tracing: ParameterizedVendingMachineTester _GEN_152 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:268
	// Tracing: ParameterizedVendingMachineTester _GEN_153 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:269
	// Tracing: ParameterizedVendingMachineTester _GEN_154 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:270
	// Tracing: ParameterizedVendingMachineTester _GEN_155 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:271
	// Tracing: ParameterizedVendingMachineTester _GEN_156 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:272
	// Tracing: ParameterizedVendingMachineTester _GEN_157 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:273
	// Tracing: ParameterizedVendingMachineTester _GEN_158 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:274
	// Tracing: ParameterizedVendingMachineTester _GEN_159 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:275
	// Tracing: ParameterizedVendingMachineTester _GEN_160 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:276
	// Tracing: ParameterizedVendingMachineTester _GEN_161 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:277
	// Tracing: ParameterizedVendingMachineTester _GEN_162 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:278
	// Tracing: ParameterizedVendingMachineTester _GEN_163 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:279
	// Tracing: ParameterizedVendingMachineTester _GEN_255 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:280
	// Tracing: ParameterizedVendingMachineTester _GEN_164 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:281
	// Tracing: ParameterizedVendingMachineTester _GEN_165 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:282
	// Tracing: ParameterizedVendingMachineTester _GEN_166 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:283
	// Tracing: ParameterizedVendingMachineTester _GEN_167 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:284
	// Tracing: ParameterizedVendingMachineTester _GEN_168 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:285
	// Tracing: ParameterizedVendingMachineTester _GEN_169 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:286
	// Tracing: ParameterizedVendingMachineTester _GEN_170 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:287
	// Tracing: ParameterizedVendingMachineTester _GEN_171 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:288
	// Tracing: ParameterizedVendingMachineTester _GEN_172 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:289
	// Tracing: ParameterizedVendingMachineTester _GEN_173 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:290
	// Tracing: ParameterizedVendingMachineTester _GEN_174 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:291
	// Tracing: ParameterizedVendingMachineTester _GEN_175 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:292
	// Tracing: ParameterizedVendingMachineTester _GEN_176 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:293
	// Tracing: ParameterizedVendingMachineTester _GEN_177 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:294
	// Tracing: ParameterizedVendingMachineTester _GEN_178 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:295
	// Tracing: ParameterizedVendingMachineTester _GEN_179 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:296
	// Tracing: ParameterizedVendingMachineTester _GEN_180 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:297
	// Tracing: ParameterizedVendingMachineTester _GEN_181 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:298
	// Tracing: ParameterizedVendingMachineTester _GEN_182 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:299
	// Tracing: ParameterizedVendingMachineTester _GEN_183 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:300
	// Tracing: ParameterizedVendingMachineTester _GEN_184 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:301
	// Tracing: ParameterizedVendingMachineTester _GEN_185 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:302
	// Tracing: ParameterizedVendingMachineTester _GEN_186 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:303
	// Tracing: ParameterizedVendingMachineTester _GEN_187 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:304
	// Tracing: ParameterizedVendingMachineTester _GEN_188 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:305
	// Tracing: ParameterizedVendingMachineTester _GEN_189 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:306
	// Tracing: ParameterizedVendingMachineTester _GEN_257 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:307
	// Tracing: ParameterizedVendingMachineTester _GEN_190 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:308
	// Tracing: ParameterizedVendingMachineTester _GEN_191 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:309
	// Tracing: ParameterizedVendingMachineTester _GEN_192 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:310
	// Tracing: ParameterizedVendingMachineTester _GEN_193 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:311
	// Tracing: ParameterizedVendingMachineTester _GEN_194 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:312
	// Tracing: ParameterizedVendingMachineTester _GEN_195 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:313
	// Tracing: ParameterizedVendingMachineTester _GEN_196 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:314
	// Tracing: ParameterizedVendingMachineTester _GEN_197 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:315
	// Tracing: ParameterizedVendingMachineTester _GEN_198 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:316
	// Tracing: ParameterizedVendingMachineTester _GEN_199 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:317
	// Tracing: ParameterizedVendingMachineTester _GEN_200 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:318
	// Tracing: ParameterizedVendingMachineTester _GEN_201 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:319
	// Tracing: ParameterizedVendingMachineTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:320
	// Tracing: ParameterizedVendingMachineTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:321
	// Tracing: ParameterizedVendingMachineTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:322
	vcdp->declBit  (c+7,"ParameterizedVendingMachineTester dut clock",-1);
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester dut reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut io_dispense",-1);
	vcdp->declBus  (c+5,"ParameterizedVendingMachineTester dut value",-1,2,0);
	// Tracing: ParameterizedVendingMachineTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:8
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut doDispense",-1);
	vcdp->declBus  (c+6,"ParameterizedVendingMachineTester dut incValue",-1,2,0);
	// Tracing: ParameterizedVendingMachineTester dut _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450015080881550279971856/ParameterizedVendingMachineTester.v:11
    }
}

void VParameterizedVendingMachineTester::traceFullThis__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			      | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				 | ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				    | ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				       & ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					  | ((0x5eU 
					      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					     & ((0x5dU 
						 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						| ((0x5cU 
						    != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						   & ((0x5bU 
						       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						      & ((0x5aU 
							  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							 | ((0x59U 
							     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							    | ((0x58U 
								!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							       & ((0x57U 
								   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								  | ((0x56U 
								      != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								     & ((0x55U 
									 == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									| ((0x54U 
									    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									   | ((0x53U 
									       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									      & ((0x52U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x51U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x50U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x49U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x40U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x10U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xdU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((7U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((6U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| (1U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
	vcdp->fullBit  (c+2,((6U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
	vcdp->fullBus  (c+3,(vlTOPp->ParameterizedVendingMachineTester__DOT__value),7);
	vcdp->fullBit  (c+4,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))));
	vcdp->fullBus  (c+5,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
	vcdp->fullBus  (c+6,((((0x63U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
			       | ((0x62U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				  | ((0x61U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
				     | ((0x60U != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					& ((0x5fU == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					   | ((0x5eU 
					       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
					      & ((0x5dU 
						  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						 | ((0x5cU 
						     != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						    & ((0x5bU 
							!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
						       & ((0x5aU 
							   == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							  | ((0x59U 
							      == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
							     | ((0x58U 
								 != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								& ((0x57U 
								    == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								   | ((0x56U 
								       != (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
								      & ((0x55U 
									  == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									 | ((0x54U 
									     == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									    | ((0x53U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
									       & ((0x52U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x51U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x50U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x4bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x4aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x49U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x48U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x47U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x46U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x45U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x44U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x43U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x42U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x41U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x40U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3dU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x3bU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x3aU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x39U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x38U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x37U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x36U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x35U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x34U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x33U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x32U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x31U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x30U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x2fU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2eU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2cU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x2aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x29U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x28U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x27U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x26U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x25U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x24U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x23U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x22U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x21U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x20U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1fU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1eU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1dU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1cU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x1bU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x1aU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x19U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x18U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x17U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x16U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x15U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x14U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x13U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0x11U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0x10U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xfU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xdU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((0xbU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((8U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((7U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((6U 
										!= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										& ((5U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((4U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((3U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| ((2U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value)) 
										| (1U 
										== (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
			       ? 1U : 0U)),3);
	vcdp->fullBit  (c+7,(vlTOPp->clock));
	vcdp->fullBit  (c+8,(vlTOPp->reset));
    }
}
