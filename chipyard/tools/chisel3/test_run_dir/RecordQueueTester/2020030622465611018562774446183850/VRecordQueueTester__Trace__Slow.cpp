// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


//======================

void VRecordQueueTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRecordQueueTester::traceInit, &VRecordQueueTester::traceFull, &VRecordQueueTester::traceChg, this);
}
void VRecordQueueTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRecordQueueTester* t=(VRecordQueueTester*)userthis;
    VRecordQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRecordQueueTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRecordQueueTester* t=(VRecordQueueTester*)userthis;
    VRecordQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRecordQueueTester::traceInitThis(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRecordQueueTester::traceFullThis(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRecordQueueTester::traceInitThis__1(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+10,"clock",-1);
	vcdp->declBit  (c+11,"reset",-1);
	vcdp->declBit  (c+10,"RecordQueueTester clock",-1);
	vcdp->declBit  (c+11,"RecordQueueTester reset",-1);
	vcdp->declBit  (c+10,"RecordQueueTester queue_clock",-1);
	vcdp->declBit  (c+11,"RecordQueueTester queue_reset",-1);
	vcdp->declBit  (c+1,"RecordQueueTester queue_io_enq_ready",-1);
	vcdp->declBit  (c+3,"RecordQueueTester queue_io_enq_valid",-1);
	vcdp->declBit  (c+2,"RecordQueueTester queue_io_deq_valid",-1);
	vcdp->declBus  (c+4,"RecordQueueTester queue_io_deq_bits_bar",-1,31,0);
	vcdp->declBus  (c+5,"RecordQueueTester queue_io_deq_bits_foo",-1,31,0);
	vcdp->declBus  (c+6,"RecordQueueTester value",-1,1,0);
	// Tracing: RecordQueueTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:160
	vcdp->declBit  (c+7,"RecordQueueTester done",-1);
	// Tracing: RecordQueueTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:162
	// Tracing: RecordQueueTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:163
	// Tracing: RecordQueueTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:164
	// Tracing: RecordQueueTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:165
	// Tracing: RecordQueueTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:166
	// Tracing: RecordQueueTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:167
	// Tracing: RecordQueueTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:168
	// Tracing: RecordQueueTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:169
	// Tracing: RecordQueueTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:170
	// Tracing: RecordQueueTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:171
	// Tracing: RecordQueueTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:172
	// Tracing: RecordQueueTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:173
	vcdp->declBit  (c+10,"RecordQueueTester queue clock",-1);
	vcdp->declBit  (c+11,"RecordQueueTester queue reset",-1);
	vcdp->declBit  (c+1,"RecordQueueTester queue io_enq_ready",-1);
	vcdp->declBit  (c+3,"RecordQueueTester queue io_enq_valid",-1);
	vcdp->declBit  (c+2,"RecordQueueTester queue io_deq_valid",-1);
	vcdp->declBus  (c+4,"RecordQueueTester queue io_deq_bits_bar",-1,31,0);
	vcdp->declBus  (c+5,"RecordQueueTester queue io_deq_bits_foo",-1,31,0);
	// Tracing: RecordQueueTester queue _T_4_bar // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:10
	// Tracing: RecordQueueTester queue _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:11
	// Tracing: RecordQueueTester queue _T_4_bar__T_26_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:12
	// Tracing: RecordQueueTester queue _T_4_bar__T_26_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:13
	// Tracing: RecordQueueTester queue _T_4_bar__T_16_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:14
	// Tracing: RecordQueueTester queue _T_4_bar__T_16_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:15
	// Tracing: RecordQueueTester queue _T_4_bar__T_16_mask // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:16
	// Tracing: RecordQueueTester queue _T_4_bar__T_16_en // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:17
	// Tracing: RecordQueueTester queue _T_4_foo // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:18
	// Tracing: RecordQueueTester queue _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:19
	// Tracing: RecordQueueTester queue _T_4_foo__T_26_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:20
	// Tracing: RecordQueueTester queue _T_4_foo__T_26_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:21
	// Tracing: RecordQueueTester queue _T_4_foo__T_16_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:22
	// Tracing: RecordQueueTester queue _T_4_foo__T_16_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:23
	// Tracing: RecordQueueTester queue _T_4_foo__T_16_mask // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:24
	// Tracing: RecordQueueTester queue _T_4_foo__T_16_en // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:25
	vcdp->declBus  (c+8,"RecordQueueTester queue value",-1,1,0);
	// Tracing: RecordQueueTester queue _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:27
	vcdp->declBus  (c+9,"RecordQueueTester queue value_1",-1,1,0);
	// Tracing: RecordQueueTester queue _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:29
	// Tracing: RecordQueueTester queue _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:30
	// Tracing: RecordQueueTester queue _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:31
	// Tracing: RecordQueueTester queue _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:32
	// Tracing: RecordQueueTester queue _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:33
	// Tracing: RecordQueueTester queue _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:34
	// Tracing: RecordQueueTester queue _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:35
	// Tracing: RecordQueueTester queue _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:36
	// Tracing: RecordQueueTester queue _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:37
	// Tracing: RecordQueueTester queue _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:38
	// Tracing: RecordQueueTester queue _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/2020030622465611018562774446183850/RecordQueueTester.v:39
    }
}

void VRecordQueueTester::traceFullThis__1(VRecordQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)))));
	vcdp->fullBit  (c+2,((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8)))));
	vcdp->fullBit  (c+3,((0U == (IData)(vlTOPp->RecordQueueTester__DOT__value))));
	vcdp->fullBus  (c+4,(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_bar
			     [vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]),32);
	vcdp->fullBus  (c+5,(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_foo
			     [vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]),32);
	vcdp->fullBus  (c+6,(vlTOPp->RecordQueueTester__DOT__value),2);
	vcdp->fullBit  (c+7,((3U == (IData)(vlTOPp->RecordQueueTester__DOT__value))));
	vcdp->fullBus  (c+8,(vlTOPp->RecordQueueTester__DOT__queue__DOT__value),2);
	vcdp->fullBus  (c+9,(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1),2);
	vcdp->fullBit  (c+10,(vlTOPp->clock));
	vcdp->fullBit  (c+11,(vlTOPp->reset));
    }
}
