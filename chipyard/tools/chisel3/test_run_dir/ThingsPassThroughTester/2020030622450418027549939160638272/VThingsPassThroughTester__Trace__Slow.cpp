// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughTester__Syms.h"


//======================

void VThingsPassThroughTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VThingsPassThroughTester::traceInit, &VThingsPassThroughTester::traceFull, &VThingsPassThroughTester::traceChg, this);
}
void VThingsPassThroughTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VThingsPassThroughTester* t=(VThingsPassThroughTester*)userthis;
    VThingsPassThroughTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VThingsPassThroughTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VThingsPassThroughTester* t=(VThingsPassThroughTester*)userthis;
    VThingsPassThroughTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VThingsPassThroughTester::traceInitThis(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VThingsPassThroughTester::traceFullThis(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VThingsPassThroughTester::traceInitThis__1(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+27,"clock",-1);
	vcdp->declBit  (c+28,"reset",-1);
	vcdp->declBit  (c+27,"ThingsPassThroughTester clock",-1);
	vcdp->declBit  (c+28,"ThingsPassThroughTester reset",-1);
	vcdp->declBit  (c+27,"ThingsPassThroughTester q_clock",-1);
	vcdp->declBit  (c+28,"ThingsPassThroughTester q_reset",-1);
	vcdp->declBit  (c+1,"ThingsPassThroughTester q_io_enq_ready",-1);
	vcdp->declBit  (c+4,"ThingsPassThroughTester q_io_enq_valid",-1);
	vcdp->declBus  (c+5,"ThingsPassThroughTester q_io_enq_bits",-1,2,0);
	vcdp->declBit  (c+2,"ThingsPassThroughTester q_io_deq_ready",-1);
	vcdp->declBit  (c+3,"ThingsPassThroughTester q_io_deq_valid",-1);
	vcdp->declBus  (c+6,"ThingsPassThroughTester q_io_deq_bits",-1,2,0);
	vcdp->declBit  (c+27,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_clock",-1);
	vcdp->declBit  (c+28,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_reset",-1);
	vcdp->declBit  (c+7,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_0",-1);
	vcdp->declBit  (c+8,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_1",-1);
	vcdp->declBit  (c+9,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_2",-1);
	vcdp->declBit  (c+10,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_3",-1);
	vcdp->declBit  (c+11,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_4",-1);
	vcdp->declBit  (c+12,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_5",-1);
	vcdp->declBit  (c+13,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_6",-1);
	vcdp->declBit  (c+14,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_7",-1);
	vcdp->declBit  (c+15,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_8",-1);
	vcdp->declBit  (c+16,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_9",-1);
	vcdp->declBit  (c+17,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_10",-1);
	vcdp->declBit  (c+18,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_11",-1);
	vcdp->declBit  (c+19,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_12",-1);
	vcdp->declBit  (c+20,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_13",-1);
	vcdp->declBit  (c+21,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_14",-1);
	vcdp->declBit  (c+22,"ThingsPassThroughTester MaxPeriodFibonacciLFSR_io_out_15",-1);
	vcdp->declBus  (c+23,"ThingsPassThroughTester value",-1,4,0);
	// Tracing: ThingsPassThroughTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:408
	vcdp->declBus  (c+24,"ThingsPassThroughTester value_1",-1,4,0);
	// Tracing: ThingsPassThroughTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:410
	// Tracing: ThingsPassThroughTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:411
	// Tracing: ThingsPassThroughTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:412
	// Tracing: ThingsPassThroughTester _GEN_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:413
	// Tracing: ThingsPassThroughTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:414
	// Tracing: ThingsPassThroughTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:415
	// Tracing: ThingsPassThroughTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:416
	// Tracing: ThingsPassThroughTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:417
	// Tracing: ThingsPassThroughTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:418
	// Tracing: ThingsPassThroughTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:419
	// Tracing: ThingsPassThroughTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:420
	// Tracing: ThingsPassThroughTester _GEN_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:421
	// Tracing: ThingsPassThroughTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:422
	// Tracing: ThingsPassThroughTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:423
	// Tracing: ThingsPassThroughTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:424
	// Tracing: ThingsPassThroughTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:425
	// Tracing: ThingsPassThroughTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:426
	// Tracing: ThingsPassThroughTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:427
	// Tracing: ThingsPassThroughTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:428
	// Tracing: ThingsPassThroughTester _GEN_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:429
	// Tracing: ThingsPassThroughTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:430
	// Tracing: ThingsPassThroughTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:431
	// Tracing: ThingsPassThroughTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:432
	// Tracing: ThingsPassThroughTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:433
	// Tracing: ThingsPassThroughTester _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:434
	// Tracing: ThingsPassThroughTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:435
	// Tracing: ThingsPassThroughTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:436
	// Tracing: ThingsPassThroughTester _GEN_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:437
	// Tracing: ThingsPassThroughTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:438
	// Tracing: ThingsPassThroughTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:439
	// Tracing: ThingsPassThroughTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:440
	// Tracing: ThingsPassThroughTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:441
	// Tracing: ThingsPassThroughTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:442
	// Tracing: ThingsPassThroughTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:443
	// Tracing: ThingsPassThroughTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:444
	// Tracing: ThingsPassThroughTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:445
	// Tracing: ThingsPassThroughTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:446
	// Tracing: ThingsPassThroughTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:447
	// Tracing: ThingsPassThroughTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:448
	// Tracing: ThingsPassThroughTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:449
	// Tracing: ThingsPassThroughTester _GEN_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:450
	// Tracing: ThingsPassThroughTester _GEN_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:451
	// Tracing: ThingsPassThroughTester _GEN_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:452
	// Tracing: ThingsPassThroughTester _GEN_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:453
	// Tracing: ThingsPassThroughTester _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:454
	// Tracing: ThingsPassThroughTester _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:455
	// Tracing: ThingsPassThroughTester _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:456
	// Tracing: ThingsPassThroughTester _T_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:457
	// Tracing: ThingsPassThroughTester _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:458
	// Tracing: ThingsPassThroughTester _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:459
	vcdp->declBit  (c+27,"ThingsPassThroughTester q clock",-1);
	vcdp->declBit  (c+28,"ThingsPassThroughTester q reset",-1);
	vcdp->declBit  (c+1,"ThingsPassThroughTester q io_enq_ready",-1);
	vcdp->declBit  (c+4,"ThingsPassThroughTester q io_enq_valid",-1);
	vcdp->declBus  (c+5,"ThingsPassThroughTester q io_enq_bits",-1,2,0);
	vcdp->declBit  (c+2,"ThingsPassThroughTester q io_deq_ready",-1);
	vcdp->declBit  (c+3,"ThingsPassThroughTester q io_deq_valid",-1);
	vcdp->declBus  (c+6,"ThingsPassThroughTester q io_deq_bits",-1,2,0);
	// Tracing: ThingsPassThroughTester q _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:11
	// Tracing: ThingsPassThroughTester q _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:12
	// Tracing: ThingsPassThroughTester q _T__T_18_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:13
	// Tracing: ThingsPassThroughTester q _T__T_18_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:14
	// Tracing: ThingsPassThroughTester q _T__T_10_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:15
	// Tracing: ThingsPassThroughTester q _T__T_10_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:16
	// Tracing: ThingsPassThroughTester q _T__T_10_mask // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:17
	// Tracing: ThingsPassThroughTester q _T__T_10_en // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:18
	vcdp->declBit  (c+25,"ThingsPassThroughTester q value",-1);
	// Tracing: ThingsPassThroughTester q _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:20
	vcdp->declBit  (c+26,"ThingsPassThroughTester q value_1",-1);
	// Tracing: ThingsPassThroughTester q _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:22
	// Tracing: ThingsPassThroughTester q _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:23
	// Tracing: ThingsPassThroughTester q _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:24
	// Tracing: ThingsPassThroughTester q _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:25
	// Tracing: ThingsPassThroughTester q _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:26
	// Tracing: ThingsPassThroughTester q _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:27
	// Tracing: ThingsPassThroughTester q _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:28
	// Tracing: ThingsPassThroughTester q _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:29
	// Tracing: ThingsPassThroughTester q _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:30
	// Tracing: ThingsPassThroughTester q _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:31
	// Tracing: ThingsPassThroughTester q _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:32
	// Tracing: ThingsPassThroughTester q _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:33
	vcdp->declBit  (c+27,"ThingsPassThroughTester MaxPeriodFibonacciLFSR clock",-1);
	vcdp->declBit  (c+28,"ThingsPassThroughTester MaxPeriodFibonacciLFSR reset",-1);
	vcdp->declBit  (c+7,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_0",-1);
	vcdp->declBit  (c+8,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_1",-1);
	vcdp->declBit  (c+9,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_2",-1);
	vcdp->declBit  (c+10,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_3",-1);
	vcdp->declBit  (c+11,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_4",-1);
	vcdp->declBit  (c+12,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_5",-1);
	vcdp->declBit  (c+13,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_6",-1);
	vcdp->declBit  (c+14,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_7",-1);
	vcdp->declBit  (c+15,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_8",-1);
	vcdp->declBit  (c+16,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_9",-1);
	vcdp->declBit  (c+17,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_10",-1);
	vcdp->declBit  (c+18,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_11",-1);
	vcdp->declBit  (c+19,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_12",-1);
	vcdp->declBit  (c+20,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_13",-1);
	vcdp->declBit  (c+21,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_14",-1);
	vcdp->declBit  (c+22,"ThingsPassThroughTester MaxPeriodFibonacciLFSR io_out_15",-1);
	vcdp->declBit  (c+7,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_0",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:149
	vcdp->declBit  (c+8,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_1",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:151
	vcdp->declBit  (c+9,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_2",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:153
	vcdp->declBit  (c+10,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_3",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:155
	vcdp->declBit  (c+11,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_4",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:157
	vcdp->declBit  (c+12,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_5",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:159
	vcdp->declBit  (c+13,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_6",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:161
	vcdp->declBit  (c+14,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_7",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:163
	vcdp->declBit  (c+15,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_8",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:165
	vcdp->declBit  (c+16,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_9",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:167
	vcdp->declBit  (c+17,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_10",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:169
	vcdp->declBit  (c+18,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_11",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:171
	vcdp->declBit  (c+19,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_12",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:173
	vcdp->declBit  (c+20,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_13",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:175
	vcdp->declBit  (c+21,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_14",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:177
	vcdp->declBit  (c+22,"ThingsPassThroughTester MaxPeriodFibonacciLFSR state_15",-1);
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _RAND_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:179
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:180
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:181
	// Tracing: ThingsPassThroughTester MaxPeriodFibonacciLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622450418027549939160638272/ThingsPassThroughTester.v:182
    }
}

void VThingsPassThroughTester::traceFullThis__1(VThingsPassThroughTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)))));
	vcdp->fullBit  (c+2,((1U & ((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
				    >> 6U))));
	vcdp->fullBit  (c+3,((1U & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4)))));
	vcdp->fullBit  (c+4,((0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))));
	vcdp->fullBus  (c+5,(((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
			       ? 3U : ((0x12U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
				        ? 1U : ((0x11U 
						 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						 ? 0U
						 : 
						((0x10U 
						  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						  ? 4U
						  : 
						 ((0xfU 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						   ? 0U
						   : 
						  ((0xeU 
						    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						    ? 7U
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						     ? 4U
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						      ? 1U
						      : 
						     ((0xbU 
						       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						       ? 3U
						       : 
						      ((0xaU 
							== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						        ? 3U
						        : 
						       ((9U 
							 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							 ? 5U
							 : 
							((8U 
							  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							  ? 5U
							  : 
							 ((7U 
							   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							   ? 3U
							   : 
							  ((6U 
							    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							    ? 3U
							    : 
							   ((5U 
							     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							     ? 5U
							     : 
							    ((4U 
							      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							      ? 3U
							      : 
							     ((3U 
							       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							       ? 0U
							       : 
							      ((2U 
								== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							        ? 3U
							        : 
							       ((1U 
								 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
								 ? 0U
								 : 1U)))))))))))))))))))),3);
	vcdp->fullBus  (c+6,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T
			     [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1]),3);
	vcdp->fullBit  (c+7,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->fullBit  (c+8,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->fullBit  (c+9,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->fullBit  (c+10,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->fullBit  (c+11,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->fullBit  (c+12,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->fullBit  (c+13,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->fullBit  (c+14,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->fullBit  (c+15,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->fullBit  (c+16,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->fullBit  (c+17,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->fullBit  (c+18,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->fullBit  (c+19,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->fullBit  (c+20,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->fullBit  (c+21,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->fullBit  (c+22,(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->fullBus  (c+23,(vlTOPp->ThingsPassThroughTester__DOT__value),5);
	vcdp->fullBus  (c+24,(vlTOPp->ThingsPassThroughTester__DOT__value_1),5);
	vcdp->fullBit  (c+25,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value));
	vcdp->fullBit  (c+26,(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1));
	vcdp->fullBit  (c+27,(vlTOPp->clock));
	vcdp->fullBit  (c+28,(vlTOPp->reset));
    }
}
