// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


//======================

void VShiftResetTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VShiftResetTester::traceInit, &VShiftResetTester::traceFull, &VShiftResetTester::traceChg, this);
}
void VShiftResetTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VShiftResetTester* t=(VShiftResetTester*)userthis;
    VShiftResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VShiftResetTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VShiftResetTester* t=(VShiftResetTester*)userthis;
    VShiftResetTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VShiftResetTester::traceInitThis(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VShiftResetTester::traceFullThis(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VShiftResetTester::traceInitThis__1(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBit  (c+3,"ShiftResetTester clock",-1);
	vcdp->declBit  (c+4,"ShiftResetTester reset",-1);
	vcdp->declBit  (c+1,"ShiftResetTester value",-1);
	// Tracing: ShiftResetTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:6
	// Tracing: ShiftResetTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:7
	// Tracing: ShiftResetTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:8
	// Tracing: ShiftResetTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:9
	// Tracing: ShiftResetTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:10
	// Tracing: ShiftResetTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:11
	// Tracing: ShiftResetTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:12
	// Tracing: ShiftResetTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:13
	vcdp->declBus  (c+2,"ShiftResetTester sr",-1,4,0);
	// Tracing: ShiftResetTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:15
	// Tracing: ShiftResetTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:16
	// Tracing: ShiftResetTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:17
	// Tracing: ShiftResetTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:18
	// Tracing: ShiftResetTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/2020030621371212832141484251251899/ShiftResetTester.v:19
    }
}

void VShiftResetTester::traceFullThis__1(VShiftResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->ShiftResetTester__DOT__value));
	vcdp->fullBus  (c+2,(vlTOPp->ShiftResetTester__DOT__sr),5);
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
    }
}
