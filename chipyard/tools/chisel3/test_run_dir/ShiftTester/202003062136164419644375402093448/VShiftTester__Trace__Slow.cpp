// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftTester__Syms.h"


//======================

void VShiftTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VShiftTester::traceInit, &VShiftTester::traceFull, &VShiftTester::traceChg, this);
}
void VShiftTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VShiftTester* t=(VShiftTester*)userthis;
    VShiftTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VShiftTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VShiftTester* t=(VShiftTester*)userthis;
    VShiftTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VShiftTester::traceInitThis(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VShiftTester::traceFullThis(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VShiftTester::traceInitThis__1(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+4,"clock",-1);
	vcdp->declBit  (c+5,"reset",-1);
	vcdp->declBit  (c+4,"ShiftTester clock",-1);
	vcdp->declBit  (c+5,"ShiftTester reset",-1);
	vcdp->declBus  (c+1,"ShiftTester value",-1,1,0);
	// Tracing: ShiftTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:6
	vcdp->declBit  (c+2,"ShiftTester done",-1);
	// Tracing: ShiftTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:8
	// Tracing: ShiftTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:9
	// Tracing: ShiftTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:10
	// Tracing: ShiftTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:11
	// Tracing: ShiftTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:12
	// Tracing: ShiftTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:13
	// Tracing: ShiftTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:14
	// Tracing: ShiftTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:15
	vcdp->declBus  (c+3,"ShiftTester sr",-1,4,0);
	// Tracing: ShiftTester _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:17
	// Tracing: ShiftTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:18
	// Tracing: ShiftTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:19
	// Tracing: ShiftTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:20
	// Tracing: ShiftTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:21
    }
}

void VShiftTester::traceFullThis__1(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->ShiftTester__DOT__value),2);
	vcdp->fullBit  (c+2,((3U == (IData)(vlTOPp->ShiftTester__DOT__value))));
	vcdp->fullBus  (c+3,(vlTOPp->ShiftTester__DOT__sr),5);
	vcdp->fullBit  (c+4,(vlTOPp->clock));
	vcdp->fullBit  (c+5,(vlTOPp->reset));
    }
}