// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_dirty__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_clients__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_state__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_data_tag__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_way__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_set__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_source__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386155
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_66))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ListBuffer.scala:84 assert (!io.pop.fire() || (io.valid)(io.pop.bits))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386200
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_66))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:386203: Assertion failed in %NTestHarness.top.l2.mods_0.sinkA.putbuffer\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",386203,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387365
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387396
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_48))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ListBuffer.scala:84 assert (!io.pop.fire() || (io.valid)(io.pop.bits))\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387407
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_48))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:387410: Assertion failed in %NTestHarness.top.l2.mods_0.sinkC.ListBuffer\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",387410,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_201))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8645
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_201))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8648: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8648,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8667
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8670: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8670,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8689
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8692: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8692,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8711
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8714: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8714,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8733
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8736: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8736,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8755
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8758: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8758,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8777
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8780: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8780,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8799
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8802: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8802,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_201))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8821
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_201))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8824: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8824,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8843
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8846: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8846,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8868: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8868,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8890: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8890,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8912: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8912,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8934: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8934,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8953
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8956: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8956,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8975
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:8978: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",8978,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8997
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9000: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9000,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_376))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9019
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_376))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9022: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9022,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9041
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9044: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9044,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9063
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9066: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9066,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9085
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9088: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9088,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9096
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9107
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9110: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9110,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9129
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9132: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9132,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9151
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9154: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9154,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9173
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9176: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9176,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9195
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9198: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9198,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9206
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9217
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9220: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9220,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9239
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9242: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9242,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9261
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9264: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9264,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9283
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9286: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9286,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9305
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9308: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9308,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9316
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9327
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9330: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9330,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_552))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9349
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_552))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9352: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9352,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_616))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9371
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_616))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9374: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9374,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9393
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9396: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9396,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9418: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9418,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9426
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9437
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9440: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9440,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9459
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9462: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9462,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9470
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_616))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9481
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_616))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9484: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9484,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9492
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9503
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9506: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9506,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9514
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9525
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9528: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9528,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9536
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9547
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9550: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9550,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9558
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9569
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9572: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9572,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9580
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_772))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9591
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_772))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9594: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9594,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9602
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9613
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9616: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9616,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9624
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9635
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9638: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9638,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9646
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9657
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_390))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9660: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9660,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9668
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9679
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
				   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9682: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9682,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9690
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9701
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9704: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9704,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9723
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9726: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9726,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9734
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9745
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9748: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9748,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9756
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9767
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9770: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9770,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9789
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9792: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9792,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9811
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9814: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9814,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9822
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9833
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9836: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9836,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9844
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9855
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9858: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9858,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9877
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9880: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9880,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9888
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9899
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9902: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9902,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9910
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9921
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9924: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9924,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9943
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9946: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9946,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_865))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9965
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_865))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9968: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9968,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9976
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9987
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:9990: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",9990,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:9998
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10009
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10012: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10012,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10020
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10031
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10034: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10034,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10042
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_865))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10053
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_865))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10056: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10056,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10064
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10075
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10078: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10078,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10086
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10097
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10100: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10100,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_968))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10119
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_968))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10122: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10122,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10141
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10144: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10144,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10152
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_976))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10163
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_976))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10166: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10166,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10174
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_980))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10185
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_980))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10188: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10188,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10196
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_984))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10207
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_984))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10210: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10210,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1017))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10229
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1017))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10232: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10232,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10240
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1021))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10251
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1021))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10254: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10254,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10262
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1025))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10273
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1025))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10276: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10276,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10284
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10295
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10298: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10298,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10306
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1037))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10317
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1037))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10320: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10320,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10328
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1090))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10339
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1090))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10342: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10342,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10350
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1098) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1104))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10361
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1098) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1104))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10364: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10364,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10372
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1111))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10383
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1111))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10386: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10386,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:66:9)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:10405
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1124))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:10408: Assertion failed in %NTestHarness.top.sbus.system_bus_xbar.TLMonitor_2\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",10408,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__head__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__head__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__head__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__head__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_way__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201165
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_113))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: reading from and writing to same address is not supported\n    at AccumulatorMem.scala:129 assert(!(io.read.req.fire() && io.write.en && io.read.req.bits.addr === io.write.addr), \"reading from and writing to same address is not supported\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201176
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_113))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:201179: Assertion failed in %NTestHarness.top.tile.v.spad.AccumulatorMem\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",201179,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201187
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_121))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: reading from an address immediately after writing to it is not supported\n    at AccumulatorMem.scala:130 assert(!(io.read.req.fire() && w_buf_valid && waddr_buf === io.read.req.bits.addr), \"reading from an address immediately after writing to it is not supported\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201198
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_121))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:201201: Assertion failed in %NTestHarness.top.tile.v.spad.AccumulatorMem\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",201201,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1425(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1425\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374448
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374625
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_229))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374636
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_229))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374639: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374639,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374647
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:110:13)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374658
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374661: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374661,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374669
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374680
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374683: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374683,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374691
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374702
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374705: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374705,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374713
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374724
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374727: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374727,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374735
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:110:13)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374746
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374749: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374749,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374757
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374768
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374771: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374771,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374779
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374790
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374793: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374793,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374801
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_229))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374812
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_229))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374815: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374815,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374823
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:110:13)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374834
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374837: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374837,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374845
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374856
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374859: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374859,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374867
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374878
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374881: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374881,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374889
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374900
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374903: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374903,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374911
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:110:13)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374922
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374925: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374925,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374933
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:110:13)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374944
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374947: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374947,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374955
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374966
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374969: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374969,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374977
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374988
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:374991: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",374991,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374999
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375010
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375013: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375013,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375021
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375032
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375035: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375035,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375043
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375054
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375057: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375057,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375065
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375076
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375079: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375079,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375087
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375098
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375101: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375101,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375109
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375120
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375123: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375123,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375131
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375142
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375145: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375145,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375153
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375164
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375167: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375167,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375175
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375186
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375189: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375189,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375197
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375208
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375211: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375211,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375219
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375230
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375233: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375233,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375241
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375252
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375255: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375255,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375263
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375274
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375277: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375277,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375285
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375296
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375299: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375299,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375307
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375318
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375321: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375321,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375329
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_453))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375340
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_453))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375343: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375343,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375351
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_468))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375362
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_468))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375365: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375365,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375373
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375384
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375387: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375387,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375395
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375406
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375409: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375409,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375417
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:110:13)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375428
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375431: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375431,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375439
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375450
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375453: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375453,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375461
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_468))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375472
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_468))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375475: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375475,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375483
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375494
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375497: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375497,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375505
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375516
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375519: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375519,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375527
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:110:13)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375538
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375541: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375541,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375549
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375560
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375563: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375563,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375571
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375582
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375585: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375585,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375593
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375604
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375607: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375607,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375615
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375626
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375629: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375629,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375637
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:110:13)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375648
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375651: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375651,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375659
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375670
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
				    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
				   [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U])) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375673: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375673,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375681
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:110:13)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375692
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375695: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375695,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375703
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375714
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375717: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375717,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375725
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375736
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375739: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375739,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375747
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375758
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375761: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375761,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375769
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375780
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375783: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375783,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375791
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_bad)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:110:13)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375802
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_bad)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375805: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375805,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375813
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375824
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375827: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375827,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375835
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Configs.scala:110:13)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375846
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375849: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375849,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375857
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375868
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375871: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375871,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375879
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:110:13)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375890
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375893: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375893,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375901
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:110:13)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375912
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375915: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375915,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375923
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375934
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375937: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375937,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375945
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375956
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375959: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375959,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375967
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Configs.scala:110:13)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375978
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:375981: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",375981,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:375989
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376000
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376003: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376003,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376011
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:110:13)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376022
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376025: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376025,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376033
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:110:13)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376044
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376047: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376047,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376055
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_641))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376066
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_641))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376069: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376069,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376077
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376088
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376091: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376091,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376099
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376110
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376113: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376113,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376121
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376132
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376135: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376135,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376143
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376154
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376157: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376157,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376165
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376176
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376179: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376179,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376187
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_641))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376198
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_641))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376201: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376201,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376209
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376220
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376223: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376223,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376231
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376242
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376245: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376245,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376253
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376264
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376267: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376267,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376275
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ 
								 (0x80000000U 
								  | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:136 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376286
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ 
								 (0x80000000U 
								  | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376289: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376289,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376297
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:138 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376308
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376311: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376311,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376319
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at Configs.scala:110:13)\n    at Monitor.scala:139 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376330
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376333: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376333,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376341
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:210 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376352
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376355: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376355,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376363
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:211 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376374
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376377: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376377,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376385
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:212 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376396
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376399: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376399,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376407
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:213 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376418
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376421: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376421,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376429
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at Configs.scala:110:13)\n    at Monitor.scala:214 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376440
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376443: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376443,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376451
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:215 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376462
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376465: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376465,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376473
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:219 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376484
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376487: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376487,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376495
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:220 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376506
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376509: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376509,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376517
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:221 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376528
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376531: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376531,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376539
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:222 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376550
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376553: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376553,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376561
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at Configs.scala:110:13)\n    at Monitor.scala:223 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376572
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376575: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376575,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376583
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:227 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376594
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376597: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376597,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376605
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:110:13)\n    at Monitor.scala:228 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376616
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376619: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376619,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376627
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:229 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376638
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376641: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376641,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376649
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:230 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376660
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376663: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376663,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376671
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:231 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376682
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376685: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376685,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376693
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at Configs.scala:110:13)\n    at Monitor.scala:232 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376704
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376707: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376707,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376715
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:233 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376726
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376729: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376729,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376737
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at Configs.scala:110:13)\n    at Monitor.scala:237 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376748
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376751: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376751,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376759
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:110:13)\n    at Monitor.scala:238 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376770
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376773: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376773,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376781
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:239 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376792
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376795: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376795,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376803
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at Configs.scala:110:13)\n    at Monitor.scala:240 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376814
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376817: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376817,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376825
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:241 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376836
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376839: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376839,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376847
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at Configs.scala:110:13)\n    at Monitor.scala:242 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376858
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376861: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376861,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376869
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:246 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376880
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376883: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376883,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376891
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:247 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376902
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376905: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376905,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376913
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:248 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376924
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376927: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376927,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376935
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:249 assert (bundle.param === 0.U, \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376946
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376949: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376949,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376957
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:250 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376968
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376971: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376971,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376979
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:254 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:376990
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:376993: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",376993,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377001
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:255 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377012
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377015: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377015,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377023
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:256 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377034
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377037: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377037,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:257 assert (bundle.param === 0.U, \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377056
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377059: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377059,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at Configs.scala:110:13)\n    at Monitor.scala:261 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377078
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377081: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377081,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377089
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:262 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377100
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377103: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377103,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377111
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at Configs.scala:110:13)\n    at Monitor.scala:263 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377122
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377125: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377125,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377133
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at Configs.scala:110:13)\n    at Monitor.scala:264 assert (bundle.param === 0.U, \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377144
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377147: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377147,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377155
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at Configs.scala:110:13)\n    at Monitor.scala:265 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377166
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377169: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377169,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377177
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)) 
				     | (IData)(vlTOPp->reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at Configs.scala:110:13)\n    at Monitor.scala:332 assert (sink_ok, \"'E' channels carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377188
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)) 
				     | (IData)(vlTOPp->reset))))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377191: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377191,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377199
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1469))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377210
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1469))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377213: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377213,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377221
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1473))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377232
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1473))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377235: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377235,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1477))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377254
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1477))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377257: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377257,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1481))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377276
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1481))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377279: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377279,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1485))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377298
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1485))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377301: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377301,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1518))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377320
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1518))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377323: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377323,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377342
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377345: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377345,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1526))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377364
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1526))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377367: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377367,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377375
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1530))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377386
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1530))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377389: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377389,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1534))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377408
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1534))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377411: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377411,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377430
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1538))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377433: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377433,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377441
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1575))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:381 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377452
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1575))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377455: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377455,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1587))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:384 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377474
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1587))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377477: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377477,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1619))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:403 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377496
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1619))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377499: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377499,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1623))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:404 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377518
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1623))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377521: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377521,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1627))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:405 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377540
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1627))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377543: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377543,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1631))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:406 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377562
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1631))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377565: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377565,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377573
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1635))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at Configs.scala:110:13)\n    at Monitor.scala:407 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377584
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1635))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377587: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377587,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377595
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1440) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1649))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1688))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:110:13)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377606
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1440) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1649))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1688))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377609: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377609,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377617
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1668))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1702))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:110:13)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377628
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1668))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1702))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377631: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377631,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377639
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at Configs.scala:110:13)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377650
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1709))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377653: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377653,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377661
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1722))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:110:13)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377672
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1722))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377675: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377675,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1738))) 
			  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode) 
			      >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode) 
					   >> 1U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1762))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at Configs.scala:110:13)\n    at Monitor.scala:496 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377694
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1738))) 
			  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode) 
			      >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode) 
					   >> 1U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1762))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377697: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377697,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1773)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at Configs.scala:110:13)\n    at Monitor.scala:502 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:377716
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1773)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:377719: Assertion failed in %NTestHarness.top.l2.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",377719,"");
	}
    }
}
