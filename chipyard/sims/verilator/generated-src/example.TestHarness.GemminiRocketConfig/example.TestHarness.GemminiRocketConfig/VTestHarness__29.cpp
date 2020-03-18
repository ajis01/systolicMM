// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1444(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1444\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137417
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137527
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137538
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137541: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137541,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137549
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:126:93)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137560
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137563: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137563,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137571
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137582
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137585: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137585,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137593
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:126:93)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137604
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137607: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137607,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137615
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137626
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137629: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137629,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137637
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:126:93)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137648
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137651: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137651,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137659
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137670
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137673: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137673,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137681
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137692
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137695: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137695,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137703
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137714
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137717: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137717,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137725
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:126:93)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137736
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137739: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137739,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137747
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137758
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137761: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137761,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137769
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:126:93)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137780
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137783: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137783,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137791
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137802
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137805: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137805,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137813
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:126:93)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137824
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137827: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137827,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137835
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:126:93)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137846
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137849: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137849,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137857
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137868
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137871: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137871,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137879
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137890
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137893: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137893,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137901
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137912
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137915: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137915,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137923
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137934
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137937: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137937,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137945
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137956
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137959: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137959,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137967
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137978
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:137981: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",137981,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137989
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138000
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138003: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138003,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138011
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138022
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138025: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138025,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138033
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138044
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138047: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138047,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138055
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138066
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138069: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138069,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138077
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138088
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138091: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138091,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138099
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138110
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138113: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138113,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138121
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138132
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138135: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138135,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138143
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138154
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138157: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138157,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138165
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138176
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138179: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138179,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138187
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138198
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138201: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138201,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138209
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138220
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138223: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138223,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138231
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138242
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_409))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138245: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138245,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138253
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138264
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138267: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138267,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138275
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138286
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138289: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138289,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138297
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138308
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138311: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138311,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138319
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:126:93)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138330
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138333: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138333,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138341
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138352
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138355: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138355,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138363
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138374
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138377: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138377,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138385
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138396
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138399: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138399,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138407
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138418
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138421: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138421,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138429
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:126:93)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138440
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138443: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138443,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138451
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138462
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138465: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138465,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138473
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:126:93)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138484
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138487: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138487,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138495
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138506
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138509: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138509,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138517
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:126:93)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138528
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138531: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138531,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138539
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:126:93)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138550
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138553: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138553,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138561
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138572
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138575: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138575,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138583
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:126:93)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138594
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			 & (~ ((6U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
				[0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138597: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138597,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138605
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138616
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138619: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138619,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138627
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:126:93)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138638
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138641: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138641,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138649
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138660
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138663: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138663,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138671
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138682
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138685: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138685,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138693
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138704
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (6U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138707: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138707,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138715
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138726
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138729: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138729,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138737
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Configs.scala:126:93)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138748
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138751: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138751,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138759
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:126:93)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138770
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138773: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138773,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138781
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:126:93)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138792
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138795: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138795,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138803
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:126:93)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138814
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138817: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138817,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138825
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138836
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138839: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138839,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138847
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:292 assert (deny_put_ok || !bundle.denied, \"'D' channel Grant is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138858
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (4U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138861: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138861,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138869
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138880
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138883: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138883,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138891
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Configs.scala:126:93)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138902
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138905: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138905,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138913
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:126:93)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138924
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138927: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138927,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138935
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:126:93)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138946
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138949: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138949,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138957
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:126:93)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138968
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138971: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138971,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138979
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:138990
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:138993: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",138993,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139001
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:302 assert (deny_get_ok || !bundle.denied, \"'D' channel GrantData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139012
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (5U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139015: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139015,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139023
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139034
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139037: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139037,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139056
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139059: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139059,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139078
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139081: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139081,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139089
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:310 assert (deny_put_ok || !bundle.denied, \"'D' channel AccessAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139100
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139103: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139103,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139111
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139122
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139125: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139125,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139133
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139144
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139147: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139147,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139155
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139166
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139169: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139169,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139177
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:318 assert (deny_get_ok || !bundle.denied, \"'D' channel AccessAckData is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139188
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (1U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139191: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139191,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139199
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139210
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139213: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139213,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139221
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:126:93)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139232
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139235: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139235,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:126:93)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139254
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139257: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139257,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at Configs.scala:126:93)\n    at Monitor.scala:326 assert (deny_put_ok || !bundle.denied, \"'D' channel HintAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139276
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (2U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
					   [0U]) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139279: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139279,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139298
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139301: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139301,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139320
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139323: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139323,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_701))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139342
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_701))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139345: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139345,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139364
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139367: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139367,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139375
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139386
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_709))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139389: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139389,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139408
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139411: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139411,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_746))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139430
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_746))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139433: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139433,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139441
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_750))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139452
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_750))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139455: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139455,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_754))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139474
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_754))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139477: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139477,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_758))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139496
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_758))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139499: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139499,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_762))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:126:93)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139518
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_762))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139521: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139521,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_815))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:126:93)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139540
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_815))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139543: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139543,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795))) 
			  & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_829))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:126:93)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139562
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795))) 
			  & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_829))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139565: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139565,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139573
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_836))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at Configs.scala:126:93)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139584
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_836))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139587: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139587,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139595
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_849))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:126:93)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:139606
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_849))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:139609: Assertion failed in %NTestHarness.top.cbus.coupler_to_l2_ctrl.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",139609,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1445(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1445\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118214
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118315
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118326
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118329: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118329,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118337
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Plic.scala:352:63)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118348
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118351: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118351,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118359
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118370
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118373: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118373,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118381
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Plic.scala:352:63)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118392
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118395: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118395,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118403
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118414
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118417: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118417,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118425
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Plic.scala:352:63)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118436
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118439: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118439,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118447
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118458
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118461: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118461,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118469
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Plic.scala:352:63)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118480
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118483: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118483,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118491
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118502
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118505: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118505,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118513
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Plic.scala:352:63)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118524
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118527: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118527,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118535
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118546
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118549: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118549,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118557
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Plic.scala:352:63)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118568
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118571: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118571,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118579
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118590
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118593: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118593,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118601
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Plic.scala:352:63)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118612
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118615: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118615,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118623
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Plic.scala:352:63)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118634
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118637: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118637,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118645
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118656
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118659: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118659,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118667
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Plic.scala:352:63)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118678
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118681: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118681,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118689
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118700
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118703: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118703,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118711
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118722
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118725: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118725,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118733
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118744
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118747: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118747,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118755
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Plic.scala:352:63)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118766
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118769: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118769,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118777
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118788
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118791: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118791,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118799
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Plic.scala:352:63)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118810
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118813: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118813,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118821
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118832
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118835: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118835,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118843
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118854
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118857: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118857,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118865
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118876
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118879: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118879,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118887
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Plic.scala:352:63)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118898
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118901: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118901,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118909
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118920
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118923: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118923,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118931
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118942
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118945: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118945,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118953
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118964
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118967: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118967,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118975
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118986
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:118989: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",118989,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118997
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Plic.scala:352:63)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119008
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119011: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119011,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119019
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_409))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119030
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_409))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119033: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119033,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119041
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119052
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119055: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119055,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119063
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119074
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119077: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119077,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119085
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119096
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119099: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119099,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119107
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Plic.scala:352:63)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119118
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119121: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119121,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119129
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119140
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119143: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119143,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119151
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119162
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119165: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119165,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119173
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119184
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119187: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119187,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119195
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119206
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119209: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119209,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119217
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Plic.scala:352:63)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119228
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119231: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119231,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119239
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119250
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119253: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119253,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119261
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Plic.scala:352:63)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119272
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119275: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119275,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119283
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119294
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119297: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119297,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119305
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Plic.scala:352:63)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119316
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119319: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119319,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119327
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Plic.scala:352:63)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119338
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119341: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119341,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119349
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Plic.scala:352:63)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119360
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119363: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119363,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119569
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119580
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119583: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119583,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119591
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			  [0U]) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119602
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			  [0U]) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_522))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119605: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119605,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119635
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119646
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119649: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119649,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119657
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119668
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119671: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119671,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119679
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_701))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119690
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_701))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119693: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119693,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119701
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119712
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119715: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119715,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119723
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119734
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_709))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119737: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119737,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119745
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119756
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119759: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119759,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119767
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_750))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119778
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_750))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119781: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119781,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119789
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_754))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Plic.scala:352:63)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119800
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_754))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119803: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119803,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119811
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_815))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Plic.scala:352:63)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119822
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_815))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119825: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119825,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119833
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_829))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Plic.scala:352:63)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119844
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_829))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119847: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119847,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119855
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_836))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Plic.scala:352:63)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119866
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_836))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119869: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119869,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119877
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_849))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Plic.scala:352:63)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:119888
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_849))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:119891: Assertion failed in %NTestHarness.top.cbus.coupler_to_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",119891,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1446(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1446\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93551
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93661
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93672
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93675: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93675,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93694
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93697: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93697,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93716
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93719: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93719,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93738
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93741: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93741,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93760
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93763: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93763,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93782
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93785: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93785,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93793
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93804
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93807: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93807,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93826
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93829: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93829,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93848
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93851: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93851,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93870
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_253))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93873: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93873,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93892
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93895: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93895,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93914
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93917: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93917,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93936
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93939: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93939,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93958
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93961: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93961,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93980
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:93983: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",93983,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94002
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94005: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94005,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94024
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94027: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94027,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94035
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_444))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94046
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_444))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94049: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94049,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94068
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94071: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94071,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94090
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94093: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94093,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94101
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94112
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94115: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94115,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94123
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94134
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94137: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94137,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94156
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94159: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94159,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94167
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_520))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94178
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_520))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94181: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94181,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94200
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94203: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94203,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94211
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94222
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94225: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94225,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94244
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94247: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94247,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94266
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94269: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94269,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_520))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94288
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_520))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94291: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94291,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94310
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94313: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94313,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94332
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94335: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94335,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94354
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94357: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94357,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_608))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94376
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_608))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94379: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94379,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94387
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_661))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94398
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_661))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94401: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94401,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94420
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94423: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94423,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94442
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94445: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94445,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94464
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94467: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94467,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94486
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94489: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94489,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94497
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_661))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94508
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_661))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94511: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94511,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94519
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94530
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94533: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94533,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94541
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94552
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94555: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94555,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94563
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94574
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94577: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94577,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94585
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94596
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94599: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94599,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94607
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_400) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94618
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_400) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94621: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94621,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94629
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94640
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94643: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94643,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94651
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94662
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94665: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94665,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94673
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94684
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94687: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94687,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94695
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94706
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94709: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94709,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94717
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94728
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			 & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xfU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94731: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94731,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94739
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94750
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94753: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94753,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94761
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94772
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94775: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94775,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94783
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94794
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94797: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94797,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94805
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94816
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94819: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94819,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94827
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94838
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
				   >> 1U)) | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94841: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94841,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94849
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94860
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94863: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94863,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94871
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94882
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94885: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94885,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94893
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94904
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94907: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94907,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94915
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94926
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94929: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94929,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94937
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94948
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94951: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94951,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94959
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94970
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94973: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94973,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94981
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:94992
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:94995: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",94995,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95003
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95014
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95017: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95017,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95025
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95036
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95039: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95039,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95047
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95058
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95061: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95061,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95069
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95080
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95083: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95083,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95091
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_912))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95102
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_912))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95105: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95105,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95113
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95124
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95127: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95127,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95135
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95146
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95149: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95149,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95157
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95168
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95171: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95171,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95179
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95190
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95193: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95193,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95201
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95212
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95215: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95215,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95223
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_912))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95234
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_912))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95237: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95237,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95245
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95256
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_844))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95259: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95259,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95267
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95278
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95281: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95281,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95289
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95300
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95303: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95303,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95311
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1015))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95322
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1015))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95325: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95325,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95333
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1019))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95344
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1019))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95347: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95347,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95355
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95366
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95369: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95369,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95377
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1027))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95388
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1027))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95391: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95391,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95399
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1031))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95410
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1031))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95413: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95413,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95421
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95432
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1064))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95435: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95435,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95443
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95454
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95457: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95457,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95465
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95476
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95479: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95479,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95487
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95498
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95501: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95501,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95509
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1080))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95520
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1080))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95523: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95523,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95531
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1084))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95542
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1084))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95545: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95545,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95553
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1098))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95564
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1098))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95567: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95567,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95575
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1117))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95586
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1117))) 
			  & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
					  >> 0xfU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95589: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95589,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95597
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:42:7)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:95608
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1164))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:95611: Assertion failed in %NTestHarness.top.cbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",95611,"");
	}
    }
}
