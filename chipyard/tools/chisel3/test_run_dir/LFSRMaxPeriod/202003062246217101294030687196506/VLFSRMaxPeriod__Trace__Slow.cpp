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
	vcdp->declBit  (c+18,"clock",-1);
	vcdp->declBit  (c+19,"reset",-1);
	vcdp->declBit  (c+18,"LFSRMaxPeriod clock",-1);
	vcdp->declBit  (c+19,"LFSRMaxPeriod reset",-1);
	vcdp->declBit  (c+18,"LFSRMaxPeriod GaloisLFSR_clock",-1);
	vcdp->declBit  (c+19,"LFSRMaxPeriod GaloisLFSR_reset",-1);
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
	// Tracing: LFSRMaxPeriod _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:202
	// Tracing: LFSRMaxPeriod _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:203
	vcdp->declBus  (c+1,"LFSRMaxPeriod rv",-1,10,0);
	vcdp->declBit  (c+13,"LFSRMaxPeriod started",-1);
	// Tracing: LFSRMaxPeriod _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:206
	// Tracing: LFSRMaxPeriod _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:207
	vcdp->declBus  (c+14,"LFSRMaxPeriod seed",-1,10,0);
	// Tracing: LFSRMaxPeriod _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:209
	vcdp->declBus  (c+15,"LFSRMaxPeriod value",-1,10,0);
	// Tracing: LFSRMaxPeriod _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:211
	// Tracing: LFSRMaxPeriod _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:212
	// Tracing: LFSRMaxPeriod _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:213
	vcdp->declBit  (c+16,"LFSRMaxPeriod wrap",-1);
	// Tracing: LFSRMaxPeriod _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:215
	// Tracing: LFSRMaxPeriod _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:216
	// Tracing: LFSRMaxPeriod _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:217
	// Tracing: LFSRMaxPeriod _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:218
	// Tracing: LFSRMaxPeriod _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:219
	vcdp->declBus  (c+17,"LFSRMaxPeriod last",-1,10,0);
	// Tracing: LFSRMaxPeriod _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:221
	// Tracing: LFSRMaxPeriod _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:222
	// Tracing: LFSRMaxPeriod _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:223
	// Tracing: LFSRMaxPeriod _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:224
	vcdp->declBit  (c+18,"LFSRMaxPeriod GaloisLFSR clock",-1);
	vcdp->declBit  (c+19,"LFSRMaxPeriod GaloisLFSR reset",-1);
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
	vcdp->declBit  (c+2,"LFSRMaxPeriod GaloisLFSR state_0",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:17
	vcdp->declBit  (c+3,"LFSRMaxPeriod GaloisLFSR state_1",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:19
	vcdp->declBit  (c+4,"LFSRMaxPeriod GaloisLFSR state_2",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:21
	vcdp->declBit  (c+5,"LFSRMaxPeriod GaloisLFSR state_3",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:23
	vcdp->declBit  (c+6,"LFSRMaxPeriod GaloisLFSR state_4",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:25
	vcdp->declBit  (c+7,"LFSRMaxPeriod GaloisLFSR state_5",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:27
	vcdp->declBit  (c+8,"LFSRMaxPeriod GaloisLFSR state_6",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:29
	vcdp->declBit  (c+9,"LFSRMaxPeriod GaloisLFSR state_7",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:31
	vcdp->declBit  (c+10,"LFSRMaxPeriod GaloisLFSR state_8",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:33
	vcdp->declBit  (c+11,"LFSRMaxPeriod GaloisLFSR state_9",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:35
	vcdp->declBit  (c+12,"LFSRMaxPeriod GaloisLFSR state_10",-1);
	// Tracing: LFSRMaxPeriod GaloisLFSR _RAND_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:37
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:38
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:39
	// Tracing: LFSRMaxPeriod GaloisLFSR _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/202003062246217101294030687196506/LFSRMaxPeriod.v:40
    }
}

void VLFSRMaxPeriod::traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->LFSRMaxPeriod__DOT__rv),11);
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
	vcdp->fullBit  (c+13,(vlTOPp->LFSRMaxPeriod__DOT__started));
	vcdp->fullBus  (c+14,(vlTOPp->LFSRMaxPeriod__DOT__seed),11);
	vcdp->fullBus  (c+15,(vlTOPp->LFSRMaxPeriod__DOT__value),11);
	vcdp->fullBit  (c+16,(((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
			       & (0x7feU == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)))));
	vcdp->fullBus  (c+17,(vlTOPp->LFSRMaxPeriod__DOT__last),11);
	vcdp->fullBit  (c+18,(vlTOPp->clock));
	vcdp->fullBit  (c+19,(vlTOPp->reset));
    }
}
