// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCountIsCorrectTester__Syms.h"


//======================

void VCountIsCorrectTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCountIsCorrectTester::traceInit, &VCountIsCorrectTester::traceFull, &VCountIsCorrectTester::traceChg, this);
}
void VCountIsCorrectTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCountIsCorrectTester* t=(VCountIsCorrectTester*)userthis;
    VCountIsCorrectTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCountIsCorrectTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCountIsCorrectTester* t=(VCountIsCorrectTester*)userthis;
    VCountIsCorrectTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCountIsCorrectTester::traceInitThis(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCountIsCorrectTester::traceFullThis(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCountIsCorrectTester::traceInitThis__1(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+26,"clock",-1);
	vcdp->declBit  (c+27,"reset",-1);
	vcdp->declBit  (c+26,"CountIsCorrectTester clock",-1);
	vcdp->declBit  (c+27,"CountIsCorrectTester reset",-1);
	vcdp->declBit  (c+26,"CountIsCorrectTester q_clock",-1);
	vcdp->declBit  (c+27,"CountIsCorrectTester q_reset",-1);
	vcdp->declBit  (c+1,"CountIsCorrectTester q_io_enq_ready",-1);
	vcdp->declBit  (c+5,"CountIsCorrectTester q_io_enq_valid",-1);
	vcdp->declBit  (c+2,"CountIsCorrectTester q_io_deq_ready",-1);
	vcdp->declBit  (c+3,"CountIsCorrectTester q_io_deq_valid",-1);
	vcdp->declBus  (c+4,"CountIsCorrectTester q_io_count",-1,2,0);
	vcdp->declBit  (c+26,"CountIsCorrectTester MaxPeriodFibonacciLFSR_clock",-1);
	vcdp->declBit  (c+27,"CountIsCorrectTester MaxPeriodFibonacciLFSR_reset",-1);
	vcdp->declBit  (c+6,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_0",-1);
	vcdp->declBit  (c+7,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_1",-1);
	vcdp->declBit  (c+8,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_2",-1);
	vcdp->declBit  (c+9,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_3",-1);
	vcdp->declBit  (c+10,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_4",-1);
	vcdp->declBit  (c+11,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_5",-1);
	vcdp->declBit  (c+12,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_6",-1);
	vcdp->declBit  (c+13,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_7",-1);
	vcdp->declBit  (c+14,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_8",-1);
	vcdp->declBit  (c+15,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_9",-1);
	vcdp->declBit  (c+16,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_10",-1);
	vcdp->declBit  (c+17,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_11",-1);
	vcdp->declBit  (c+18,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_12",-1);
	vcdp->declBit  (c+19,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_13",-1);
	vcdp->declBit  (c+20,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_14",-1);
	vcdp->declBit  (c+21,"CountIsCorrectTester MaxPeriodFibonacciLFSR_io_out_15",-1);
	vcdp->declBus  (c+22,"CountIsCorrectTester value",-1,4,0);
	// Tracing: CountIsCorrectTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:392
	vcdp->declBus  (c+23,"CountIsCorrectTester value_1",-1,4,0);
	// Tracing: CountIsCorrectTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:394
	// Tracing: CountIsCorrectTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:395
	// Tracing: CountIsCorrectTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:396
	// Tracing: CountIsCorrectTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:397
	// Tracing: CountIsCorrectTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:398
	// Tracing: CountIsCorrectTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:399
	// Tracing: CountIsCorrectTester _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:400
	// Tracing: CountIsCorrectTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:401
	// Tracing: CountIsCorrectTester _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:402
	// Tracing: CountIsCorrectTester _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:403
	// Tracing: CountIsCorrectTester _T_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:404
	// Tracing: CountIsCorrectTester _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:405
	// Tracing: CountIsCorrectTester _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:406
	// Tracing: CountIsCorrectTester _T_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:407
	// Tracing: CountIsCorrectTester _T_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:408
	vcdp->declBit  (c+26,"CountIsCorrectTester q clock",-1);
	vcdp->declBit  (c+27,"CountIsCorrectTester q reset",-1);
	vcdp->declBit  (c+1,"CountIsCorrectTester q io_enq_ready",-1);
	vcdp->declBit  (c+5,"CountIsCorrectTester q io_enq_valid",-1);
	vcdp->declBit  (c+2,"CountIsCorrectTester q io_deq_ready",-1);
	vcdp->declBit  (c+3,"CountIsCorrectTester q io_deq_valid",-1);
	vcdp->declBus  (c+4,"CountIsCorrectTester q io_count",-1,2,0);
	vcdp->declBus  (c+24,"CountIsCorrectTester q value",-1,1,0);
	// Tracing: CountIsCorrectTester q _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:11
	vcdp->declBus  (c+25,"CountIsCorrectTester q value_1",-1,1,0);
	// Tracing: CountIsCorrectTester q _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:13
	// Tracing: CountIsCorrectTester q _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:14
	// Tracing: CountIsCorrectTester q _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:15
	// Tracing: CountIsCorrectTester q _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:16
	// Tracing: CountIsCorrectTester q _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:17
	// Tracing: CountIsCorrectTester q _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:18
	// Tracing: CountIsCorrectTester q _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:19
	// Tracing: CountIsCorrectTester q _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:20
	// Tracing: CountIsCorrectTester q _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:21
	// Tracing: CountIsCorrectTester q _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:22
	// Tracing: CountIsCorrectTester q _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:23
	// Tracing: CountIsCorrectTester q _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:24
	// Tracing: CountIsCorrectTester q _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:25
	// Tracing: CountIsCorrectTester q _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:26
	// Tracing: CountIsCorrectTester q _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:27
	// Tracing: CountIsCorrectTester q _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:28
	vcdp->declBit  (c+26,"CountIsCorrectTester MaxPeriodFibonacciLFSR clock",-1);
	vcdp->declBit  (c+27,"CountIsCorrectTester MaxPeriodFibonacciLFSR reset",-1);
	vcdp->declBit  (c+6,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_0",-1);
	vcdp->declBit  (c+7,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_1",-1);
	vcdp->declBit  (c+8,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_2",-1);
	vcdp->declBit  (c+9,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_3",-1);
	vcdp->declBit  (c+10,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_4",-1);
	vcdp->declBit  (c+11,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_5",-1);
	vcdp->declBit  (c+12,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_6",-1);
	vcdp->declBit  (c+13,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_7",-1);
	vcdp->declBit  (c+14,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_8",-1);
	vcdp->declBit  (c+15,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_9",-1);
	vcdp->declBit  (c+16,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_10",-1);
	vcdp->declBit  (c+17,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_11",-1);
	vcdp->declBit  (c+18,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_12",-1);
	vcdp->declBit  (c+19,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_13",-1);
	vcdp->declBit  (c+20,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_14",-1);
	vcdp->declBit  (c+21,"CountIsCorrectTester MaxPeriodFibonacciLFSR io_out_15",-1);
	vcdp->declBit  (c+6,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_0",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:134
	vcdp->declBit  (c+7,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_1",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:136
	vcdp->declBit  (c+8,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_2",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:138
	vcdp->declBit  (c+9,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_3",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:140
	vcdp->declBit  (c+10,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_4",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:142
	vcdp->declBit  (c+11,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_5",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:144
	vcdp->declBit  (c+12,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_6",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:146
	vcdp->declBit  (c+13,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_7",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:148
	vcdp->declBit  (c+14,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_8",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:150
	vcdp->declBit  (c+15,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_9",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:152
	vcdp->declBit  (c+16,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_10",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:154
	vcdp->declBit  (c+17,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_11",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:156
	vcdp->declBit  (c+18,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_12",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:158
	vcdp->declBit  (c+19,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_13",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:160
	vcdp->declBit  (c+20,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_14",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:162
	vcdp->declBit  (c+21,"CountIsCorrectTester MaxPeriodFibonacciLFSR state_15",-1);
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _RAND_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:164
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:165
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:166
	// Tracing: CountIsCorrectTester MaxPeriodFibonacciLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/202003062246227411224832654537148/CountIsCorrectTester.v:167
    }
}

void VCountIsCorrectTester::traceFullThis__1(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5)))));
	vcdp->fullBit  (c+2,((1U & ((IData)(vlTOPp->CountIsCorrectTester__DOT___T_15) 
				    >> 0xfU))));
	vcdp->fullBit  (c+3,((1U & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4)))));
	vcdp->fullBus  (c+4,(((((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1) 
				& (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2))
			        ? 4U : 0U) | (3U & 
					      ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value) 
					       - (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1))))),3);
	vcdp->fullBit  (c+5,((0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value))));
	vcdp->fullBit  (c+6,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->fullBit  (c+7,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->fullBit  (c+8,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->fullBit  (c+9,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->fullBit  (c+10,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->fullBit  (c+11,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->fullBit  (c+12,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->fullBit  (c+13,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->fullBit  (c+14,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->fullBit  (c+15,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->fullBit  (c+16,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->fullBit  (c+17,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->fullBit  (c+18,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->fullBit  (c+19,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->fullBit  (c+20,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->fullBit  (c+21,(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->fullBus  (c+22,(vlTOPp->CountIsCorrectTester__DOT__value),5);
	vcdp->fullBus  (c+23,(vlTOPp->CountIsCorrectTester__DOT__value_1),5);
	vcdp->fullBus  (c+24,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value),2);
	vcdp->fullBus  (c+25,(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1),2);
	vcdp->fullBit  (c+26,(vlTOPp->clock));
	vcdp->fullBit  (c+27,(vlTOPp->reset));
    }
}
