// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5094(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5094\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->reset)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5097(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5097\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate_out 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate__DOT__en_latched) 
	   & (IData)(vlTOPp->clock));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_834 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_834 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_834 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1164 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1156 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_834 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_842 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_834 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_836 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_760) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_828 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5098(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5098\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_688 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_680 
	       < vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_682 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_674 
	       < vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_688 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_680 
	       < vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_688 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_680 
	       < vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1164 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1156 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1124 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1041)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1116 
		     < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1065 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_982)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1057 
		     < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5099(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5099\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/EICG_wrapper.v:11
    if ((1U & (~ (IData)(vlTOPp->clock)))) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__debug_clock_gate__DOT__en_latched 
	    = vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__clock_en;
    }
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1179 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1096) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1179 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1096) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1171 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_849 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_841 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_695 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1179 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1096) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1171 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_695 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1230 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1147) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1222 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5100(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5100\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_855 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_772) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_847 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_849 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_841 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_855 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_772) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_847 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1171 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1163 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1171 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1163 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_858 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_775) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_850 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_858 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_775) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_850 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1171 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1163 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_855 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_772) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_847 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5102(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5102\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_695 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_849 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_766) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_841 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1179 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1096) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171 
	       < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_855 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_772) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_847 
	       < vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_695 
	= ((((0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_612) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_687 
	       < vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1171 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1163 
	       < vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1145 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1062)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1137 
	       < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1145 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1062)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1137 
	       < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2004 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1921)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2004 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1921)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1996 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2004 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1921)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1996 
	       < vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1258 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1175)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1250 
	       < vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1722 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1639) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1714 
	       < vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1773 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1690) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1765 
	       < vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5104(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5104\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1647,607,0,19);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1722 
	= ((((VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1639) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1714 
	       < vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1258 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1175)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1250 
	       < vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2004 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1921)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996 
	       < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1953 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870)) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1945 
	       < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_38 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__idle) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_543 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_551 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1647, vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_612, 
		  vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_source
		  [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_661 
	= (1U & ((~ __Vtemp1647[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_539 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_opcode
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_547 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
			 [0U] & (~ (0x3fU & ((IData)(7U) 
					     << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
					     [0U])))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
	    [0U] == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_592 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_579)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_746 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_param
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_733)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_604 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_sink
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_582)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_758 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_sink
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_736)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
		   [0U]) | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
		  [0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_608 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_590 
	= (1U & (((~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
		   [0U]) | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
		  [0U]) | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5106(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5106\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_762 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_denied
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_737)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_596 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_size
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_531 
	= (((((((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
			      [0U] >> 4U))) | (0U == 
					       (3U 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
						   [0U] 
						   >> 4U)))) 
	       | (0x20U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
		  [0U])) | (0x21U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
			    [0U])) | (0x22U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
				      [0U])) | (0x24U 
						== 
						vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
						[0U])) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_763 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_588 
	= ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_596 
	= (((3U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
	     [0U]) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_600 
	= (((0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
		       [0U] >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5107(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5107\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_624 
	= (1U & (((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 0x21U))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_752 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_739)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_746 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_733)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_752 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_739)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_764 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_758 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_736)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_764 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_590 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_762 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_737)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_759 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_528 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5108(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5108\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_528 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_760 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_754 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_760 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_974 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_974 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5109(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5109\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_974 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_974 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_952)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_962 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_949)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_962 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_949)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_962 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_949)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_962 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_949)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_970 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_951)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_953)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_953)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_953)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_806 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5110(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5110\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_978 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_953)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1042 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1029)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1042 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1029)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1063)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1054 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1032)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1054 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1032)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1066)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_886 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1033)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_886 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1033)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_920 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1092 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1067)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
		   >> 4U) | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
				>> 4U))) | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5111(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5111\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1050 
	= (((0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1031)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1050 
	= (((0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1031)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1084 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1065)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_3 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_time) 
	    < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_709 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_709 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_709 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5112(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5112\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5113(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5113\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_701 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_701 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_703 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_691)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_703 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_691)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_756 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_740)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_750 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_734)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_756 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_740)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1753 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1740)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1021 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1008)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1804 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1791)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1765 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1993 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1960) 
				>> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1011)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1816 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1794)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2044 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2011) 
				>> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_894 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1769 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_865 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1037 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1012)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_913 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1820 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1795)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_826 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_845 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1761 
	= (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1812 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1793)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1124 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1041)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1116 
		     < vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1065 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_982)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1057 
		     < vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1065 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_982)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1057 
		     < vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1065 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_982)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1057 
		     < vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1065 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_982)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057 
		     < vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_950)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_950)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_950)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_950)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_958 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_948)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_958 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_948)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_958 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_948)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_958 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_948)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_752 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_739)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_752 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_739)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_764 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_742)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_764 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_768 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_768 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_528 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_528 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_760 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_760 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_755 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_767 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_745)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_599 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_746)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_531 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_763 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1757 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1025 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1009)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1808 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1792)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5120(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5120\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1028)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1028)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1072 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1062)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_711 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_821 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_772 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5121(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5121\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_711 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_821 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_772 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1127 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1114)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1055)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1055)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1055)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1068 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1055)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1139 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1117)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1058)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1058)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1058)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1058)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_912 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1084 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1059)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5122(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5122\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1131 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1115)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1072 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1056)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1072 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1056)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1072 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1056)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_903 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_844 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_844 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_844 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_844 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1135 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1116)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1057)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1057)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1057)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT___T_29 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s2_req_fire)) 
		  | (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
			     << 5U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
					<< 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
						   << 3U) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
						      << 2U) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
							 << 1U) 
							| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st)))))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1749 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1739)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1007)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1800 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1790)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_972 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_960)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_913 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_901)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_980 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_962)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1090 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1041) 
		     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_921 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_903)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1031 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_982) 
		     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_968 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_959)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_909 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_900)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_976 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_961)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_917 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_902)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1021 
	= (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1000) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1021 
	= (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1000) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1009 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_997)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1009 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_997)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1005 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_996)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1005 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_996)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1017 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_999)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1224 
	= (1U & ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1175) 
			       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1017 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_999)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5126(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5126\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1224 
	= (1U & ((~ (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1175) 
			       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1171 
	= (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1150) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1171 
	= (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1150) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_715 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_694) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_715 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_694) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_59 
	= (1U & (((~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_releaseack)) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_rprobeacklast)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_pprobeacklast)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantfirst)))) 
		  | (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid)) 
			| ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_releaseack)) 
			     | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_rprobeacklast))) 
			    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_pprobeacklast))) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantfirst)))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_165 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid)) 
		  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_25 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
		     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
			- (IData)(1U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1159 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1147)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1159 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1147)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1149)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1149)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1155 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1146)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1155 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1146)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_703 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_691)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1019 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1007)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1019 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1007)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_706 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_694)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_703 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_691)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_697 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_685)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_691 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_679)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5134(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5134\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_256 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_256 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_711 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_821 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_772 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1009)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1137 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1088 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1009)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1137 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1088 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_714 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_696)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_824 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_775 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_711 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_821 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_772 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_705 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_687)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_815 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_766 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_699 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_681)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_809 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_760 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_715 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_694) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1031 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1010) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1031 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1010) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_718 
	= (((0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_697)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_709 
	= (((0xfffffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_709 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_709 
	= (((0xfffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_688)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_715 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_694) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_709 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_688) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_703 
	= (((0x1ffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_682) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_756 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_740)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_756 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_740)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_748 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_738)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_748 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_738)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_759 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_751 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_588 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_742 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_742 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_588 
	= ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_699 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_690)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1015 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1015 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_702 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_699 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_690)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_693 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_684)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_687 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_678)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5141(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5141\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_707 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_692)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_253 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_263 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_661 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & ((0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	       | (0U == (0xfffff000U & (0x54000000U 
					^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_253 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_263 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_661 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & ((0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	       | (0U == (0xfffff000U & (0x54000000U 
					^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_331 
	= (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0x3000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0x3000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_710 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_695)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0xc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0x3ff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5144(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5144\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= ((1U & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5145(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5145\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_707 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_692)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0x3fff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_686)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5146(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5146\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	    & (0U == (0x10000U & (0x10000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_695 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_680)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_20 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT___T_6)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_702 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_706 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_694)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_220 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_714 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_696)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_824 
	= (1U & ((~ (IData)((VL_ULL(0x1fffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_775 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_710 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_695)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_331 
	= (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_718 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_697)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_984 
	= (((0xffffffc0U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr) 
	    == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_963) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_137 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_137 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_137 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_134 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1414 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1862 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1844)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1895)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_707 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_692)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_217 
	= (((0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_227 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_331 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_424 
	= (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_707 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_692)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_699 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_690)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_699 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_690)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_742 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_742 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_128 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_742 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_588 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_588 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_742 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1046 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1030)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1046 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1030)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1080 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1064)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_751 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_741)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1802 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1793)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1853 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1844)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1806 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1794)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1857 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1845)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1810 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1795)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1861 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1846)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1212 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data)) 
	     | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data))
		 ? 2U : 0U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1172 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1814 
	= (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1796)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1206 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1865 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1847)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1064 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_114 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ 
								    (0x80000000U 
								     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_128 
	= ((0U == (0x3fU & ((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data) 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1013 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_998)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_114 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ 
								    (0x80000000U 
								     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_128 
	= ((0U == (0x3fU & ((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data) 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1013 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_998)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_824 
	= ((0U == (0x3fU & ((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data) 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_865 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ 
								    (0x80000000U 
								     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1163 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1148)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_824 
	= ((0U == (0x3fU & ((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data) 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_865 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ 
								    (0x80000000U 
								     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1163 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1148)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1001 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_alloc_xactid) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_983)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1111 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1062) 
				>> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_alloc_xactid)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1651,95,0,3);
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp1651, (VL_ULL(0x80000000) 
				      ^ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__flushInAddress));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_405 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_1)) 
		  | (0U == (((0xf0000000U & __Vtemp1651[0U]) 
			     | __Vtemp1651[1U]) | (1U 
						   & __Vtemp1651[2U])))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1755 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1755 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1755 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1751 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1751 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1751 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1742)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_240 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_240 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_240 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1763 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1745)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1970 
	= (1U & ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1921) 
			   >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1763 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1745)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1970 
	= (1U & ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1921) 
			   >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1763 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1745)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1970 
	= (1U & ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1921) 
			   >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_237 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1759 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_237 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1759 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_237 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1759 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1744)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_223 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_247 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_660 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5157(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5157\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1767 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1746) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_223 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_247 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_660 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1767 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1746) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_223 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_247 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_660 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1767 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1746) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1015)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1015)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1027 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1015)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_246 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
		   >> 4U) | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
				>> 4U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_246 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
		   >> 4U) | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
				>> 4U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_246 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
		   >> 4U) | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
				>> 4U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1017)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1145 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1096 
		     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5160(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5160\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1017)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1145 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
		     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1017)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1145 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1096 
		     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1031 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1016)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1031 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1016)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1031 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1016)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_240 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_655 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}
