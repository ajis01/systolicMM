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
	vcdp->declBit  (c+16,"clock",-1);
	vcdp->declBit  (c+17,"reset",-1);
	vcdp->declBit  (c+16,"LFSRMaxPeriod clock",-1);
	vcdp->declBit  (c+17,"LFSRMaxPeriod reset",-1);
	vcdp->declBit  (c+16,"LFSRMaxPeriod GaloisLFSR_clock",-1);
	vcdp->declBit  (c+17,"LFSRMaxPeriod GaloisLFSR_reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR_io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR_io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR_io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR_io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR_io_out_4",-1);
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR_io_out_5",-1);
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR_io_out_6",-1);
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR_io_out_7",-1);
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR_io_out_8",-1);
	// Tracing: LFSRMaxPeriod _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:170
	// Tracing: LFSRMaxPeriod _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:171
	vcdp->declBus  (c+1,"LFSRMaxPeriod rv",-1,8,0);
	vcdp->declBit  (c+11,"LFSRMaxPeriod started",-1);
	// Tracing: LFSRMaxPeriod _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:174
	// Tracing: LFSRMaxPeriod _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:175
	vcdp->declBus  (c+12,"LFSRMaxPeriod seed",-1,8,0);
	// Tracing: LFSRMaxPeriod _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:177
	vcdp->declBus  (c+13,"LFSRMaxPeriod value",-1,8,0);
	// Tracing: LFSRMaxPeriod _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:179
	// Tracing: LFSRMaxPeriod _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:180
	// Tracing: LFSRMaxPeriod _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:181
	vcdp->declBit  (c+14,"LFSRMaxPeriod wrap",-1);
	// Tracing: LFSRMaxPeriod _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:183
	// Tracing: LFSRMaxPeriod _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:184
	// Tracing: LFSRMaxPeriod _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:185
	// Tracing: LFSRMaxPeriod _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:186
	// Tracing: LFSRMaxPeriod _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:187
	vcdp->declBus  (c+15,"LFSRMaxPeriod last",-1,8,0);
	// Tracing: LFSRMaxPeriod _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:189
	// Tracing: LFSRMaxPeriod _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:190
	// Tracing: LFSRMaxPeriod _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:191
	// Tracing: LFSRMaxPeriod _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:192
	vcdp->declBit  (c+16,"LFSRMaxPeriod GaloisLFSR clock",-1);
	vcdp->declBit  (c+17,"LFSRMaxPeriod GaloisLFSR reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR io_out_4",-1);
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR io_out_5",-1);
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR io_out_6",-1);
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR io_out_7",-1);
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR io_out_8",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR state_0",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:15
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR state_1",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:17
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR state_2",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:19
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR state_3",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:21
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR state_4",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:23
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR state_5",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:25
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR state_6",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:27
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR state_7",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:29
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR state_8",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:31
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030621350318208005195172941123/LFSRMaxPeriod.v:32
    }
}

void VLFSRMaxPeriod::traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),9);
	vcdp->fullBit  (c+2,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
	vcdp->fullBit  (c+3,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1));
	vcdp->fullBit  (c+4,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2));
	vcdp->fullBit  (c+5,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_3));
	vcdp->fullBit  (c+6,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_4));
	vcdp->fullBit  (c+7,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_5));
	vcdp->fullBit  (c+8,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_6));
	vcdp->fullBit  (c+9,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_7));
	vcdp->fullBit  (c+10,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_8));
	vcdp->fullBit  (c+11,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->fullBus  (c+12,(vlTOPp->LFSRMaxPeriod__DOT__seed),9);
	vcdp->fullBus  (c+13,(vlTOPp->LFSRMaxPeriod__DOT__value),9);
	vcdp->fullBit  (c+14,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			       & (0x1feU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->fullBus  (c+15,(vlTOPp->LFSRMaxPeriod__DOT__last),9);
	vcdp->fullBit  (c+16,(vlTOPp->clock));
	vcdp->fullBit  (c+17,(vlTOPp->reset));
    }
}
