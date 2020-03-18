// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiBlackBoxTester__Syms.h"


//======================

void VMultiBlackBoxTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMultiBlackBoxTester::traceInit, &VMultiBlackBoxTester::traceFull, &VMultiBlackBoxTester::traceChg, this);
}
void VMultiBlackBoxTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMultiBlackBoxTester* t=(VMultiBlackBoxTester*)userthis;
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMultiBlackBoxTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiBlackBoxTester* t=(VMultiBlackBoxTester*)userthis;
    VMultiBlackBoxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMultiBlackBoxTester::traceInitThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMultiBlackBoxTester::traceFullThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiBlackBoxTester::traceInitThis__1(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"MultiBlackBoxTester clock",-1);
	vcdp->declBit  (c+2,"MultiBlackBoxTester reset",-1);
	vcdp->declBit  (c+3,"MultiBlackBoxTester blackBoxInvPos_in",-1);
	vcdp->declBit  (c+4,"MultiBlackBoxTester blackBoxInvPos_out",-1);
	vcdp->declBit  (c+5,"MultiBlackBoxTester blackBoxInvNeg_in",-1);
	vcdp->declBit  (c+6,"MultiBlackBoxTester blackBoxInvNeg_out",-1);
	vcdp->declBit  (c+3,"MultiBlackBoxTester blackBoxPassPos_in",-1);
	vcdp->declBit  (c+6,"MultiBlackBoxTester blackBoxPassPos_out",-1);
	vcdp->declBit  (c+5,"MultiBlackBoxTester blackBoxPassNeg_in",-1);
	vcdp->declBit  (c+4,"MultiBlackBoxTester blackBoxPassNeg_out",-1);
	// Tracing: MultiBlackBoxTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:13
	// Tracing: MultiBlackBoxTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:14
	// Tracing: MultiBlackBoxTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:15
	// Tracing: MultiBlackBoxTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:16
	// Tracing: MultiBlackBoxTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:17
	// Tracing: MultiBlackBoxTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:18
	// Tracing: MultiBlackBoxTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:19
	// Tracing: MultiBlackBoxTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:20
	// Tracing: MultiBlackBoxTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:21
	// Tracing: MultiBlackBoxTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:22
	// Tracing: MultiBlackBoxTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:23
	// Tracing: MultiBlackBoxTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:24
	// Tracing: MultiBlackBoxTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiBlackBoxTester/2020030621375017048548089920305366/MultiBlackBoxTester.v:25
	vcdp->declBus  (c+3,"MultiBlackBoxTester blackBoxInvPos in",-1,0,0);
	vcdp->declBus  (c+4,"MultiBlackBoxTester blackBoxInvPos out",-1,0,0);
	vcdp->declBus  (c+5,"MultiBlackBoxTester blackBoxInvNeg in",-1,0,0);
	vcdp->declBus  (c+6,"MultiBlackBoxTester blackBoxInvNeg out",-1,0,0);
	vcdp->declBus  (c+3,"MultiBlackBoxTester blackBoxPassPos in",-1,0,0);
	vcdp->declBus  (c+6,"MultiBlackBoxTester blackBoxPassPos out",-1,0,0);
	vcdp->declBus  (c+5,"MultiBlackBoxTester blackBoxPassNeg in",-1,0,0);
	vcdp->declBus  (c+4,"MultiBlackBoxTester blackBoxPassNeg out",-1,0,0);
    }
}

void VMultiBlackBoxTester::traceFullThis__1(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(1U));
	vcdp->fullBit  (c+4,(0U));
	vcdp->fullBit  (c+5,(0U));
	vcdp->fullBit  (c+6,(1U));
    }
}
