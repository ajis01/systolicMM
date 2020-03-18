// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStrongEnumFSMTester__Syms.h"


//======================

void VStrongEnumFSMTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VStrongEnumFSMTester::traceInit, &VStrongEnumFSMTester::traceFull, &VStrongEnumFSMTester::traceChg, this);
}
void VStrongEnumFSMTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStrongEnumFSMTester* t=(VStrongEnumFSMTester*)userthis;
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStrongEnumFSMTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStrongEnumFSMTester* t=(VStrongEnumFSMTester*)userthis;
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VStrongEnumFSMTester::traceInitThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStrongEnumFSMTester::traceFullThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStrongEnumFSMTester::traceInitThis__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"clock",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declBit  (c+5,"StrongEnumFSMTester clock",-1);
	vcdp->declBit  (c+6,"StrongEnumFSMTester reset",-1);
	vcdp->declBit  (c+5,"StrongEnumFSMTester dut_clock",-1);
	vcdp->declBit  (c+6,"StrongEnumFSMTester dut_reset",-1);
	vcdp->declBit  (c+1,"StrongEnumFSMTester dut_io_in",-1);
	vcdp->declBit  (c+2,"StrongEnumFSMTester dut_io_out",-1);
	vcdp->declBus  (c+3,"StrongEnumFSMTester dut_io_state",-1,1,0);
	vcdp->declBus  (c+4,"StrongEnumFSMTester value",-1,3,0);
	// Tracing: StrongEnumFSMTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:94
	// Tracing: StrongEnumFSMTester _GEN_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:95
	// Tracing: StrongEnumFSMTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:96
	// Tracing: StrongEnumFSMTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:97
	// Tracing: StrongEnumFSMTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:98
	// Tracing: StrongEnumFSMTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:99
	// Tracing: StrongEnumFSMTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:100
	// Tracing: StrongEnumFSMTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:101
	// Tracing: StrongEnumFSMTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:102
	// Tracing: StrongEnumFSMTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:103
	// Tracing: StrongEnumFSMTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:104
	// Tracing: StrongEnumFSMTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:105
	// Tracing: StrongEnumFSMTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:106
	// Tracing: StrongEnumFSMTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:107
	// Tracing: StrongEnumFSMTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:108
	// Tracing: StrongEnumFSMTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:109
	// Tracing: StrongEnumFSMTester _GEN_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:110
	// Tracing: StrongEnumFSMTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:111
	// Tracing: StrongEnumFSMTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:112
	// Tracing: StrongEnumFSMTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:113
	// Tracing: StrongEnumFSMTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:114
	// Tracing: StrongEnumFSMTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:115
	// Tracing: StrongEnumFSMTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:116
	// Tracing: StrongEnumFSMTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:117
	// Tracing: StrongEnumFSMTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:118
	// Tracing: StrongEnumFSMTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:119
	// Tracing: StrongEnumFSMTester _GEN_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:120
	// Tracing: StrongEnumFSMTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:121
	// Tracing: StrongEnumFSMTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:122
	// Tracing: StrongEnumFSMTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:123
	// Tracing: StrongEnumFSMTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:124
	// Tracing: StrongEnumFSMTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:125
	// Tracing: StrongEnumFSMTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:126
	// Tracing: StrongEnumFSMTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:127
	// Tracing: StrongEnumFSMTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:128
	// Tracing: StrongEnumFSMTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:129
	// Tracing: StrongEnumFSMTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:130
	vcdp->declBit  (c+5,"StrongEnumFSMTester dut clock",-1);
	vcdp->declBit  (c+6,"StrongEnumFSMTester dut reset",-1);
	vcdp->declBit  (c+1,"StrongEnumFSMTester dut io_in",-1);
	vcdp->declBit  (c+2,"StrongEnumFSMTester dut io_out",-1);
	vcdp->declBus  (c+3,"StrongEnumFSMTester dut io_state",-1,1,0);
	vcdp->declBus  (c+3,"StrongEnumFSMTester dut state",-1,1,0);
	// Tracing: StrongEnumFSMTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:9
	// Tracing: StrongEnumFSMTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:10
	// Tracing: StrongEnumFSMTester dut _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:11
	// Tracing: StrongEnumFSMTester dut _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:12
	// Tracing: StrongEnumFSMTester dut _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:13
	// Tracing: StrongEnumFSMTester dut _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:14
    }
}

void VStrongEnumFSMTester::traceFullThis__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->StrongEnumFSMTester__DOT__dut_io_in));
	vcdp->fullBit  (c+2,((2U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state))));
	vcdp->fullBus  (c+3,(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state),2);
	vcdp->fullBus  (c+4,(vlTOPp->StrongEnumFSMTester__DOT__value),4);
	vcdp->fullBit  (c+5,(vlTOPp->clock));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
    }
}
