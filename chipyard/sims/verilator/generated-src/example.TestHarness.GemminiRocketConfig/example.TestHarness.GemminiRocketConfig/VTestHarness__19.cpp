// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1401(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1401\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17025
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17028: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17028,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:37:39)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17047
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17050: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17050,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17069
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17072: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17072,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17091
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17094: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17094,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17113
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17116: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17116,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17135
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17138: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17138,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17157
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17160: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17160,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17179
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17182: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17182,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17201
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17204: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17204,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:37:39)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17223
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17226: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17226,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17245
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17248: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17248,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17267
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17270: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17270,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17289
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17292: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17292,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17311
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17314: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17314,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:37:39)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17333
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17336: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17336,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17355
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17358: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17358,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17377
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17380: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17380,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_420))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17399
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_420))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17402: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17402,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17421
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17424: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17424,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17443
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17446: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17446,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17465
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17468: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17468,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17487
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17490: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17490,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17509
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17512: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17512,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17531
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17534: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17534,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17553
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17556: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17556,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17575
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17578: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17578,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17597
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17600: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17600,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17619
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17622: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17622,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17641
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17644: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17644,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17663
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17666: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17666,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17685
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17688: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17688,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17707
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17710: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17710,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17729
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17732: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17732,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17740
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17751
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17754: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17754,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17773
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17776: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17776,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17784
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17795
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17798: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17798,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17817
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17820: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17820,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17839
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17842: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17842,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17861
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17864: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17864,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17883
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17886: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17886,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17905
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17908: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17908,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17927
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17930: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17930,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17949
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17952: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17952,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17971
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_816))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17974: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17974,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17982
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:17993
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:17996: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",17996,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18015
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18018: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18018,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:37:39)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18037
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18040: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18040,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18059
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18062: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18062,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18070
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:37:39)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18081
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18084: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18084,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18103
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18106: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18106,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18125
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18128: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18128,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18147
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18150: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18150,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18169
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18172: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18172,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:37:39)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18191
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18194: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18194,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18213
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18216: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18216,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18238: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18238,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18257
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18260: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18260,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18279
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18282: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18282,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18301
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18304: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18304,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18323
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18326: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18326,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18345
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18348: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18348,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18367
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18370: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18370,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18389
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18392: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18392,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18400
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18411
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18414: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18414,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18433
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18436: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18436,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18455
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18458: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18458,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18466
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18477
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18480: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18480,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18499
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18502: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18502,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18521
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18524: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18524,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18543
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18546: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18546,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18565
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18568: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18568,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18587
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18590: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18590,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18609
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18612: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18612,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1209))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:136 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18631
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1209))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18634: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18634,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:138 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18653
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18656: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18656,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:139 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18675
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18678: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18678,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:210 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18697
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18700: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18700,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:211 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18719
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18722: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18722,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:212 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18741
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18744: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18744,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:213 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18763
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18766: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18766,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:214 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18785
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18788: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18788,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:215 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18807
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18810: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18810,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18818
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:219 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18829
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18832: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18832,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18840
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:220 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18851
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18854: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18854,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:221 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18873
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18876: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18876,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18884
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:222 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18895
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18898: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18898,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:223 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18917
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18920: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18920,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:227 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18939
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18942: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18942,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:37:39)\n    at Monitor.scala:228 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18961
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18964: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18964,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:229 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18983
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:18986: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",18986,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:18994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:230 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19005
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19008: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19008,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19016
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:231 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19027
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19030: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19030,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:232 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19049
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19052: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19052,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:233 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19071
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19074: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19074,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:37:39)\n    at Monitor.scala:237 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19093
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19096: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19096,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:37:39)\n    at Monitor.scala:238 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19115
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19118: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19118,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:239 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19137
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19140: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19140,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:37:39)\n    at Monitor.scala:240 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19159
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19162: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19162,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:241 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19181
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19184: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19184,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:242 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19203
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19206: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19206,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:246 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19225
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19228: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19228,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19236
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:247 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19247
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19250: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19250,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:248 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19269
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19272: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19272,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19280
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:249 assert (bundle.param === 0.U, \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19291
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19294: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19294,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:250 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19313
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19316: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19316,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:254 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19335
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19338: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19338,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:255 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19357
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19360: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19360,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19368
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:256 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19379
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19382: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19382,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:257 assert (bundle.param === 0.U, \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19401
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19404: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19404,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19412
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:37:39)\n    at Monitor.scala:261 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19423
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19426: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19426,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:262 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19445
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19448: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19448,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19456
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:37:39)\n    at Monitor.scala:263 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19467
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19470: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19470,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:37:39)\n    at Monitor.scala:264 assert (bundle.param === 0.U, \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19489
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19492: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19492,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19500
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:37:39)\n    at Monitor.scala:265 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19511
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19514: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19514,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1751))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19533
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1751))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19536: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19536,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1755))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19555
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1755))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19558: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19558,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1759))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19577
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1759))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19580: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19580,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19599
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1763))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19602: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19602,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1767))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19621
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1767))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19624: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19624,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19632
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1800))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19643
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1800))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19646: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19646,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19654
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1804))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19665
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1804))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19668: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19668,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19676
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1808))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19687
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1808))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19690: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19690,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19698
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1812))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19709
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1812))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19712: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19712,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19720
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19731
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1816))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19734: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19734,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19742
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1820))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19753
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1820))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19756: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19756,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19764
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1857))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:381 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19775
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1857))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19778: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19778,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19786
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1869))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:384 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19797
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1869))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19800: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19800,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19808
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1901))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:403 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19819
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1901))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19822: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19822,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19830
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1905))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:404 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19841
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1905))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19844: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19844,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19852
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1909))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:405 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19863
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1909))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19866: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19866,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19874
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:406 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19885
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19888: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19888,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19896
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1917))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:37:39)\n    at Monitor.scala:407 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19907
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1917))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19910: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19910,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19918
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1722) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1931))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1970))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19929
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1722) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1931))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1970))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19932: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19932,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19940
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1950))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1984))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:37:39)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19951
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1950))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1984))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19954: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19954,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19962
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1991))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:37:39)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19973
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1991))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19976: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19976,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19984
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2004))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:37:39)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:19995
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2004))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:19998: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",19998,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:20006
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2020))) 
			  & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			      >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					      >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2044))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:37:39)\n    at Monitor.scala:496 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:20017
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2020))) 
			  & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			      >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					      >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2044))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:20020: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",20020,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:20028
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2055)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:37:39)\n    at Monitor.scala:502 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:20039
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2055)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:20042: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.buffer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",20042,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24977
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24988
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:24991: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",24991,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24999
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:37:80)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25010
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25013: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25013,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25021
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25032
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25035: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25035,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25043
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25054
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25057: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25057,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25065
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25076
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25079: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25079,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25087
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25098
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25101: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25101,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25109
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25120
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25123: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25123,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25131
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25142
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25145: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25145,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25153
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25164
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_223))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25167: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25167,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25175
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:37:80)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25186
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_237))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25189: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25189,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25197
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25208
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25211: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25211,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25219
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25230
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25233: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25233,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25241
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25252
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25255: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25255,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25263
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25274
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25277: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25277,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25285
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:37:80)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25296
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25299: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25299,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25307
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25318
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25321: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25321,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25329
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25340
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25343: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25343,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25351
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_420))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25362
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_420))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25365: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25365,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25373
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25384
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25387: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25387,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25395
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25406
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25409: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25409,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25417
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25428
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25431: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25431,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25439
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25450
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25453: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25453,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25461
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25472
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25475: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25475,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25483
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25494
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25497: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25497,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25505
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25516
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25519: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25519,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25527
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25538
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25541: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25541,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25549
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25560
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25563: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25563,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25571
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25582
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25585: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25585,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25593
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25604
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25607: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25607,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25615
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25626
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25629: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25629,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25637
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25648
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25651: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25651,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25659
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25670
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25673: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25673,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25681
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25692
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_596))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25695: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25695,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25703
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25714
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25717: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25717,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25725
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25736
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25739: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25739,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25747
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25758
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25761: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25761,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25769
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25780
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25783: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25783,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25791
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25802
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25805: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25805,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25813
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25824
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_660))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25827: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25827,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25835
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25846
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25849: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25849,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25857
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25868
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25871: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25871,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25879
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25890
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25893: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25893,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25901
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25912
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25915: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25915,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25923
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25934
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_816))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25937: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25937,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25945
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25956
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25959: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25959,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25967
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25978
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:25981: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",25981,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:25989
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:37:80)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26000
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26003: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26003,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26011
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26022
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
				[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26025: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26025,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26033
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:37:80)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26044
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x12U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26047: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26047,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26055
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26066
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26069: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26069,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26077
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26088
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26091: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26091,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26099
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26110
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26113: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26113,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26121
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26132
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26135: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26135,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26143
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:37:80)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26154
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26157: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26157,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26165
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26176
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26179: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26179,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26187
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26198
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26201: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26201,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26209
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26220
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26223: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26223,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26231
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26242
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26245: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26245,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26253
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26264
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26267: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26267,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26275
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26286
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26289: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26289,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26297
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26308
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26311: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26311,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26319
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26330
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26333: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26333,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26341
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26352
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26355: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26355,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26363
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26374
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26377: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26377,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26385
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26396
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26399: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26399,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26407
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26418
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26421: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26421,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26429
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26440
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26443: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26443,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26451
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26462
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26465: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26465,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26473
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26484
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26487: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26487,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26495
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26506
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26509: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26509,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26517
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26528
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_845))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26531: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26531,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26539
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26550
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26553: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26553,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26561
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26572
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26575: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26575,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26583
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1209))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:136 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26594
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1209))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26597: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26597,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26605
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:138 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26616
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((0U == (0x3fU & (0x80000000U 
						| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26619: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26619,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26627
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:139 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26638
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			 & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26641: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26641,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26649
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:210 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26660
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26663: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26663,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26671
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:211 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26682
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26685: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26685,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26693
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:212 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26704
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26707: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26707,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26715
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:213 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26726
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26729: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26729,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26737
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:214 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26748
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26751: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26751,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26759
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:215 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26770
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26773: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26773,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26781
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:219 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26792
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26795: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26795,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26803
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:220 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26814
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26817: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26817,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26825
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:221 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26836
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26839: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26839,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26847
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:222 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26858
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26861: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26861,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26869
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:223 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26880
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26883: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26883,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26891
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:227 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26902
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26905: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26905,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26913
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:37:80)\n    at Monitor.scala:228 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26924
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26927: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26927,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26935
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:229 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26946
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26949: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26949,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26957
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:230 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel Release smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26968
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26971: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26971,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26979
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:231 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:26990
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:26993: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",26993,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27001
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:232 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27012
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27015: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27015,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27023
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:233 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27034
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27037: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27037,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:37:80)\n    at Monitor.scala:237 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27056
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1549))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27059: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27059,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:37:80)\n    at Monitor.scala:238 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27078
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1563))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27081: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27081,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27089
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:239 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27100
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27103: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27103,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27111
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:37:80)\n    at Monitor.scala:240 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27122
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27125: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27125,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27133
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:241 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27144
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27147: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27147,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27155
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:242 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27166
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27169: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27169,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27177
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:246 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27188
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27191: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27191,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27199
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:247 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27210
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27213: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27213,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27221
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:248 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27232
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27235: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27235,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:249 assert (bundle.param === 0.U, \"'C' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27254
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27257: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27257,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:250 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27276
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27279: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27279,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:254 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27298
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27301: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27301,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:255 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27320
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27323: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27323,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:256 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27342
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27345: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27345,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:257 assert (bundle.param === 0.U, \"'C' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27364
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27367: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27367,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27375
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:37:80)\n    at Monitor.scala:261 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27386
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27389: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27389,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:262 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27408
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27411: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27411,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:37:80)\n    at Monitor.scala:263 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27430
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27433: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27433,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27441
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:37:80)\n    at Monitor.scala:264 assert (bundle.param === 0.U, \"'C' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27452
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27455: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27455,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:37:80)\n    at Monitor.scala:265 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27474
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27477: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27477,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1751))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27496
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1751))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27499: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27499,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1755))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27518
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1755))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27521: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27521,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1759))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27540
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1759))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27543: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27543,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1763))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27562
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1763))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27565: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27565,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27573
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1767))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27584
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1767))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27587: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27587,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27595
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1800))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27606
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1800))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27609: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27609,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27617
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1804))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27628
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1804))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27631: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27631,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27639
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1808))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27650
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1808))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27653: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27653,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27661
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1812))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27672
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1812))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27675: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27675,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27694
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1816))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27697: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27697,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1820))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27716
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1820))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27719: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27719,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1857))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:381 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27738
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1857))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27741: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27741,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1869))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:384 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27760
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1869))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27763: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27763,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1901))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:403 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27782
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1901))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27785: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27785,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27793
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1905))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:404 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27804
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1905))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27807: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27807,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1909))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:405 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27826
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1909))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27829: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27829,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1913))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:406 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27848
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1913))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27851: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27851,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1917))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:37:80)\n    at Monitor.scala:407 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27870
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1917))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27873: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27873,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1722) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1931))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1970))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27892
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1722) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1931))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1970))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27895: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27895,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1950))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1984))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:37:80)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27914
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1950))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 0x12U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1984))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27917: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27917,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1991))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:37:80)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27936
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1991))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27939: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27939,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2004))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:37:80)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27958
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2004))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27961: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27961,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020))) 
			  & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			      >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					      >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2044))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:37:80)\n    at Monitor.scala:496 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27980
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020))) 
			  & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			      >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					      >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2044))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:27983: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",27983,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:27991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2055)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:37:80)\n    at Monitor.scala:502 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:28002
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)) 
			       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2055)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:28005: Assertion failed in %NTestHarness.top.sbus.coupler_from_tile_named_tile.fixer.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",28005,"");
	}
    }
}
