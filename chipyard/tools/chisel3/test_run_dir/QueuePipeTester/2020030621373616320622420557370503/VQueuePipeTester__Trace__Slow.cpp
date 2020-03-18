// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueuePipeTester__Syms.h"


//======================

void VQueuePipeTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VQueuePipeTester::traceInit, &VQueuePipeTester::traceFull, &VQueuePipeTester::traceChg, this);
}
void VQueuePipeTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VQueuePipeTester* t=(VQueuePipeTester*)userthis;
    VQueuePipeTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VQueuePipeTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueuePipeTester* t=(VQueuePipeTester*)userthis;
    VQueuePipeTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VQueuePipeTester::traceInitThis(VQueuePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VQueuePipeTester::traceFullThis(VQueuePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VQueuePipeTester::traceInitThis__1(VQueuePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+26,"clock",-1);
	vcdp->declBit  (c+27,"reset",-1);
	vcdp->declBit  (c+26,"QueuePipeTester clock",-1);
	vcdp->declBit  (c+27,"QueuePipeTester reset",-1);
	vcdp->declBit  (c+26,"QueuePipeTester q_clock",-1);
	vcdp->declBit  (c+27,"QueuePipeTester q_reset",-1);
	vcdp->declBit  (c+1,"QueuePipeTester q_io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueuePipeTester q_io_enq_valid",-1);
	vcdp->declBit  (c+2,"QueuePipeTester q_io_deq_ready",-1);
	vcdp->declBit  (c+3,"QueuePipeTester q_io_deq_valid",-1);
	vcdp->declBus  (c+4,"QueuePipeTester q_io_count",-1,1,0);
	vcdp->declBit  (c+26,"QueuePipeTester MaxPeriodFibonacciLFSR_clock",-1);
	vcdp->declBit  (c+27,"QueuePipeTester MaxPeriodFibonacciLFSR_reset",-1);
	vcdp->declBit  (c+6,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_0",-1);
	vcdp->declBit  (c+7,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_1",-1);
	vcdp->declBit  (c+8,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_2",-1);
	vcdp->declBit  (c+9,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_3",-1);
	vcdp->declBit  (c+10,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_4",-1);
	vcdp->declBit  (c+11,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_5",-1);
	vcdp->declBit  (c+12,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_6",-1);
	vcdp->declBit  (c+13,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_7",-1);
	vcdp->declBit  (c+14,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_8",-1);
	vcdp->declBit  (c+15,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_9",-1);
	vcdp->declBit  (c+16,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_10",-1);
	vcdp->declBit  (c+17,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_11",-1);
	vcdp->declBit  (c+18,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_12",-1);
	vcdp->declBit  (c+19,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_13",-1);
	vcdp->declBit  (c+20,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_14",-1);
	vcdp->declBit  (c+21,"QueuePipeTester MaxPeriodFibonacciLFSR_io_out_15",-1);
	vcdp->declBus  (c+22,"QueuePipeTester value",-1,4,0);
	// Tracing: QueuePipeTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:394
	vcdp->declBus  (c+23,"QueuePipeTester value_1",-1,4,0);
	// Tracing: QueuePipeTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:396
	// Tracing: QueuePipeTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:397
	// Tracing: QueuePipeTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:398
	// Tracing: QueuePipeTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:399
	// Tracing: QueuePipeTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:400
	// Tracing: QueuePipeTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:401
	// Tracing: QueuePipeTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:402
	// Tracing: QueuePipeTester _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:403
	// Tracing: QueuePipeTester _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:404
	// Tracing: QueuePipeTester _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:405
	// Tracing: QueuePipeTester _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:406
	// Tracing: QueuePipeTester _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:407
	// Tracing: QueuePipeTester _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:408
	// Tracing: QueuePipeTester _T_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:409
	// Tracing: QueuePipeTester _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:410
	// Tracing: QueuePipeTester _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:411
	vcdp->declBit  (c+26,"QueuePipeTester q clock",-1);
	vcdp->declBit  (c+27,"QueuePipeTester q reset",-1);
	vcdp->declBit  (c+1,"QueuePipeTester q io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueuePipeTester q io_enq_valid",-1);
	vcdp->declBit  (c+2,"QueuePipeTester q io_deq_ready",-1);
	vcdp->declBit  (c+3,"QueuePipeTester q io_deq_valid",-1);
	vcdp->declBus  (c+4,"QueuePipeTester q io_count",-1,1,0);
	vcdp->declBit  (c+24,"QueuePipeTester q value",-1);
	// Tracing: QueuePipeTester q _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:11
	vcdp->declBit  (c+25,"QueuePipeTester q value_1",-1);
	// Tracing: QueuePipeTester q _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:13
	// Tracing: QueuePipeTester q _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:14
	// Tracing: QueuePipeTester q _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:15
	// Tracing: QueuePipeTester q _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:16
	// Tracing: QueuePipeTester q _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:17
	// Tracing: QueuePipeTester q _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:18
	// Tracing: QueuePipeTester q _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:19
	// Tracing: QueuePipeTester q _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:20
	// Tracing: QueuePipeTester q _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:21
	// Tracing: QueuePipeTester q _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:22
	// Tracing: QueuePipeTester q _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:23
	// Tracing: QueuePipeTester q _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:24
	// Tracing: QueuePipeTester q _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:25
	// Tracing: QueuePipeTester q _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:26
	// Tracing: QueuePipeTester q _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:27
	// Tracing: QueuePipeTester q _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:28
	// Tracing: QueuePipeTester q _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:29
	vcdp->declBit  (c+26,"QueuePipeTester MaxPeriodFibonacciLFSR clock",-1);
	vcdp->declBit  (c+27,"QueuePipeTester MaxPeriodFibonacciLFSR reset",-1);
	vcdp->declBit  (c+6,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_0",-1);
	vcdp->declBit  (c+7,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_1",-1);
	vcdp->declBit  (c+8,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_2",-1);
	vcdp->declBit  (c+9,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_3",-1);
	vcdp->declBit  (c+10,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_4",-1);
	vcdp->declBit  (c+11,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_5",-1);
	vcdp->declBit  (c+12,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_6",-1);
	vcdp->declBit  (c+13,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_7",-1);
	vcdp->declBit  (c+14,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_8",-1);
	vcdp->declBit  (c+15,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_9",-1);
	vcdp->declBit  (c+16,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_10",-1);
	vcdp->declBit  (c+17,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_11",-1);
	vcdp->declBit  (c+18,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_12",-1);
	vcdp->declBit  (c+19,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_13",-1);
	vcdp->declBit  (c+20,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_14",-1);
	vcdp->declBit  (c+21,"QueuePipeTester MaxPeriodFibonacciLFSR io_out_15",-1);
	vcdp->declBit  (c+6,"QueuePipeTester MaxPeriodFibonacciLFSR state_0",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:136
	vcdp->declBit  (c+7,"QueuePipeTester MaxPeriodFibonacciLFSR state_1",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:138
	vcdp->declBit  (c+8,"QueuePipeTester MaxPeriodFibonacciLFSR state_2",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:140
	vcdp->declBit  (c+9,"QueuePipeTester MaxPeriodFibonacciLFSR state_3",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:142
	vcdp->declBit  (c+10,"QueuePipeTester MaxPeriodFibonacciLFSR state_4",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:144
	vcdp->declBit  (c+11,"QueuePipeTester MaxPeriodFibonacciLFSR state_5",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:146
	vcdp->declBit  (c+12,"QueuePipeTester MaxPeriodFibonacciLFSR state_6",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:148
	vcdp->declBit  (c+13,"QueuePipeTester MaxPeriodFibonacciLFSR state_7",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:150
	vcdp->declBit  (c+14,"QueuePipeTester MaxPeriodFibonacciLFSR state_8",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:152
	vcdp->declBit  (c+15,"QueuePipeTester MaxPeriodFibonacciLFSR state_9",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:154
	vcdp->declBit  (c+16,"QueuePipeTester MaxPeriodFibonacciLFSR state_10",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:156
	vcdp->declBit  (c+17,"QueuePipeTester MaxPeriodFibonacciLFSR state_11",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:158
	vcdp->declBit  (c+18,"QueuePipeTester MaxPeriodFibonacciLFSR state_12",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:160
	vcdp->declBit  (c+19,"QueuePipeTester MaxPeriodFibonacciLFSR state_13",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:162
	vcdp->declBit  (c+20,"QueuePipeTester MaxPeriodFibonacciLFSR state_14",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:164
	vcdp->declBit  (c+21,"QueuePipeTester MaxPeriodFibonacciLFSR state_15",-1);
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _RAND_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:166
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:167
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:168
	// Tracing: QueuePipeTester MaxPeriodFibonacciLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/2020030621373616320622420557370503/QueuePipeTester.v:169
    }
}

void VQueuePipeTester::traceFullThis__1(VQueuePipeTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready));
	vcdp->fullBit  (c+2,((1U & (IData)(vlTOPp->QueuePipeTester__DOT___T_15))));
	vcdp->fullBit  (c+3,((1U & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_4)))));
	vcdp->fullBus  (c+4,(((((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1) 
				& (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2))
			        ? 2U : 0U) | (1U & 
					      ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value) 
					       - (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1))))),2);
	vcdp->fullBit  (c+5,((0x14U > (IData)(vlTOPp->QueuePipeTester__DOT__value))));
	vcdp->fullBit  (c+6,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->fullBit  (c+7,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->fullBit  (c+8,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->fullBit  (c+9,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->fullBit  (c+10,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->fullBit  (c+11,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->fullBit  (c+12,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->fullBit  (c+13,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->fullBit  (c+14,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->fullBit  (c+15,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->fullBit  (c+16,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->fullBit  (c+17,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->fullBit  (c+18,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->fullBit  (c+19,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->fullBit  (c+20,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->fullBit  (c+21,(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->fullBus  (c+22,(vlTOPp->QueuePipeTester__DOT__value),5);
	vcdp->fullBus  (c+23,(vlTOPp->QueuePipeTester__DOT__value_1),5);
	vcdp->fullBit  (c+24,(vlTOPp->QueuePipeTester__DOT__q__DOT__value));
	vcdp->fullBit  (c+25,(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1));
	vcdp->fullBit  (c+26,(vlTOPp->clock));
	vcdp->fullBit  (c+27,(vlTOPp->reset));
    }
}
