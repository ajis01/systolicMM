// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueReasonableReadyValid__Syms.h"


//======================

void VQueueReasonableReadyValid::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VQueueReasonableReadyValid::traceInit, &VQueueReasonableReadyValid::traceFull, &VQueueReasonableReadyValid::traceChg, this);
}
void VQueueReasonableReadyValid::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VQueueReasonableReadyValid* t=(VQueueReasonableReadyValid*)userthis;
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VQueueReasonableReadyValid::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueueReasonableReadyValid* t=(VQueueReasonableReadyValid*)userthis;
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VQueueReasonableReadyValid::traceInitThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VQueueReasonableReadyValid::traceFullThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VQueueReasonableReadyValid::traceInitThis__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+23,"clock",-1);
	vcdp->declBit  (c+24,"reset",-1);
	vcdp->declBit  (c+23,"QueueReasonableReadyValid clock",-1);
	vcdp->declBit  (c+24,"QueueReasonableReadyValid reset",-1);
	vcdp->declBit  (c+23,"QueueReasonableReadyValid q_clock",-1);
	vcdp->declBit  (c+24,"QueueReasonableReadyValid q_reset",-1);
	vcdp->declBit  (c+2,"QueueReasonableReadyValid q_io_enq_ready",-1);
	vcdp->declBit  (c+3,"QueueReasonableReadyValid q_io_enq_valid",-1);
	vcdp->declBit  (c+1,"QueueReasonableReadyValid q_io_deq_ready",-1);
	vcdp->declBit  (c+4,"QueueReasonableReadyValid q_io_deq_valid",-1);
	vcdp->declBit  (c+4,"QueueReasonableReadyValid q_io_count",-1);
	vcdp->declBit  (c+23,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_clock",-1);
	vcdp->declBit  (c+24,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_reset",-1);
	vcdp->declBit  (c+5,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_0",-1);
	vcdp->declBit  (c+6,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_1",-1);
	vcdp->declBit  (c+7,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_2",-1);
	vcdp->declBit  (c+8,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_3",-1);
	vcdp->declBit  (c+9,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_4",-1);
	vcdp->declBit  (c+10,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_5",-1);
	vcdp->declBit  (c+11,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_6",-1);
	vcdp->declBit  (c+12,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_7",-1);
	vcdp->declBit  (c+13,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_8",-1);
	vcdp->declBit  (c+14,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_9",-1);
	vcdp->declBit  (c+15,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_10",-1);
	vcdp->declBit  (c+16,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_11",-1);
	vcdp->declBit  (c+17,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_12",-1);
	vcdp->declBit  (c+18,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_13",-1);
	vcdp->declBit  (c+19,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_14",-1);
	vcdp->declBit  (c+20,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR_io_out_15",-1);
	vcdp->declBus  (c+21,"QueueReasonableReadyValid value",-1,4,0);
	// Tracing: QueueReasonableReadyValid _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:350
	vcdp->declBus  (c+22,"QueueReasonableReadyValid value_1",-1,4,0);
	// Tracing: QueueReasonableReadyValid _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:352
	// Tracing: QueueReasonableReadyValid _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:353
	// Tracing: QueueReasonableReadyValid _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:354
	// Tracing: QueueReasonableReadyValid _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:355
	// Tracing: QueueReasonableReadyValid _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:356
	// Tracing: QueueReasonableReadyValid _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:357
	// Tracing: QueueReasonableReadyValid _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:358
	// Tracing: QueueReasonableReadyValid _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:359
	// Tracing: QueueReasonableReadyValid _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:360
	// Tracing: QueueReasonableReadyValid _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:361
	// Tracing: QueueReasonableReadyValid _T_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:362
	// Tracing: QueueReasonableReadyValid _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:363
	// Tracing: QueueReasonableReadyValid _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:364
	// Tracing: QueueReasonableReadyValid _T_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:365
	// Tracing: QueueReasonableReadyValid _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:366
	// Tracing: QueueReasonableReadyValid _T_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:367
	// Tracing: QueueReasonableReadyValid _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:368
	// Tracing: QueueReasonableReadyValid _T_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:369
	vcdp->declBit  (c+23,"QueueReasonableReadyValid q clock",-1);
	vcdp->declBit  (c+24,"QueueReasonableReadyValid q reset",-1);
	vcdp->declBit  (c+2,"QueueReasonableReadyValid q io_enq_ready",-1);
	vcdp->declBit  (c+3,"QueueReasonableReadyValid q io_enq_valid",-1);
	vcdp->declBit  (c+1,"QueueReasonableReadyValid q io_deq_ready",-1);
	vcdp->declBit  (c+4,"QueueReasonableReadyValid q io_deq_valid",-1);
	vcdp->declBit  (c+4,"QueueReasonableReadyValid q io_count",-1);
	// Tracing: QueueReasonableReadyValid q _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:10
	// Tracing: QueueReasonableReadyValid q _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:11
	// Tracing: QueueReasonableReadyValid q _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:12
	// Tracing: QueueReasonableReadyValid q _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:13
	// Tracing: QueueReasonableReadyValid q _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:14
	// Tracing: QueueReasonableReadyValid q _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:15
	// Tracing: QueueReasonableReadyValid q _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:16
	vcdp->declBit  (c+23,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR clock",-1);
	vcdp->declBit  (c+24,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR reset",-1);
	vcdp->declBit  (c+5,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_0",-1);
	vcdp->declBit  (c+6,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_1",-1);
	vcdp->declBit  (c+7,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_2",-1);
	vcdp->declBit  (c+8,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_3",-1);
	vcdp->declBit  (c+9,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_4",-1);
	vcdp->declBit  (c+10,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_5",-1);
	vcdp->declBit  (c+11,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_6",-1);
	vcdp->declBit  (c+12,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_7",-1);
	vcdp->declBit  (c+13,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_8",-1);
	vcdp->declBit  (c+14,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_9",-1);
	vcdp->declBit  (c+15,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_10",-1);
	vcdp->declBit  (c+16,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_11",-1);
	vcdp->declBit  (c+17,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_12",-1);
	vcdp->declBit  (c+18,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_13",-1);
	vcdp->declBit  (c+19,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_14",-1);
	vcdp->declBit  (c+20,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR io_out_15",-1);
	vcdp->declBit  (c+5,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_0",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:92
	vcdp->declBit  (c+6,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_1",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:94
	vcdp->declBit  (c+7,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_2",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:96
	vcdp->declBit  (c+8,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_3",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:98
	vcdp->declBit  (c+9,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_4",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:100
	vcdp->declBit  (c+10,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_5",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:102
	vcdp->declBit  (c+11,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_6",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:104
	vcdp->declBit  (c+12,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_7",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:106
	vcdp->declBit  (c+13,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_8",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:108
	vcdp->declBit  (c+14,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_9",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:110
	vcdp->declBit  (c+15,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_10",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:112
	vcdp->declBit  (c+16,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_11",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:114
	vcdp->declBit  (c+17,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_12",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:116
	vcdp->declBit  (c+18,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_13",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:118
	vcdp->declBit  (c+19,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_14",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:120
	vcdp->declBit  (c+20,"QueueReasonableReadyValid MaxPeriodFibonacciLFSR state_15",-1);
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _RAND_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:122
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:123
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:124
	// Tracing: QueueReasonableReadyValid MaxPeriodFibonacciLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/20200306224607200217885147918946/QueueReasonableReadyValid.v:125
    }
}

void VQueueReasonableReadyValid::traceFullThis__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_20) 
				    >> 0xdU))));
	vcdp->fullBit  (c+2,((1U & (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)))));
	vcdp->fullBit  (c+3,((0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value))));
	vcdp->fullBit  (c+4,(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1));
	vcdp->fullBit  (c+5,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
	vcdp->fullBit  (c+6,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
	vcdp->fullBit  (c+7,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
	vcdp->fullBit  (c+8,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
	vcdp->fullBit  (c+9,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
	vcdp->fullBit  (c+10,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
	vcdp->fullBit  (c+11,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
	vcdp->fullBit  (c+12,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
	vcdp->fullBit  (c+13,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
	vcdp->fullBit  (c+14,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
	vcdp->fullBit  (c+15,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	vcdp->fullBit  (c+16,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
	vcdp->fullBit  (c+17,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
	vcdp->fullBit  (c+18,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
	vcdp->fullBit  (c+19,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
	vcdp->fullBit  (c+20,(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
	vcdp->fullBus  (c+21,(vlTOPp->QueueReasonableReadyValid__DOT__value),5);
	vcdp->fullBus  (c+22,(vlTOPp->QueueReasonableReadyValid__DOT__value_1),5);
	vcdp->fullBit  (c+23,(vlTOPp->clock));
	vcdp->fullBit  (c+24,(vlTOPp->reset));
    }
}
