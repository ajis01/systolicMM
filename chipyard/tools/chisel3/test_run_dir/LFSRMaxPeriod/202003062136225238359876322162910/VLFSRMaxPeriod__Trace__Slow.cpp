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
	vcdp->declBit  (c+23,"clock",-1);
	vcdp->declBit  (c+24,"reset",-1);
	vcdp->declBit  (c+23,"LFSRMaxPeriod clock",-1);
	vcdp->declBit  (c+24,"LFSRMaxPeriod reset",-1);
	vcdp->declBit  (c+23,"LFSRMaxPeriod GaloisLFSR_clock",-1);
	vcdp->declBit  (c+24,"LFSRMaxPeriod GaloisLFSR_reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR_io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR_io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR_io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR_io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR_io_out_4",-1);
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR_io_out_5",-1);
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR_io_out_6",-1);
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR_io_out_7",-1);
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR_io_out_8",-1);
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR_io_out_9",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR_io_out_10",-1);
	vcdp->declBit  (c+13,"LFSRMaxPeriod GaloisLFSR_io_out_11",-1);
	vcdp->declBit  (c+14,"LFSRMaxPeriod GaloisLFSR_io_out_12",-1);
	vcdp->declBit  (c+15,"LFSRMaxPeriod GaloisLFSR_io_out_13",-1);
	vcdp->declBit  (c+16,"LFSRMaxPeriod GaloisLFSR_io_out_14",-1);
	vcdp->declBit  (c+17,"LFSRMaxPeriod GaloisLFSR_io_out_15",-1);
	// Tracing: LFSRMaxPeriod _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:272
	// Tracing: LFSRMaxPeriod _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:273
	vcdp->declBus  (c+1,"LFSRMaxPeriod rv",-1,15,0);
	vcdp->declBit  (c+18,"LFSRMaxPeriod started",-1);
	// Tracing: LFSRMaxPeriod _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:276
	// Tracing: LFSRMaxPeriod _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:277
	vcdp->declBus  (c+19,"LFSRMaxPeriod seed",-1,15,0);
	// Tracing: LFSRMaxPeriod _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:279
	vcdp->declBus  (c+20,"LFSRMaxPeriod value",-1,15,0);
	// Tracing: LFSRMaxPeriod _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:281
	// Tracing: LFSRMaxPeriod _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:282
	// Tracing: LFSRMaxPeriod _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:283
	vcdp->declBit  (c+21,"LFSRMaxPeriod wrap",-1);
	// Tracing: LFSRMaxPeriod _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:285
	// Tracing: LFSRMaxPeriod _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:286
	// Tracing: LFSRMaxPeriod _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:287
	// Tracing: LFSRMaxPeriod _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:288
	// Tracing: LFSRMaxPeriod _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:289
	vcdp->declBus  (c+22,"LFSRMaxPeriod last",-1,15,0);
	// Tracing: LFSRMaxPeriod _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:291
	// Tracing: LFSRMaxPeriod _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:292
	// Tracing: LFSRMaxPeriod _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:293
	// Tracing: LFSRMaxPeriod _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:294
	vcdp->declBit  (c+23,"LFSRMaxPeriod GaloisLFSR clock",-1);
	vcdp->declBit  (c+24,"LFSRMaxPeriod GaloisLFSR reset",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR io_out_0",-1);
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR io_out_1",-1);
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR io_out_2",-1);
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR io_out_3",-1);
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR io_out_4",-1);
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR io_out_5",-1);
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR io_out_6",-1);
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR io_out_7",-1);
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR io_out_8",-1);
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR io_out_9",-1);
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR io_out_10",-1);
	vcdp->declBit  (c+13,"LFSRMaxPeriod GaloisLFSR io_out_11",-1);
	vcdp->declBit  (c+14,"LFSRMaxPeriod GaloisLFSR io_out_12",-1);
	vcdp->declBit  (c+15,"LFSRMaxPeriod GaloisLFSR io_out_13",-1);
	vcdp->declBit  (c+16,"LFSRMaxPeriod GaloisLFSR io_out_14",-1);
	vcdp->declBit  (c+17,"LFSRMaxPeriod GaloisLFSR io_out_15",-1);
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR state_0",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:22
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR state_1",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:24
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR state_2",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:26
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR state_3",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:28
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR state_4",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:30
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR state_5",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:32
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR state_6",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:34
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR state_7",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:36
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR state_8",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:38
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR state_9",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:40
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR state_10",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:42
	vcdp->declBit  (c+13,"LFSRMaxPeriod GaloisLFSR state_11",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:44
	vcdp->declBit  (c+14,"LFSRMaxPeriod GaloisLFSR state_12",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:46
	vcdp->declBit  (c+15,"LFSRMaxPeriod GaloisLFSR state_13",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:48
	vcdp->declBit  (c+16,"LFSRMaxPeriod GaloisLFSR state_14",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:50
	vcdp->declBit  (c+17,"LFSRMaxPeriod GaloisLFSR state_15",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:52
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:53
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:54
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062136225238359876322162910/LFSRMaxPeriod.v:55
    }
}

void VLFSRMaxPeriod::traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),16);
	vcdp->fullBit  (c+2,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
	vcdp->fullBit  (c+3,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1));
	vcdp->fullBit  (c+4,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2));
	vcdp->fullBit  (c+5,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_3));
	vcdp->fullBit  (c+6,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_4));
	vcdp->fullBit  (c+7,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_5));
	vcdp->fullBit  (c+8,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_6));
	vcdp->fullBit  (c+9,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_7));
	vcdp->fullBit  (c+10,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_8));
	vcdp->fullBit  (c+11,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_9));
	vcdp->fullBit  (c+12,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_10));
	vcdp->fullBit  (c+13,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_11));
	vcdp->fullBit  (c+14,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_12));
	vcdp->fullBit  (c+15,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_13));
	vcdp->fullBit  (c+16,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_14));
	vcdp->fullBit  (c+17,(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_15));
	vcdp->fullBit  (c+18,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->fullBus  (c+19,(vlTOPp->LFSRMaxPeriod__DOT__seed),16);
	vcdp->fullBus  (c+20,(vlTOPp->LFSRMaxPeriod__DOT__value),16);
	vcdp->fullBit  (c+21,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			       & (0xfffeU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->fullBus  (c+22,(vlTOPp->LFSRMaxPeriod__DOT__last),16);
	vcdp->fullBit  (c+23,(vlTOPp->clock));
	vcdp->fullBit  (c+24,(vlTOPp->reset));
    }
}
