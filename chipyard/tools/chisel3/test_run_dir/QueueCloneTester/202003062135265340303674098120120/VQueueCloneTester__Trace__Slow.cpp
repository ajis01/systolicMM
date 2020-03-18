// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueCloneTester__Syms.h"


//======================

void VQueueCloneTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VQueueCloneTester::traceInit, &VQueueCloneTester::traceFull, &VQueueCloneTester::traceChg, this);
}
void VQueueCloneTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VQueueCloneTester* t=(VQueueCloneTester*)userthis;
    VQueueCloneTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VQueueCloneTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VQueueCloneTester* t=(VQueueCloneTester*)userthis;
    VQueueCloneTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VQueueCloneTester::traceInitThis(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VQueueCloneTester::traceFullThis(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VQueueCloneTester::traceInitThis__1(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+11,"clock",-1);
	vcdp->declBit  (c+12,"reset",-1);
	vcdp->declBit  (c+11,"QueueCloneTester clock",-1);
	vcdp->declBit  (c+12,"QueueCloneTester reset",-1);
	vcdp->declBit  (c+11,"QueueCloneTester dut_clock",-1);
	vcdp->declBit  (c+12,"QueueCloneTester dut_reset",-1);
	vcdp->declBit  (c+1,"QueueCloneTester dut_io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueueCloneTester dut_io_enq_valid",-1);
	vcdp->declBit  (c+6,"QueueCloneTester dut_io_deq_ready",-1);
	vcdp->declBit  (c+2,"QueueCloneTester dut_io_deq_valid",-1);
	vcdp->declBus  (c+7,"QueueCloneTester dut_io_deq_bits",-1,31,0);
	// Tracing: QueueCloneTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:198
	vcdp->declBit  (c+5,"QueueCloneTester start",-1);
	// Tracing: QueueCloneTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:200
	vcdp->declBit  (c+6,"QueueCloneTester accept",-1);
	// Tracing: QueueCloneTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:202
	// Tracing: QueueCloneTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:203
	// Tracing: QueueCloneTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:204
	// Tracing: QueueCloneTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:205
	// Tracing: QueueCloneTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:206
	// Tracing: QueueCloneTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:207
	vcdp->declBit  (c+11,"QueueCloneTester dut clock",-1);
	vcdp->declBit  (c+12,"QueueCloneTester dut reset",-1);
	vcdp->declBit  (c+1,"QueueCloneTester dut io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueueCloneTester dut io_enq_valid",-1);
	vcdp->declBit  (c+6,"QueueCloneTester dut io_deq_ready",-1);
	vcdp->declBit  (c+2,"QueueCloneTester dut io_deq_valid",-1);
	vcdp->declBus  (c+7,"QueueCloneTester dut io_deq_bits",-1,31,0);
	vcdp->declBit  (c+11,"QueueCloneTester dut Queue_clock",-1);
	vcdp->declBit  (c+12,"QueueCloneTester dut Queue_reset",-1);
	vcdp->declBit  (c+1,"QueueCloneTester dut Queue_io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueueCloneTester dut Queue_io_enq_valid",-1);
	vcdp->declBus  (c+13,"QueueCloneTester dut Queue_io_enq_bits",-1,31,0);
	vcdp->declBit  (c+3,"QueueCloneTester dut Queue_io_deq_ready",-1);
	vcdp->declBit  (c+4,"QueueCloneTester dut Queue_io_deq_valid",-1);
	vcdp->declBus  (c+8,"QueueCloneTester dut Queue_io_deq_bits",-1,31,0);
	// Tracing: QueueCloneTester dut _T_clock // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:145
	// Tracing: QueueCloneTester dut _T_reset // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:146
	// Tracing: QueueCloneTester dut _T_io_enq_ready // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:147
	// Tracing: QueueCloneTester dut _T_io_enq_valid // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:148
	// Tracing: QueueCloneTester dut _T_io_enq_bits // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:149
	// Tracing: QueueCloneTester dut _T_io_deq_ready // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:150
	// Tracing: QueueCloneTester dut _T_io_deq_valid // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:151
	// Tracing: QueueCloneTester dut _T_io_deq_bits // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:152
	vcdp->declBit  (c+11,"QueueCloneTester dut Queue clock",-1);
	vcdp->declBit  (c+12,"QueueCloneTester dut Queue reset",-1);
	vcdp->declBit  (c+1,"QueueCloneTester dut Queue io_enq_ready",-1);
	vcdp->declBit  (c+5,"QueueCloneTester dut Queue io_enq_valid",-1);
	vcdp->declBus  (c+13,"QueueCloneTester dut Queue io_enq_bits",-1,31,0);
	vcdp->declBit  (c+3,"QueueCloneTester dut Queue io_deq_ready",-1);
	vcdp->declBit  (c+4,"QueueCloneTester dut Queue io_deq_valid",-1);
	vcdp->declBus  (c+8,"QueueCloneTester dut Queue io_deq_bits",-1,31,0);
	// Tracing: QueueCloneTester dut Queue _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:11
	// Tracing: QueueCloneTester dut Queue _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:12
	// Tracing: QueueCloneTester dut Queue _T__T_18_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:13
	// Tracing: QueueCloneTester dut Queue _T__T_18_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:14
	// Tracing: QueueCloneTester dut Queue _T__T_10_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:15
	// Tracing: QueueCloneTester dut Queue _T__T_10_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:16
	// Tracing: QueueCloneTester dut Queue _T__T_10_mask // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:17
	// Tracing: QueueCloneTester dut Queue _T__T_10_en // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:18
	vcdp->declBit  (c+9,"QueueCloneTester dut Queue value",-1);
	// Tracing: QueueCloneTester dut Queue _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:20
	vcdp->declBit  (c+10,"QueueCloneTester dut Queue value_1",-1);
	// Tracing: QueueCloneTester dut Queue _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:22
	// Tracing: QueueCloneTester dut Queue _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:23
	// Tracing: QueueCloneTester dut Queue _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:24
	// Tracing: QueueCloneTester dut Queue _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:25
	// Tracing: QueueCloneTester dut Queue _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:26
	// Tracing: QueueCloneTester dut Queue _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:27
	// Tracing: QueueCloneTester dut Queue _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:28
	// Tracing: QueueCloneTester dut Queue _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:29
	// Tracing: QueueCloneTester dut Queue _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:30
	// Tracing: QueueCloneTester dut Queue _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:31
	// Tracing: QueueCloneTester dut Queue _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:32
	// Tracing: QueueCloneTester dut Queue _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:33
	// Tracing: QueueCloneTester dut _T clock // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:2
	// Tracing: QueueCloneTester dut _T reset // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:3
	// Tracing: QueueCloneTester dut _T io_enq_ready // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:4
	// Tracing: QueueCloneTester dut _T io_enq_valid // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:5
	// Tracing: QueueCloneTester dut _T io_enq_bits // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:6
	// Tracing: QueueCloneTester dut _T io_deq_ready // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:7
	// Tracing: QueueCloneTester dut _T io_deq_valid // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:8
	// Tracing: QueueCloneTester dut _T io_deq_bits // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:9
	// Tracing: QueueCloneTester dut _T _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:11
	// Tracing: QueueCloneTester dut _T _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:12
	// Tracing: QueueCloneTester dut _T _T__T_18_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:13
	// Tracing: QueueCloneTester dut _T _T__T_18_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:14
	// Tracing: QueueCloneTester dut _T _T__T_10_data // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:15
	// Tracing: QueueCloneTester dut _T _T__T_10_addr // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:16
	// Tracing: QueueCloneTester dut _T _T__T_10_mask // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:17
	// Tracing: QueueCloneTester dut _T _T__T_10_en // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:18
	// Tracing: QueueCloneTester dut _T value // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:19
	// Tracing: QueueCloneTester dut _T _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:20
	// Tracing: QueueCloneTester dut _T value_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:21
	// Tracing: QueueCloneTester dut _T _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:22
	// Tracing: QueueCloneTester dut _T _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:23
	// Tracing: QueueCloneTester dut _T _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:24
	// Tracing: QueueCloneTester dut _T _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:25
	// Tracing: QueueCloneTester dut _T _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:26
	// Tracing: QueueCloneTester dut _T _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:27
	// Tracing: QueueCloneTester dut _T _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:28
	// Tracing: QueueCloneTester dut _T _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:29
	// Tracing: QueueCloneTester dut _T _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:30
	// Tracing: QueueCloneTester dut _T _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:31
	// Tracing: QueueCloneTester dut _T _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:32
	// Tracing: QueueCloneTester dut _T _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/202003062135265340303674098120120/QueueCloneTester.v:33
    }
}

void VQueueCloneTester::traceFullThis__1(VQueueCloneTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T_5)))));
	vcdp->fullBit  (c+2,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T_4)))));
	vcdp->fullBit  (c+3,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T_5)))));
	vcdp->fullBit  (c+4,((1U & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T_4)))));
	vcdp->fullBit  (c+5,(vlTOPp->QueueCloneTester__DOT__start));
	vcdp->fullBit  (c+6,(vlTOPp->QueueCloneTester__DOT__accept));
	vcdp->fullBus  (c+7,(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT___T
			     [vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__value_1]),32);
	vcdp->fullBus  (c+8,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT___T
			     [vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value_1]),32);
	vcdp->fullBit  (c+9,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value));
	vcdp->fullBit  (c+10,(vlTOPp->QueueCloneTester__DOT__dut__DOT__Queue__DOT__value_1));
	vcdp->fullBit  (c+11,(vlTOPp->clock));
	vcdp->fullBit  (c+12,(vlTOPp->reset));
	vcdp->fullBus  (c+13,(0x2aU),32);
    }
}
