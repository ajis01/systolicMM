// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1306(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1306\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408930
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_229))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408941
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_229))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:408944: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",408944,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408952
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:109:26)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408963
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:408966: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",408966,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408974
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408985
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:408988: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",408988,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408996
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 9U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x17U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409007
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 9U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x17U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409010: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409010,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409018
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409029
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409032: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409032,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((2U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:109:26)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409051
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((2U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409054: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409054,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409062
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (0xffffU & (~ 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409073
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (0xffffU & (~ 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409076: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409076,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409084
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409095
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (6U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409098: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409098,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409106
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_229))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409117
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_229))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409120: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409120,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409128
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:109:26)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409139
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409142: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409142,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409150
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409161
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409164: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409164,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409172
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 9U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x17U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409183
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 9U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x17U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409186: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409186,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409194
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409205
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409208: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409208,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409216
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((2U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:109:26)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409227
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((2U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409230: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409230,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409238
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U != (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:109:26)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409249
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U != (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409252: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409252,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409260
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (0xffffU & (~ 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409271
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (0xffffU & (~ 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
						      >> 1U))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409274: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409274,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409293
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409296: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409296,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409304
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409315
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409318: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409318,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409337
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409340: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409340,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409348
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409359
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409362: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409362,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409381
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409384: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409384,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409392
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409403
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409406: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409406,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409425
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (4U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409428: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409428,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409436
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409447
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409450: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409450,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409469
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409472: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409472,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409480
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409491
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409494: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409494,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409502
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409513
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409516: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409516,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409524
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409535
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409538: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409538,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409546
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409557
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409560: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409560,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409568
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409579
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409582: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409582,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409604: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409604,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409612
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409623
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409626: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409626,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_453))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409645
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (1U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_453))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409648: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409648,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_468))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409667
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_468))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409670: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409670,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409689
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409692: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409692,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409711
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409714: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409714,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:109:26)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409733
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((4U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409736: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409736,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409755
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (2U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409758: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409758,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_468))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409777
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_468))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409780: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409780,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409799
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409802: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409802,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409821
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409824: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409824,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((3U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:109:26)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409843
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((3U >= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					      << 5U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						>> 0x1bU)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409846: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409846,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (3U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409868: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409868,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_375))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409890: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409890,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_266))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409912: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409912,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_273))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409934: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409934,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:109:26)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409953
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_389))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409956: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409956,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409975
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (5U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					   << 2U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					   >> 0x1eU))))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:409978: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",409978,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:109:26)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:409997
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410000: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410000,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410019
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410022: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410022,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410041
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410044: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410044,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410063
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410066: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410066,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410085
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410088: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410088,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410096
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:109:26)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410107
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410110: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410110,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410129
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410132: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410132,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Configs.scala:109:26)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410151
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410154: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410154,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410173
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410176: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410176,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:109:26)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410195
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410198: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410198,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410206
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:109:26)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410217
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410220: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410220,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410239
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410242: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410242,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410261
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410264: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410264,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Configs.scala:109:26)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410283
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410286: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410286,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410305
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410308: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410308,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410316
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:109:26)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410327
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410330: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410330,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:109:26)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410349
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410352: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410352,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_641))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410371
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_641))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410374: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410374,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410393
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410396: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410396,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410418: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410418,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410426
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410437
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410440: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410440,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410459
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410462: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410462,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410470
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410481
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410484: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410484,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410492
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_641))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410503
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_641))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410506: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410506,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410514
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410525
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410528: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410528,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410536
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410547
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410550: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410550,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410558
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410569
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410572: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410572,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410580
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
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:136 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410591
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
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410594: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410594,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410602
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:138 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410613
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410616: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410616,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410624
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at Configs.scala:109:26)\n    at Monitor.scala:139 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410635
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410638: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410638,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410646
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:210 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410657
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410660: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410660,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410668
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:211 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410679
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410682: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410682,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410690
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:212 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410701
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410704: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410704,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:213 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410723
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410726: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410726,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410734
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at Configs.scala:109:26)\n    at Monitor.scala:214 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410745
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410748: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410748,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410756
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:215 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410767
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410770: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410770,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:219 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410789
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410792: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410792,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:220 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410811
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410814: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410814,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410822
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:221 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410833
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410836: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410836,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410844
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:222 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410855
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410858: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410858,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at Configs.scala:109:26)\n    at Monitor.scala:223 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410877
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410880: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410880,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410888
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:227 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410899
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410902: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410902,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410910
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:109:26)\n    at Monitor.scala:228 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410921
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410924: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410924,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:229 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410943
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410946: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410946,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:230 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410965
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410968: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410968,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410976
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:231 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410987
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:410990: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",410990,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:410998
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at Configs.scala:109:26)\n    at Monitor.scala:232 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411009
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411012: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411012,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411020
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:233 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411031
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411034: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411034,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411042
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at Configs.scala:109:26)\n    at Monitor.scala:237 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411053
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411056: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411056,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411064
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:109:26)\n    at Monitor.scala:238 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411075
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411078: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411078,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411086
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:239 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411097
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411100: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411100,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at Configs.scala:109:26)\n    at Monitor.scala:240 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411119
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411122: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411122,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:241 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411141
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411144: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411144,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411152
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at Configs.scala:109:26)\n    at Monitor.scala:242 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411163
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411166: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411166,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411174
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:246 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411185
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411188: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411188,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411196
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:247 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411207
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411210: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411210,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:248 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411229
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411232: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411232,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411240
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:249 assert (bundle.param === 0.U, \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411251
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411254: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411254,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411262
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:250 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411273
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411276: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411276,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411284
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:254 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411295
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411298: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411298,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411306
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:255 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411317
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411320: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411320,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411328
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:256 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411339
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411342: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411342,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411350
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:257 assert (bundle.param === 0.U, \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411361
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411364: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411364,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411372
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at Configs.scala:109:26)\n    at Monitor.scala:261 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411383
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
					      & (QData)((IData)(
								(0x80000000U 
								 ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411386: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411386,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:262 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411405
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411408: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411408,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411416
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at Configs.scala:109:26)\n    at Monitor.scala:263 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411427
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411430: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411430,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411438
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at Configs.scala:109:26)\n    at Monitor.scala:264 assert (bundle.param === 0.U, \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411449
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411452: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411452,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411460
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at Configs.scala:109:26)\n    at Monitor.scala:265 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411471
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411474: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411474,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411482
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)) 
				     | (IData)(vlTOPp->reset))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at Configs.scala:109:26)\n    at Monitor.scala:332 assert (sink_ok, \"'E' channels carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411493
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ ((0xcU > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)) 
				     | (IData)(vlTOPp->reset))))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411496: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411496,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411504
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1469))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411515
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1469))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411518: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411518,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411526
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1473))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411537
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1473))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411540: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411540,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411548
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1477))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411559
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1477))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411562: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411562,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411570
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1481))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411581
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1481))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411584: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411584,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411592
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1485))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411603
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1449))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1485))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411606: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411606,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411614
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1518))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411625
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1518))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411628: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411628,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411636
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411647
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411650: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411650,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411658
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1526))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411669
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1526))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411672: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411672,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411680
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1530))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411691
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1530))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411694: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411694,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411702
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1534))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411713
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1534))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411716: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411716,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411724
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1538))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411735
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1538))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411738: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411738,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411746
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1575))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:381 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411757
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1575))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411760: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411760,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411768
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1587))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:384 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411779
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1551))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1587))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411782: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411782,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411790
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1619))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:403 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411801
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1619))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411804: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411804,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411812
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1623))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:404 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411823
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1623))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411826: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411826,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411834
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1627))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:405 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411845
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1627))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411848: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411848,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411856
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1631))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:406 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411867
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1631))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411870: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411870,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411878
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1635))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at Configs.scala:109:26)\n    at Monitor.scala:407 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411889
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1599))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1635))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411892: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411892,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411900
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1440) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1649))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1688))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:109:26)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411911
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1440) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1649))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1688))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411914: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411914,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411922
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1668))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1702))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:109:26)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411933
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1668))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1702))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411936: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411936,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411944
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at Configs.scala:109:26)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411955
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1709))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411958: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411958,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411966
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1722))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:109:26)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411977
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1722))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:411980: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",411980,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411988
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1738))) 
			  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
			      >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
					   >> 1U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1762))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at Configs.scala:109:26)\n    at Monitor.scala:496 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:411999
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1738))) 
			  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
			      >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
					   >> 1U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1762))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:412002: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",412002,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412010
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1773)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at Configs.scala:109:26)\n    at Monitor.scala:502 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412021
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1773)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:412024: Assertion failed in %NTestHarness.top.InclusiveCache_inner_TLBuffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",412024,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1307(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1307\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_noop__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359479
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_78))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at IBuf.scala:79 assert(!io.imem.valid || !io.imem.bits.btb.taken || io.imem.bits.btb.bridx >= pcWordBits)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359533
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_78))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:359536: Assertion failed in %NTestHarness.top.tile.core.ibuf\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",359536,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_784) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_784))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_784) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_784))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_0.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1308(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1308\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_832) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_832))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_832) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_832))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_1.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_880) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_880))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_880) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_880))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_2.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1309(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1309\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_928) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_928))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_928) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_928))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_3.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_976) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_976))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_976) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_976))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_4.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1310(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1310\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1024) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1024))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1024) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1024))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_5.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1072) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1072) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_6.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1311(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1311\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1120) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1120))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1120) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1120))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_7.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1168) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1168))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1168) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1168))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_8.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1312(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1312\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1216) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1216))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1216) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1216))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_9.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1264) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1264))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1264) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1264))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_10.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1313(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1313\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1312) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1312) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1312))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_11.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1360) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1360))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1360) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1360))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_12.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1314(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1314\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1408) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1408))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1408) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1408))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_13.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274582
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1456) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1456))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: unknown dataflow\n    at PE.scala:92 assert(false.B, \"unknown dataflow\")\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274593
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1456) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1456))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:274596: Assertion failed in %NTestHarness.top.tile.v.ex_controller.mesh.mesh.mesh_5_14.tile_0_0\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",274596,"");
	}
    }
}
