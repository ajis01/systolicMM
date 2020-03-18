// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetTester__Syms.h"


//======================

void VAsyncResetTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAsyncResetTester::traceInit, &VAsyncResetTester::traceFull, &VAsyncResetTester::traceChg, this);
}
void VAsyncResetTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAsyncResetTester* t=(VAsyncResetTester*)userthis;
    VAsyncResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAsyncResetTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAsyncResetTester* t=(VAsyncResetTester*)userthis;
    VAsyncResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAsyncResetTester::traceInitThis(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAsyncResetTester::traceFullThis(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAsyncResetTester::traceInitThis__1(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+8,"clock",-1);
	vcdp->declBit  (c+9,"reset",-1);
	vcdp->declBit  (c+8,"AsyncResetTester clock",-1);
	vcdp->declBit  (c+9,"AsyncResetTester reset",-1);
	vcdp->declBus  (c+3,"AsyncResetTester value",-1,1,0);
	// Tracing: AsyncResetTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:6
	vcdp->declBit  (c+4,"AsyncResetTester cDiv",-1);
	// Tracing: AsyncResetTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:8
	vcdp->declBit  (c+1,"AsyncResetTester slowClk",-1);
	vcdp->declBus  (c+5,"AsyncResetTester value_1",-1,3,0);
	// Tracing: AsyncResetTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:11
	vcdp->declBit  (c+6,"AsyncResetTester done",-1);
	// Tracing: AsyncResetTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:13
	vcdp->declBit  (c+7,"AsyncResetTester asyncResetNext",-1);
	// Tracing: AsyncResetTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:15
	// Tracing: AsyncResetTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:16
	vcdp->declBit  (c+7,"AsyncResetTester asyncReset",-1);
	vcdp->declBus  (c+2,"AsyncResetTester reg_",-1,7,0);
	// Tracing: AsyncResetTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:19
	// Tracing: AsyncResetTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:20
	// Tracing: AsyncResetTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:21
	// Tracing: AsyncResetTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:22
	// Tracing: AsyncResetTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:23
	// Tracing: AsyncResetTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:24
	// Tracing: AsyncResetTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:25
	// Tracing: AsyncResetTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:26
	// Tracing: AsyncResetTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:27
	// Tracing: AsyncResetTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:28
	// Tracing: AsyncResetTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:29
	// Tracing: AsyncResetTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:30
	// Tracing: AsyncResetTester _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:31
	// Tracing: AsyncResetTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:32
	// Tracing: AsyncResetTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:33
    }
}

void VAsyncResetTester::traceFullThis__1(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->AsyncResetTester__DOT__slowClk));
	vcdp->fullBus  (c+2,(vlTOPp->AsyncResetTester__DOT__reg_),8);
	vcdp->fullBus  (c+3,(vlTOPp->AsyncResetTester__DOT__value),2);
	vcdp->fullBit  (c+4,((3U == (IData)(vlTOPp->AsyncResetTester__DOT__value))));
	vcdp->fullBus  (c+5,(vlTOPp->AsyncResetTester__DOT__value_1),4);
	vcdp->fullBit  (c+6,((0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__value_1))));
	vcdp->fullBit  (c+7,(vlTOPp->AsyncResetTester__DOT__asyncResetNext));
	vcdp->fullBit  (c+8,(vlTOPp->clock));
	vcdp->fullBit  (c+9,(vlTOPp->reset));
    }
}
