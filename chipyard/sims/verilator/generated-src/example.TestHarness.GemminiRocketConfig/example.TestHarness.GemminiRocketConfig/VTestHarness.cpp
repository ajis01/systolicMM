// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VTestHarness::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestHarness::eval\n"); );
    VTestHarness__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VTestHarness::_eval_initial_loop(VTestHarness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198286
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198289
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT___T_5))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: undefined behavior in dual-ported SRAM\n    at SyncMem.scala:41 assert(!(io.wen && io.ren && io.raddr === io.waddr), \"undefined behavior in dual-ported SRAM\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198300
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT___T_5))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:198303: Assertion failed in %NTestHarness.top.tile.v.spad.AccumulatorMem.mem\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",198303,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365689
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((0U < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_3))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Timeout exceeded: Kill the emulation after INT rdtime cycles. Off if 0.\n    at PlusArg.scala:30 assert (io.count < max, s\"Timeout exceeded: $docstring\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365703
done_reset	
    ) {
	if (VL_UNLIKELY(((0U < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_3))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:365706: Assertion failed in %NTestHarness.top.tile.core.PlusArgTimeout\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",365706,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1266
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1269
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_52))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1280
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_52))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.harness.v:1283: Assertion failed in %NTestHarness.mem.axi4xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v",1283,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_73))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1302
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_73))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.harness.v:1305: Assertion failed in %NTestHarness.mem.axi4xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v",1305,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_96))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1324
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_96))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.harness.v:1327: Assertion failed in %NTestHarness.mem.axi4xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v",1327,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_117))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1346
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_117))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.harness.v:1349: Assertion failed in %NTestHarness.mem.axi4xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v",1349,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:78042
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:78045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_10))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:54 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:78056
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_10))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:78059: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.axi4yank\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",78059,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:78067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_138))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:75 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:78078
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_138))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:78081: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.axi4yank\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",78081,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__next__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_465__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1144(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1144\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1145(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1145\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150776
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150779
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x28U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:601:18)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150790
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x28U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150793: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150793,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150801
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:601:18)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150812
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150815: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150815,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150823
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Debug.scala:601:18)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150834
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150837: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150837,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150845
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150856
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150859: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150859,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150867
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150878
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150881: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150881,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150889
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Debug.scala:601:18)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150900
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150903: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150903,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150911
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:601:18)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150922
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150925: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150925,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150933
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Debug.scala:601:18)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150944
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150947: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150947,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150955
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Debug.scala:601:18)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150966
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150969: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150969,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150977
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150988
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:150991: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",150991,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:150999
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:292 assert (deny_put_ok || !bundle.denied, \"'D' channel Grant is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151010
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151013: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151013,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151021
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Debug.scala:601:18)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151032
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151035: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151035,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151043
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:601:18)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151054
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151057: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151057,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151065
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Debug.scala:601:18)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151076
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151079: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151079,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151087
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Debug.scala:601:18)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151098
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151101: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151101,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151109
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_384))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151120
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_384))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151123: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151123,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151131
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:302 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151142
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151145: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151145,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151153
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Debug.scala:601:18)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151164
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151167: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151167,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151175
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151186
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151189: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151189,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151197
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:310 assert (deny_put_ok || !bundle.denied, \"'D' channel AccessAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151208
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151211: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151211,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151219
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Debug.scala:601:18)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151230
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151233: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151233,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151241
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_384))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151252
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_384))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151255: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151255,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151263
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:318 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151274
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151277: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151277,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151285
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Debug.scala:601:18)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151296
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151299: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151299,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151307
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Debug.scala:601:18)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151318
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151321: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151321,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151329
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at Debug.scala:601:18)\n    at Monitor.scala:326 assert (deny_put_ok || !bundle.denied, \"'D' channel HintAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151340
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_256 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151343: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151343,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152011
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x28U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:622:46)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152025
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x28U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152028: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152028,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152047
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152050: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152050,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:622:46)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152069
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152072: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152072,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Debug.scala:622:46)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152091
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152094: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152094,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152113
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152116: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152116,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152135
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152138: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152138,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152157
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152160: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152160,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Debug.scala:622:46)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152179
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152182: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152182,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:622:46)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152201
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152204: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152204,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Debug.scala:622:46)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152226: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152226,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Debug.scala:622:46)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152248: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152248,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152270: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152270,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:292 assert (deny_put_ok || !bundle.denied, \"'D' channel Grant is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152292: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152292,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152314: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152314,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Debug.scala:622:46)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152336: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152336,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:622:46)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x24U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152358: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152358,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Debug.scala:622:46)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152380: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152380,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Debug.scala:622:46)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((2U != (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152402: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152402,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_624))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_624))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152424: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152424,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:302 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152446: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152446,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152468: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152468,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Debug.scala:622:46)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152487
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152490: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152490,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152512: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152512,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:310 assert (deny_put_ok || !bundle.denied, \"'D' channel AccessAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152531
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152534: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152534,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152553
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152556: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152556,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Debug.scala:622:46)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152575
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152578: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152578,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_624))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_624))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152600: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152600,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:318 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152619
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152622: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152622,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Debug.scala:622:46)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152641
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x23U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152644: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152644,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Debug.scala:622:46)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x26U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152666: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152666,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Debug.scala:622:46)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152688: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152688,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at Debug.scala:622:46)\n    at Monitor.scala:326 assert (deny_put_ok || !bundle.denied, \"'D' channel HintAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:152707
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink_io_deq_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x28U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x21U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:152710: Assertion failed in %NTestHarness.top.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",152710,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__idle 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__idle;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_strb__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_len__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_cmd_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_laddr_is_acc_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_user__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__next__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_laddr_data__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151568
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151605
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_228))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:70 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151616
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_228))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:151619: Assertion failed in %NTestHarness.top.debug_1.dmOuter.dmiXbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",151619,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state 
	= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_strb__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266808
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266889
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad_io_dma_write_resp_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_20))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DMAReadCommandTracker.scala:108 assert(cmds(cmd_id).valid)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266900
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad_io_dma_write_resp_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_20))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:266903: Assertion failed in %NTestHarness.top.tile.v.store_controller.cmd_tracker\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",266903,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266911
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad_io_dma_write_resp_valid) 
			 & (~ ((1U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_23)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DMAReadCommandTracker.scala:109 assert(cmds(cmd_id).bytes_left >= io.request_returned.bits.bytes_read)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266922
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad_io_dma_write_resp_valid) 
			 & (~ ((1U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_23)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:266925: Assertion failed in %NTestHarness.top.tile.v.store_controller.cmd_tracker\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",266925,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_data__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:402786
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:402806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_405))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at InclusiveCache.scala:209 assert (!scheduler.io.resp.valid || flushSelect)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:402817
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_405))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:402820: Assertion failed in %NTestHarness.top.l2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",402820,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__next__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_burst__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_5_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_4_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_3_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_2_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_0_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_1_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_6_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_7_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_8_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_9_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_10_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_11_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_12_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_13_0__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_14_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_15_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_shift__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_len__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_relu6_shift__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_burst__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1160(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1160\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113992
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_38))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:28 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114037
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_38))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:114040: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",114040,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_fromDMA__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_len__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_fromDMA__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1161(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1161\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__Queue_1__DOT___T__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_fromDMA__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430380
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430413
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm_io_in_ready) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_4))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"UART TX (%x): %c\n",
		       8,vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T
		       [vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value_1],
		       8,vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T
		       [vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value_1]);
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_data__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378313
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378409
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378412: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378412,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378420
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:126:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378431
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378434: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378434,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378453
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378456: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378456,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:126:9)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378475
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378478: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378478,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378486
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378497
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378500: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378500,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:126:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378519
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378522: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378522,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0xffU 
						  & (~ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378541
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0xffU 
						  & (~ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378544: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378544,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:126:9)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378563
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378566: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378566,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378585
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378588: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378588,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:126:9)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378607
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378610: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378610,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378618
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378629
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378632: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378632,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:126:9)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378651
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378654: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378654,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378662
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378673
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378676: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378676,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:126:9)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378695
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378698: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378698,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378706
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:126:9)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378717
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378720: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378720,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0xffU 
						  & (~ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378739
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0xffU 
						  & (~ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378742: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378742,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378750
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:126:9)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378761
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378764: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378764,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378783
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378786: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378786,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378794
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378805
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378808: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378808,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378827
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378830: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378830,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378838
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:126:9)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378849
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378852: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378852,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378871
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378874: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378874,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378882
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:126:9)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378893
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378896: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378896,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378904
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378915
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378918: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378918,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378937
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378940: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378940,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378948
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378959
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378962: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378962,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:126:9)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378981
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:378984: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",378984,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:378992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379003
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379006: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379006,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379025
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == (0x7fff000U 
						  & (0x2010000U 
						     ^ 
						     vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						     [0U]))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379028: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379028,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379047
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379050: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379050,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379069
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379072: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379072,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:126:9)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379091
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379094: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379094,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_272))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379113
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_272))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379116: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379116,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379135
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379138: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379138,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379157
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379160: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379160,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379179
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379182: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379182,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((4U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:126:9)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379201
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((4U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379204: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379204,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379226: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379226,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379248: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379248,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379270: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379270,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379292: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379292,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:126:9)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((3U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379314: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379314,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (3U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379336: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379336,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:126:9)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379358: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379358,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((0x24fU >= 
					   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379380: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379380,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:126:9)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379402: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379402,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:126:9)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379424: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379424,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:126:9)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379446: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379446,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
			     [0U])) & (~ ((0x24fU >= 
					   (0x3ffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
					       [0U] 
					       >> 2U))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
			     [0U])) & (~ ((0x24fU >= 
					   (0x3ffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
					       [0U] 
					       >> 2U))) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379666: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379666,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
			  [0U]) & (~ ((0x24fU >= (0x3ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
						     [0U] 
						     >> 2U))) 
				      | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
			  [0U]) & (~ ((0x24fU >= (0x3ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
						     [0U] 
						     >> 2U))) 
				      | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379688: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379688,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_539))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379729
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_539))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379732: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379732,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379740
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_543))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379751
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_543))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379754: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379754,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_547))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379773
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_547))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379776: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379776,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379784
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_551))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379795
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_551))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379798: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379798,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_555))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379817
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_519)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_555))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379820: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379820,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_588))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379839
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_588))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379842: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379842,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379861
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379864: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379864,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_600))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:126:9)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1_io_in_d_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_567)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_600))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379886: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379886,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_510) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_622))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_661))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:126:9)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379905
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_510) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_622))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_661))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379908: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379908,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_559) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_641))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_675))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:126:9)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379927
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_559) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_641))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_675))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379930: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379930,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_682))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Configs.scala:126:9)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379949
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_682))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379952: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379952,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_695))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:126:9)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:379971
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_695))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:379974: Assertion failed in %NTestHarness.top.l2.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",379974,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_fromDMA__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_id__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147885
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_18))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Plic.scala:237 assert((claimer.asUInt & (claimer.asUInt - UInt(1))) === UInt(0)) // One-Hot\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147945
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_18))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:147948: Assertion failed in %NTestHarness.top.plic\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",147948,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_45))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Plic.scala:254 assert((completer.asUInt & (completer.asUInt - UInt(1))) === UInt(0)) // One-Hot\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147967
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_45))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:147970: Assertion failed in %NTestHarness.top.plic\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",147970,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_id__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111748
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111861
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111864: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111864,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111883
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111886: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111886,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111905
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111908: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111908,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111927
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111930: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111930,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111949
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111952: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111952,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111971
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111974: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111974,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111982
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:111993
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:111996: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",111996,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112015
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112018: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112018,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112037
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112040: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112040,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112059
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112062: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112062,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112070
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112081
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112084: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112084,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112103
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112106: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112106,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112125
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112128: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112128,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112147
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112150: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112150,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112169
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112172: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112172,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112191
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112194: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112194,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112213
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112216: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112216,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112235
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112238: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112238,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112257
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112260: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112260,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112279
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112282: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112282,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112301
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112304: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112304,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112323
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112326: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112326,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112345
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112348: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112348,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112367
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112370: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112370,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112389
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112392: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112392,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112400
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112411
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112414: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112414,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112433
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112436: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112436,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112455
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112458: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112458,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112466
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112477
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112480: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112480,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112499
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112502: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112502,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112521
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112524: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112524,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112543
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112546: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112546,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112565
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_409))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112568: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112568,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_424))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112587
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_424))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112590: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112590,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112609
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112612: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112612,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112631
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112634: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112634,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112653
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112656: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112656,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112675
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112678: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112678,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_424))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112697
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_424))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112700: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112700,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112719
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112722: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112722,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112741
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112744: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112744,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112763
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112766: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112766,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112785
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112788: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112788,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112807
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112810: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112810,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112818
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112829
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112832: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112832,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112840
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112851
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112854: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112854,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112873
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112876: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112876,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112884
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112895
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112898: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112898,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112917
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112920: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112920,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112939
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112942: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112942,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112961
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112964: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112964,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112983
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:112986: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",112986,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:112994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113005
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113008: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113008,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113016
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113027
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113030: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113030,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113052: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113052,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113071
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113074: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113074,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113096: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113096,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113115
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113118: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113118,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113137
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113140: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113140,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113159
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113162: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113162,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113181
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113184: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113184,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113203
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113206: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113206,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113228: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113228,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113236
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113247
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113250: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113250,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113269
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113272: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113272,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113280
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113291
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113294: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113294,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113313
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113316: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113316,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_702))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113335
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_702))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113338: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113338,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_706))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113357
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_706))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113360: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113360,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113368
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_710))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113379
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_710))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113382: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113382,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_714))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113401
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_714))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113404: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113404,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113412
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_718))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113423
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_682))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_718))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113426: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113426,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_751))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113445
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_751))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113448: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113448,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113456
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_759))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113467
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_759))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113470: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113470,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113489
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_763))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113492: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113492,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113500
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_746) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113511
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_730))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_746) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113514: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113514,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_673) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_785))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_824))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113533
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_673) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_785))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_824))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113536: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113536,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_722) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_804))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_838))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113555
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_722) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_804))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_838))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113558: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113558,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113577
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113580: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113580,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_858))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CanHaveBuiltInDevices.scala:22:18)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113599
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_858))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:113602: Assertion failed in %NTestHarness.top.cbus.wrapped_error_device.error.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",113602,"");
	}
    }
}
