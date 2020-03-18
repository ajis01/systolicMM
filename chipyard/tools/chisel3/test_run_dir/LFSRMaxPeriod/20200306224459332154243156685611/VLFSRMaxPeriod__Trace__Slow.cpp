// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


//======================

void VLFSRMaxPeriod::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VLFSRMaxPeriod::traceInit, &VLFSRMaxPeriod::traceFull, &VLFSRMaxPeriod::traceChg, this);
}
void VLFSRMaxPeriod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VLFSRMaxPeriod* t=(VLFSRMaxPeriod*)userthis;
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VLFSRMaxPeriod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLFSRMaxPeriod* t=(VLFSRMaxPeriod*)userthis;
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VLFSRMaxPeriod::traceInitThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VLFSRMaxPeriod::traceFullThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLFSRMaxPeriod::traceInitThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+12,"clock",-1);
	vcdp->declBit  (c+13,"reset",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod clock",-1);
	vcdp->declBit  (c+13,"LFSRMaxPeriod reset",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR_clock",-1);
	vcdp->declBit  (c+13,"LFSRMaxPeriod GaloisLFSR_reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR_io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR_io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR_io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR_io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR_io_out_4",-1);
	// Tracing: LFSRMaxPeriod _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:114
	// Tracing: LFSRMaxPeriod _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:115
	vcdp->declBus  (c+1,"LFSRMaxPeriod rv",-1,4,0);
	vcdp->declBit  (c+7,"LFSRMaxPeriod started",-1);
	// Tracing: LFSRMaxPeriod _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:118
	// Tracing: LFSRMaxPeriod _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:119
	vcdp->declBus  (c+8,"LFSRMaxPeriod seed",-1,4,0);
	// Tracing: LFSRMaxPeriod _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:121
	vcdp->declBus  (c+9,"LFSRMaxPeriod value",-1,4,0);
	// Tracing: LFSRMaxPeriod _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:123
	// Tracing: LFSRMaxPeriod _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:124
	// Tracing: LFSRMaxPeriod _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:125
	vcdp->declBit  (c+10,"LFSRMaxPeriod wrap",-1);
	// Tracing: LFSRMaxPeriod _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:127
	// Tracing: LFSRMaxPeriod _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:128
	// Tracing: LFSRMaxPeriod _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:129
	// Tracing: LFSRMaxPeriod _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:130
	// Tracing: LFSRMaxPeriod _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:131
	vcdp->declBus  (c+11,"LFSRMaxPeriod last",-1,4,0);
	// Tracing: LFSRMaxPeriod _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:133
	// Tracing: LFSRMaxPeriod _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:134
	// Tracing: LFSRMaxPeriod _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:135
	// Tracing: LFSRMaxPeriod _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:136
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR clock",-1);
	vcdp->declBit  (c+13,"LFSRMaxPeriod GaloisLFSR reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR io_out_4",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR state_0",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:11
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR state_1",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:13
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR state_2",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:15
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR state_3",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:17
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR state_4",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:19
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/20200306224459332154243156685611/LFSRMaxPeriod.v:20
    }
}

void VLFSRMaxPeriod::traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),5);
	vcdp->fullBit  (c+2,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
	vcdp->fullBit  (c+3,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1));
	vcdp->fullBit  (c+4,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2));
	vcdp->fullBit  (c+5,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_3));
	vcdp->fullBit  (c+6,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_4));
	vcdp->fullBit  (c+7,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->fullBus  (c+8,(vlTOPp->LFSRMaxPeriod__DOT__seed),5);
	vcdp->fullBus  (c+9,(vlTOPp->LFSRMaxPeriod__DOT__value),5);
	vcdp->fullBit  (c+10,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			       & (0x1eU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->fullBus  (c+11,(vlTOPp->LFSRMaxPeriod__DOT__last),5);
	vcdp->fullBit  (c+12,(vlTOPp->clock));
	vcdp->fullBit  (c+13,(vlTOPp->reset));
    }
}
