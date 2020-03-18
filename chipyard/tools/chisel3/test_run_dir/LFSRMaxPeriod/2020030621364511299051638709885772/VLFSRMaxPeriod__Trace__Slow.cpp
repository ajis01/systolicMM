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
	vcdp->declBit  (c+11,"clock",-1);
	vcdp->declBit  (c+12,"reset",-1);
	vcdp->declBit  (c+11,"LFSRMaxPeriod clock",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod reset",-1);
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR_clock",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR_reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR_io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR_io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR_io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR_io_out_3",-1);
	// Tracing: LFSRMaxPeriod _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:102
	// Tracing: LFSRMaxPeriod _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:103
	vcdp->declBus  (c+1,"LFSRMaxPeriod rv",-1,3,0);
	vcdp->declBit  (c+6,"LFSRMaxPeriod started",-1);
	// Tracing: LFSRMaxPeriod _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:106
	// Tracing: LFSRMaxPeriod _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:107
	vcdp->declBus  (c+7,"LFSRMaxPeriod seed",-1,3,0);
	// Tracing: LFSRMaxPeriod _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:109
	vcdp->declBus  (c+8,"LFSRMaxPeriod value",-1,3,0);
	// Tracing: LFSRMaxPeriod _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:111
	// Tracing: LFSRMaxPeriod _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:112
	// Tracing: LFSRMaxPeriod _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:113
	vcdp->declBit  (c+9,"LFSRMaxPeriod wrap",-1);
	// Tracing: LFSRMaxPeriod _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:115
	// Tracing: LFSRMaxPeriod _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:116
	// Tracing: LFSRMaxPeriod _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:117
	// Tracing: LFSRMaxPeriod _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:118
	// Tracing: LFSRMaxPeriod _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:119
	vcdp->declBus  (c+10,"LFSRMaxPeriod last",-1,3,0);
	// Tracing: LFSRMaxPeriod _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:121
	// Tracing: LFSRMaxPeriod _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:122
	// Tracing: LFSRMaxPeriod _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:123
	// Tracing: LFSRMaxPeriod _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:124
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR clock",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR io_out_3",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR state_0",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:10
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR state_1",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:12
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR state_2",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:14
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR state_3",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:16
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:17
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621364511299051638709885772/LFSRMaxPeriod.v:18
    }
}

void VLFSRMaxPeriod::traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),4);
	vcdp->fullBit  (c+2,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
	vcdp->fullBit  (c+3,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1));
	vcdp->fullBit  (c+4,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2));
	vcdp->fullBit  (c+5,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_3));
	vcdp->fullBit  (c+6,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->fullBus  (c+7,(vlTOPp->LFSRMaxPeriod__DOT__seed),4);
	vcdp->fullBus  (c+8,(vlTOPp->LFSRMaxPeriod__DOT__value),4);
	vcdp->fullBit  (c+9,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			      & (0xeU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->fullBus  (c+10,(vlTOPp->LFSRMaxPeriod__DOT__last),4);
	vcdp->fullBit  (c+11,(vlTOPp->clock));
	vcdp->fullBit  (c+12,(vlTOPp->reset));
    }
}
