// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3592(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3592\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_source 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		     ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_source
		    [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			     << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					 >> 0x11U))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		  ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_param
		 [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			  << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				    >> 0x1bU))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		  ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_opcode
		 [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			  << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				    >> 0x1eU))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	    ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_address
	   [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
		    << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				>> 0x11U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_411 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_request 
	   | (0xfffffeU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_request 
			   << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_aw_bits_user 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_user) 
	    << 1U) | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id) 
			    >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_ar_bits_user 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_user) 
	    << 1U) | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id) 
			    >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_12 
	= (1U & ((0xcU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_1))
		  : ((0xbU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_1))
		      : ((0xaU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_1))
			  : ((9U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_1))
			      : ((8U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_1))
				  : ((7U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_1))
				      : ((6U == (0xfU 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_1))
					  : ((5U == 
					      (0xfU 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_1))
					      : ((4U 
						  == 
						  (0xfU 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_1))
						  : 
						 ((3U 
						   == 
						   (0xfU 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_5))
						   : 
						  ((2U 
						    == 
						    (0xfU 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_5))
						    : 
						   ((1U 
						     == 
						     (0xfU 
						      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						     ? 
						    (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_5))
						     : 
						    (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_5)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3593(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3593\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_60 
	= (1U & ((0xcU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT___T_1))
		  : ((0xbU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT___T_1))
		      : ((0xaU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT___T_1))
			  : ((9U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT___T_1))
			      : ((8U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT___T_1))
				  : ((7U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT___T_1))
				      : ((6U == (0xfU 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT___T_1))
					  : ((5U == 
					      (0xfU 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT___T_1))
					      : ((4U 
						  == 
						  (0xfU 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT___T_1))
						  : 
						 ((3U 
						   == 
						   (0xfU 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_5))
						   : 
						  ((2U 
						    == 
						    (0xfU 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						    ? 
						   (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_5))
						    : 
						   ((1U 
						     == 
						     (0xfU 
						      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
						     ? 
						    (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_5))
						     : 
						    (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_5)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3594(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3594\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3595(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3595\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1127 
	= (1U & (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data))
		   ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5))
		   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_250)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_c_ready 
	= (1U & ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_250)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_178 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_11)
		   ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5))
		   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_251)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_976 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_11)
		   ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5))
		   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_251)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_a_ready 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_11)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_251)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_148 
	= (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_176 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_204 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_232 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 3U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_260 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 4U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3596(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3596\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_288 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_316 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 6U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_344 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_372 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 8U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_400 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_428 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_456 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_484 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_512 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_540 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_568 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3597(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3597\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_596 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_624 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_652 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_680 
	= ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_21)) 
	    >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_130 
	= ((0x82U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x400000003000000)
	    : ((0x81U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x636f7301000000)
	        : ((0x80U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x200000002000000)
		    : ((0x7fU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x7801000004000000)
		        : ((0x7eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x300000000000010)
			    : ((0x7dU == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x800f010000)
			        : ((0x7cU == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x800000003000000)
				    : ((0x7bU == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0x79726f6d656d)
				        : ((0x7aU == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x8700000007000000)
					    : ((0x79U 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0x300000000303030)
					        : (
						   (0x78U 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x3030303038407972)
						    : 
						   ((0x77U 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x6f6d656d01000000)
						     : 
						    ((0x76U 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0x200000002000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_117)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3598(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3598\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_7_0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[2U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[1U] 
				   >> 0x18U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_347_0 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
		     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[2U]
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_8_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_356_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_355_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_366_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_365_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_377_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_376_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_389_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_388_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_402_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_401_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_416_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_415_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_431_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_430_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_7_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_7_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_226_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_8_0)
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_8_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_235_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_234_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_245_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_244_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_256_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_255_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_268_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_267_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_281_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_280_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_295_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_294_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_310_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_309_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3599(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3599\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_R0_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_R0_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_R0_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_R0_data[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_R0_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_R0_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_R0_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_R0_data[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_R0_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_R0_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_R0_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_R0_data[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_R0_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_R0_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_R0_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_R0_data[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1082_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1081_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
							 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[3U])) 
					 << 0x2aU) 
					| (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U])) 
					    << 0xaU) 
					   | (VL_ULL(0x3fffffffffe) 
					      & ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U])) 
						 >> 0x16U))))) 
	   | (QData)((IData)(((0U != (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U] 
					     << 0xcU) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U] 
					       >> 0x14U)))) 
			      | (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_492))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_271 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
		| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
		     & VL_GTES_III(1,2,2, 0U, (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp) 
						>> 0xbU)))) 
		    & ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
				      >> 0x37U))) ? (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
							     >> 1U))
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154))) 
		   & (~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_29) 
			    & (~ ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
						 >> 0x37U)))
				   ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
					      >> 2U))
				   : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
					      >> 1U))))) 
			   & ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					     >> 0x37U)))
			       ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
					  >> 0x36U))
			       : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
					  >> 0x35U)))) 
			  & (VL_ULL(0) != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
			 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
			     & ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					       >> 0x37U)))
				 ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					    >> 2U))
				 : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					    >> 1U)))) 
			    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			       & (((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					    >> 0x37U)) 
				   & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
					      >> 2U))) 
				  | (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig))))))))))) 
	    << 1U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
			 & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
			    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3600(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3600\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1216,95,0,3);
    VL_SIGW(__Vtemp1218,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isInf) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_247_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_246_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_231_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_230_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_215_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_214_0;
    VL_EXTEND_WQ(65,33, __Vtemp1216, (((QData)((IData)(
						       ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
							& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sign_Z)))) 
				       << 0x20U) | (QData)((IData)(
								   ((0xff800000U 
								     & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
										& (~ 
										(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
										| VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
										 ? 0x1c0U
										 : 0U))) 
									       & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
										 ? 0x194U
										 : 0U))) 
									      & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
										 ? 0x80U
										 : 0U))) 
									     & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
										 ? 0x40U
										 : 0U))) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									        ? 0x6bU
									        : 0U)) 
									   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									       ? 0x17fU
									       : 0U)) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									      ? 0x180U
									      : 0U)) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x1c0U
									     : 0U)) 
									<< 0x17U)) 
								    | (0x7fffffU 
								       & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
									     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
									    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
									    ? 
									   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x400000U
									     : 0U)
									    : 
									   ((0x4000000U 
									     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw_io_rawOut_sig)
									     ? 
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
									     >> 1U)
									     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									      ? 0x7fffffU
									      : 0U))))))));
    VL_EXTEND_WQ(65,33, __Vtemp1218, (((QData)((IData)(
						       ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
							& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sign)))) 
				       << 0x20U) | (QData)((IData)(
								   ((0xff800000U 
								     & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
										& (~ 
										(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_isZero) 
										| VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
										 ? 0x1c0U
										 : 0U))) 
									       & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
										 ? 0x194U
										 : 0U))) 
									      & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
										 ? 0x80U
										 : 0U))) 
									     & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
										 ? 0x40U
										 : 0U))) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									        ? 0x6bU
									        : 0U)) 
									   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									       ? 0x17fU
									       : 0U)) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									      ? 0x180U
									      : 0U)) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x1c0U
									     : 0U)) 
									<< 0x17U)) 
								    | (0x7fffffU 
								       & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
									     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_isZero)) 
									    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
									    ? 
									   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x400000U
									     : 0U)
									    : 
									   ((0x4000000U 
									     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_23_sig)
									     ? 
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
									     >> 1U)
									     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									      ? 0x7fffffU
									      : 0U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
	        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
					    >> 0x1dU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U]
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U])
	        : __Vtemp1216[0U]) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
				       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT___T_12_data[0U]
				       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					   ? __Vtemp1218[0U]
					   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[0U]
					       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
	        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
					    >> 0x1dU))))
		    ? (0xefefffffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U])
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U])
	        : __Vtemp1216[1U]) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
				       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT___T_12_data[1U]
				       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					   ? __Vtemp1218[1U]
					   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[1U]
					       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[1U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
	        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
					    >> 0x1dU))))
		    ? (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U])
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U])
	        : __Vtemp1216[2U]) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
				       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT___T_12_data[2U]
				       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					   ? __Vtemp1218[2U]
					   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[2U]
					       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[2U]))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3601(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3601\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_199_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_198_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_183_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_182_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1542_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_789 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_786;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1558_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_837 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_834;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1574_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_885 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_882;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1590_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_933 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_930;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1606_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_981 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_978;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1622_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1029 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1026;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1638_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1077 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1074;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1654_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1125 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1122;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1670_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1173 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1170;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1686_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1221 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1218;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1702_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1269 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1266;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1718_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1317 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1314;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1734_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1365 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1362;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1750_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1413 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1410;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1766_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1461 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1458;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1782_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1509 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1506;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3602(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3602\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1043) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1125))) 
	    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
			    >> 0x12U)))) ? ((IData)(1U) 
					    << (0x1fU 
						& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
						   >> 6U)))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1043) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1125))) 
	    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
			    >> 0x12U)))) ? ((IData)(1U) 
					    << (0x1fU 
						& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
						   >> 6U)))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1043) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1125))) 
	    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
			    >> 0x12U)))) ? ((IData)(1U) 
					    << (0x1fU 
						& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
						   >> 6U)))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_28 
	= (0xfU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1771) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1950))) 
		    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				    >> 0x12U)))) ? 
		   ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 6U))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___GEN_28 
	= (0xfU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1950))) 
		    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				    >> 0x12U)))) ? 
		   ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 6U))) : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3603(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3603\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___GEN_28 
	= (0xfU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1950))) 
		    & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
				    >> 0x12U)))) ? 
		   ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					  >> 6U))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1771) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2020))) 
		       & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			   >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					   >> 0x13U))))
		       ? ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
						  >> 2U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2020))) 
		       & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			   >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					   >> 0x13U))))
		       ? ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
						  >> 2U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1771) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020))) 
		       & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
			   >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
					   >> 0x13U))))
		       ? ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
						  >> 2U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___GEN_14)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3604(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3604\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1592 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1540) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1548)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_28 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1540) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1719))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1540) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1789))) 
		       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
					>> 1U)))) ? 
		      ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1541 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1497)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_28 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1668))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1738))) 
		       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
					>> 1U)))) ? 
		      ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[2U])) 
		    << 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[1U])) 
				  << 0x1fU) | ((QData)((IData)(
							       vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U])) 
					       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[2U])) 
		     << 0x3fU) | (((QData)((IData)(
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[1U])) 
				   << 0x1fU) | ((QData)((IData)(
								vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U])) 
						>> 1U))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[2U] 
	= (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
				      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_data[3U]
				      : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					  << 0x1fU) 
					 | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[3U] 
					    >> 1U))))) 
		    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
						  ? 
						 vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_data[2U]
						  : 
						 ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[3U] 
						   << 0x1fU) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[2U] 
						     >> 1U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[3U] 
	= (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
				       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_data[3U]
				       : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
					   << 0x1fU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[3U] 
					     >> 1U))))) 
		     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
						   ? 
						  vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_data[2U]
						   : 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[2U] 
						      >> 1U)))))) 
		   >> 0x20U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3605(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3605\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_param 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_param)
		  : (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
		     >> 0x10U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_sink 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_sink)
		    : (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
		       >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_corrupt)
		  : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U]));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1098 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_988) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1070))) 
	   & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
			   >> 0x12U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_denied 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_denied)
		  : (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
		     >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_size 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_size)
		    : (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
		       >> 0xcU)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__saved_opcode)
		  : (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
		     >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1146 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1094) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1102)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1094) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1176))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_915 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_945)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3606(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3606\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1035 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_945));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1025 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1025 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_28 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool_io_alloc_ready) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__bitmap) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool_io_alloc_ready) 
		 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__select))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_294 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_292)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_8 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161) 
	    & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_292))
	        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_302))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_351_1))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_8 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161) 
	    & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_292))
	        ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_302) 
		      >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_351_2))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_127 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_365));
    vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161) 
	   & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_292)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_351_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3607(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3607\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1222 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1221));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_167_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_166_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_5;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_159_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_505_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1783_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_504_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1510)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1511)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_503_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_503_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_503_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_151_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_150_0;
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data___05FT_55_addr 
	= (((0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
				      >> 0x20U)))) 
	    << 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_47));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask___05FT_55_addr 
	= (((0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
				      >> 0x20U)))) 
	    << 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_47));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt___05FT_55_addr 
	= (((0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
				      >> 0x20U)))) 
	    << 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_47));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_135_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_134_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_119_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_118_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3608(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3608\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_103_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_102_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_87_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_86_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_71_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_70_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_14[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_14[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_14[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_14[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_14[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_14[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_14[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_14[3U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[3U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_55_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_54_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_39_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_38_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_23_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_22_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_7_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_6_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_io_req_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_io_req_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q_io_enq_ready 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_io_req_ready) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_2) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_141 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_75) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_73) 
		& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
	    << 0xfU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_75) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_73) 
			     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
			 << 0xeU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_72) 
				       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_70) 
					  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
				      << 0xdU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_72) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_70) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
						   << 0xcU) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_69) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_67) 
							  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
						      << 0xbU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_69) 
							  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_67) 
							     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
							 << 0xaU) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_66) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_64) 
								& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
							    << 9U) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_66) 
								| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_64) 
								   & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
							       << 8U) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_63) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_61) 
								      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
								  << 7U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_63) 
								      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_61) 
									 & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
								     << 6U) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_60) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_58) 
									    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
									<< 5U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_60) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_58) 
									       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
									   << 4U) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_57) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_55) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
									      << 3U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_57) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_55) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_52) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address)) 
										<< 1U) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_52) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3609(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3609\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__putFull_mask 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1309) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1307) 
		& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
	    << 0xfU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1309) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1307) 
			     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
			 << 0xeU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1306) 
				       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1304) 
					  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
				      << 0xdU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1306) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1304) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
						   << 0xcU) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1303) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1301) 
							  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
						      << 0xbU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1303) 
							  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1301) 
							     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
							 << 0xaU) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1300) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1298) 
								& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
							    << 9U) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1300) 
								| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1298) 
								   & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
							       << 8U) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1297) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1295) 
								      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
								  << 7U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1297) 
								      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1295) 
									 & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
								     << 6U) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1294) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1292) 
									    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
									<< 5U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1294) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1292) 
									       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
									   << 4U) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1291) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1289) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
									      << 3U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1291) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1289) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1288) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1286) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6)) 
										<< 1U) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1288) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1286) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3610(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3610\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_140 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1471) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_963_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_962_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3611(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3611\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_207_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_207_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1788_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1787_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1787_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1523;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1787_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1525 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1522;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1787_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1522)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1523)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___GEN_1)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_977_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_976_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_990_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_989_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1002_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1001_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1013_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1012_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1023_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1022_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1032_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1031_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1040_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1039_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1047_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_dataflow___05FT_18_data)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1816_0
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1817_0);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3612(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3612\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1819_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1246)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1247)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_415_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_415_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_415_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1820_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1246)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1247)
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c1
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c2)
		        : ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___GEN_1 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___GEN_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1710_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_431_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1291)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1292)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_430_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_430_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_430_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1711_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3613(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3613\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1711_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_687_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_251_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_447_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1725_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_446_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1336)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1337)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_445_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_445_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_445_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_251_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_251_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1727_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1340;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3614(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3614\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1342 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1339;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1339)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1340)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_236_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_462_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_461_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_460_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_460_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_460_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1391))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1389)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3615(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3615\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_221_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_477_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_476_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_475_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_475_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_475_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3616(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3616\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_237_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3617(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3617\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_237_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1758_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1435 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_206_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_492_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_491_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1471)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1472)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_490_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_490_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_490_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1484))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1482)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3618(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3618\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_798) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_bht_history 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_121)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_983 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_branch 
	    = (0x60U == (0x74U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_825 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_br_taken));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_xcpt)
	        ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_alu_fn));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_110 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret)
	    ? ((0x20000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_85)
	        : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_85));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_66 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_70 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_74 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3619(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3619\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_78 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2035) {
	if (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2)) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2034 
		= (7U & (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2101))
			   ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2110)) 
				 | ((IData)(1U) << 
				    (2U | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2101) 
						 >> 1U))))))
			   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2110) 
			      | ((IData)(1U) << (2U 
						 | (1U 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2101) 
						       >> 1U)))))) 
			 >> 1U));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_55) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_chosen;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_resp_bits_data;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_2) 
	   & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)) 
		 | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_priv 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_2)
	    ? 1U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug) 
		     << 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
	= (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_2)
					    ? (0xfffffU 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn))
					    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)
					        ? (
						   (0xc0000U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
								>> 0x20U)) 
						       << 0x12U)) 
						   | ((0x3fe00U 
						       & ((0xfffffe00U 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_27) 
							  | (0xffe00U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
									>> 0xeU))))) 
						      | (0x1ffU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_33 
							    | (0xfffffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
									  >> 0xeU)))))))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 0xcU))))))) 
	    << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3620(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3620\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
	   & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)) 
		 | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_priv 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_phys))
	    ? 1U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug) 
		     << 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1275)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
	= (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0)
					    ? (0xfffffU 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn))
					    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled)
					        ? (
						   (0xc0000U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
								>> 0x20U)) 
						       << 0x12U)) 
						   | ((0x3fe00U 
						       & ((0xfffffe00U 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_27) 
							  | (0xffe00U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
									>> 0xeU))))) 
						      | (0x1ffU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_33 
							    | (0xfffffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
									  >> 0xeU)))))))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							   >> 0xcU))))))) 
	    << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_1) 
	   & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state)) 
		 | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_1) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__tlb_miss)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__multipleHits)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__state)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3621(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3621\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_priv 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_1)
	    ? 1U : ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T)
		       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_bits_status_debug)
		       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_1_status_debug)) 
		     << 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_ptw_status_dprv)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
	= (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_1)
					    ? (0xfffffU 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn))
					    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__vm_enabled)
					        ? (
						   (0xc0000U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_data_0 
								>> 0x20U)) 
						       << 0x12U)) 
						   | ((0x3fe00U 
						       & ((0xfffffe00U 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_27) 
							  | (0xffe00U 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_data_0 
									>> 0xeU))))) 
						      | (0x1ffU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_33 
							    | (0xfffffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_data_0 
									  >> 0xeU)))))))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_req_bits_vaddr 
							   >> 0xcU))))))) 
	    << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_req_bits_vaddr)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_978 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
	    ? 0xfffff000U : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
			      ? 0xfffff000U : ((1U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
					        ? 0xffe00000U
					        : 0xc0000000U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn 
	    << 9U) | (QData)((IData)((0x1ffU & ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr
						 : 
						((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr 
						   >> 9U)
						   : 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr 
						   >> 0x12U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3622(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3622\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_io_x));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_19 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_77 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_4));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_24 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_42 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_83 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__wrong_path)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_replay 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_37));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_206 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_198_0) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_valid)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_198_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_183 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_136 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_119 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__nextPageRepl) 
		 + (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__updatePageHit)) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__doTgtPageRepl))
		     ? 2U : 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageReplEn 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__updatePageHit))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageRepl)
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__updatePageHit))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__updatePageHit)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageRepl));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2042 
	= ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1)) 
		| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2)) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4)) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3623(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3623\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2049 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
	    << 7U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
		       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
				  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4) 
					     << 4U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3) 
						<< 3U) 
					       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2) 
						   << 2U) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1) 
						      << 1U) 
						     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_679 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5) 
	    << 5U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4) 
		       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
				  << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2) 
					     << 2U) 
					    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1) 
						<< 1U) 
					       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_585 
	= (((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_0)) 
			| ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_1))) 
		       | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			   >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_2))) 
		      | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			  >> 3U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_3))) 
		     | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			 >> 4U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_4))) 
		    | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			>> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_5))) 
		   | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		       >> 6U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_6))) 
		  | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		      >> 7U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_7))) 
		 | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_8))) 
		| ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_9))) 
	       | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		   >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_10))) 
	      | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_11))) 
	     | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		 >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_12))) 
	    | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		>> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_13))) 
	   | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
	       >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_14)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3624(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3624\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_498 
	= (0xffffU & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
				 >> 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_701 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 1U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_715 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_724 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 5U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_745 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 9U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_759 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0xaU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			      >> 0xbU)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_768 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			      >> 0xdU)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_794 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			      >> 0x10U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_808 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0x11U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_817 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0x13U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0x14U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3625(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3625\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_838 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0x16U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0x17U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_852 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0x19U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_861 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		  >> 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0x1bU)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_970 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_883___05FT_952_data)) 
	   & (0U != (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_939)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_476 
	= ((((((((((((((1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_0)
		        : 0U) | ((2U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_1)
				  : 0U)) | ((4U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_2)
					     : 0U)) 
		    | ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_3)
		        : 0U)) | ((0x10U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_4)
				   : 0U)) | ((0x20U 
					      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_5)
					      : 0U)) 
		 | ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_6)
		     : 0U)) | ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_7)
			        : 0U)) | ((0x100U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_8)
					   : 0U)) | 
	      ((0x200U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_9)
	        : 0U)) | ((0x400U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_10)
			   : 0U)) | ((0x800U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_11)
				      : 0U)) | ((0x1000U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgts_12)
						 : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3626(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3626\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_392 
	= ((((((((((((((1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_0)
		        : 0U) | ((2U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_1)
				  : 0U)) | ((4U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_2)
					     : 0U)) 
		    | ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_3)
		        : 0U)) | ((0x10U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_4)
				   : 0U)) | ((0x20U 
					      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_5)
					      : 0U)) 
		 | ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_6)
		     : 0U)) | ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_7)
			        : 0U)) | ((0x100U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_8)
					   : 0U)) | 
	      ((0x200U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_9)
	        : 0U)) | ((0x400U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_10)
			   : 0U)) | ((0x800U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_11)
				      : 0U)) | ((0x1000U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_12)
						 : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3627(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3627\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_306 
	= ((((((((((((((1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_0)
		        : 0U) | ((2U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_1)
				  : 0U)) | ((4U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_2)
					     : 0U)) 
		    | ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_3)
		        : 0U)) | ((0x10U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_4)
				   : 0U)) | ((0x20U 
					      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_5)
					      : 0U)) 
		 | ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_6)
		     : 0U)) | ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_7)
			        : 0U)) | ((0x100U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_8)
					   : 0U)) | 
	      ((0x200U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_9)
	        : 0U)) | ((0x400U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_10)
			   : 0U)) | ((0x800U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_11)
				      : 0U)) | ((0x1000U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_12)
						 : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3628(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3628\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_569));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_76 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_575) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_taken)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_40)
	       : ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch))) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictJump))) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_40))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_replay 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_575) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_308) 
	      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_xcpt)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_768 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if) 
	   | (0U != (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst) 
		      << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1054 
	= ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1039) 
			 | (0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						 >> 0x14U)))) 
			| (1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
		       | (2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
		      | (3U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					  >> 0x14U)))) 
		     | (0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))) 
		    | (0xb02U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
		   | (0x323U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
		  | (0xb03U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					  >> 0x14U)))) 
		 | (0xc03U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					 >> 0x14U)))) 
		| (0x324U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					>> 0x14U)))) 
	       | (0xb04U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				       >> 0x14U)))) 
	      | (0xc04U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				      >> 0x14U)))) 
	     | (0x325U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				     >> 0x14U)))) | 
	    (0xb05U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				  >> 0x14U)))) | (0xc05U 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3629(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3629\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_390 
	= ((3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			 >> 0xaU))) ? (0x840400U | 
				       (((0x700000U 
					  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					     << 0x12U)) 
					 | ((0x38000U 
					     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						<< 8U)) 
					    | ((((7U 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						  ? 3U
						  : 
						 ((6U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						   ? 2U
						   : 
						  ((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						    ? 0U
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						      ? 7U
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						       ? 6U
						       : 
						      ((1U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353))
						        ? 4U
						        : 0U))))))) 
						<< 0xcU) 
					       | ((0x380U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
						  | ((0x1000U 
						      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
						      ? 0x3bU
						      : 0x33U))))) 
					| ((0U == (3U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 5U)))
					    ? 0x40000000U
					    : 0U)))
	    : ((2U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			     >> 0xaU))) ? (0x47413U 
					   | ((((0x1000U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
						 ? 0x7fU
						 : 0U) 
					       << 0x19U) 
					      | ((0x1f00000U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     << 0x12U)) 
						 | ((0x38000U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							<< 8U)) 
						    | (0x380U 
						       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))))
	        : ((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				 >> 0xaU))) ? (0x40000000U 
					       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_325)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_325)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3630(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3630\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_871_rs3 
	= (0x1fU & ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0x1bU) : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0x1bU) : 
				     ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0x1bU)
				       : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					   ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      >> 0x1bU)
					   : ((0xaU 
					       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 0x1bU)
					       : ((9U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0x1bU)
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 0x1bU)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						     ? 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 0x1bU)
						     : 
						    ((6U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						      ? 
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 0x1bU)
						      : 
						     ((5U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						       ? 
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 0x1bU)
						       : 
						      ((4U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						        ? 
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 0x1bU)
						        : 
						       ((3U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							 ? 
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 0x1bU)
							 : 
							((2U 
							  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							  ? 
							 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 0x1bU)
							  : 
							 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 0x1bU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3631(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3631\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_867_rs1 
	= (0x1fU & ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (8U | (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				    >> 7U))) : ((0xbU 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						 ? 
						(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 >> 7U)
						 : 
						((0xaU 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						  ? 0U
						  : 
						 ((9U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 7U)
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 7U)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						     ? 
						    (8U 
						     | (7U 
							& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 7U)))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						      ? 
						     (8U 
						      | (7U 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)))
						      : 
						     ((5U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						       ? 
						      (8U 
						       | (7U 
							  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							     >> 7U)))
						       : 
						      ((4U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						        ? 
						       (8U 
							| (7U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      >> 7U)))
						        : 
						       ((3U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							 ? 
							(8U 
							 | (7U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							       >> 7U)))
							 : 
							((2U 
							  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							  ? 
							 (8U 
							  | (7U 
							     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								>> 7U)))
							  : 
							 ((1U 
							   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							   ? 
							  (8U 
							   | (7U 
							      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
								 >> 7U)))
							   : 2U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3632(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3632\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_857_rd 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	    ? (8U | (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			   >> 2U))) : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				        ? (8U | (7U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 2U)))
				        : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					    ? (8U | 
					       (7U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 2U)))
					    : ((4U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					        ? (8U 
						   | (7U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 2U)))
					        : (
						   (3U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						    ? 
						   (8U 
						    | (7U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  >> 2U)))
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						     ? 
						    (8U 
						     | (7U 
							& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))
						     : 
						    (8U 
						     | (7U 
							& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							   >> 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_847_bits 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	    ? (0x42403U | ((0x4000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  << 0x15U)) 
			   | ((0x3800000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					     << 0xdU)) 
			      | ((0x400000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       << 0x10U)) 
				 | ((0x38000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 << 8U)) 
				    | (0x380U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 << 5U)))))))
	    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	        ? (0x43407U | ((0xc000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      << 0x15U)) 
			       | ((0x3800000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 << 0xdU)) 
				  | ((0x38000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  << 8U)) 
				     | (0x380U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  << 5U))))))
	        : (0x10400U | ((0x3c000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       << 0x13U)) 
			       | ((0x3000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 << 0xdU)) 
				  | ((0x800000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   << 0x12U)) 
				     | ((0x400000U 
					 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					    << 0x10U)) 
					| ((0x380U 
					    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       << 5U)) 
					   | ((0U != 
					       (0xffU 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 5U)))
					       ? 0x13U
					       : 0x1fU)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3633(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3633\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_69 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_54) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_54) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_54))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_57) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_57) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_60) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_60) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_62 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_60))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3634(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3634\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_63) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_63) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_65 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_18 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14) 
		  == (1U & (~ (0xffffU & (((IData)(0xfU) 
					   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
					  >> 3U))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode) 
		    >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	      | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	     | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	    | (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	   | (0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	      | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	     | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	    | (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	   | (0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3635(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3635\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	      | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	     | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	    | (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))) 
	   | (0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_400 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
	   & (0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_400 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
	   & (0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_400 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
	   & (0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				>> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3636(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3636\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			       >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3637(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3637\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_47 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_50 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_47 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_50 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3638(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3638\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_47 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_50 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_23 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
		  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_28 
	= ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
	   & ((0U == (0x46012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
	      | (0U == (0x46012000U & (0x44000000U 
				       ^ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_69 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_54) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_54) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_54))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3639(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3639\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_57) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_57) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_57))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_60) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_60) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_62 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_63) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_63) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_65 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_63))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3640(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3640\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_67 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_52) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_70 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_52) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_54 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_45) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_52))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_73 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_55) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_76 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_55) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_57 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_45) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_55))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_58) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_82 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_58) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_48) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_58))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3641(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3641\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_85 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_61) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		 >> 0x12U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_88 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_61) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	      >> 0x12U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_63 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_48) 
	   | (3U & ((((IData)(1U) << (3U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
					     << 9U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					       >> 0x17U)))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_61))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_size 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
	    ? 6U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_source 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_param 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
	    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__buf_block 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode) 
	       >> 2U)) & (VL_ULL(0xffffffffff) == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__set_block 
	= (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_opcode) 
		>> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_61))) 
	   & (VL_ULL(0xffffffffff) == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__lists));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_offset 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
		     ? 0U : vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_45 
	= (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
			   >> 3U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
					>> 3U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3642(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3642\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_48 
	= (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
			   >> 3U) & (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
				     >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_52 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
		     >> 3U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_55 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
		     >> 3U)) & (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
				>> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_58 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
		  >> 3U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
			       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_61 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
		  >> 3U) & (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
			    >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_tag 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
		      ? (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_address
			 [0U] >> 0x10U) : (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
					   >> 0x10U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
		      ? (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			 >> 6U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)
				    ? (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_address
				       [0U] >> 6U) : 
				   (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_address 
				    >> 6U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3643(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3643\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_414 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_411 
	   | (0xfffffcU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_411 
			   << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_15 
	= (1U & ((0xfU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_1))
		  : ((0xeU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_1))
		      : ((0xdU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_1))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_12)))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_63 
	= (1U & ((0xfU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT___T_1))
		  : ((0xeU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT___T_1))
		      : ((0xdU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT___T_1))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___GEN_60)))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1127) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1135)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_c_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1127 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_c_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_c_ready) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1024 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_976) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_985)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3644(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3644\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___GEN_27 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_976) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1185)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_976 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_9 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_6));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_deq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_out_ar_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_143 
	= ((0x8fU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x6f632d6568636163)
	    : ((0x8eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x100000080010000)
	        : ((0x8dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x3000000)
		    : ((0x8cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x7375622d656c70) : 
		       ((0x8bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
			 ? VL_ULL(0x6d697300636f732d)
			 : ((0x8aU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0x6e776f6e6b6e752d)
			     : ((0x89U == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0x7069686374656b63)
				 : ((0x88U == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x6f722c7370696863)
				     : ((0x87U == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x656572661b000000)
					 : ((0x86U 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x2c00000003000000)
					     : ((0x85U 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x10000000f000000)
						 : 
						((0x84U 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x400000003000000)
						  : 
						 ((0x83U 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x100000000000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_130)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3646(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3646\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1231,95,0,3);
    // Body
    __Vtemp1231[0U] = (IData)((((QData)((IData)((0xfffU 
						 & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							   & (~ 
							      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isZero) 
								| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							        ? 0xe00U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							       ? 0xc31U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							      ? 0x400U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							     ? 0x200U
							     : 0U))) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x3ceU
							   : 0U)) 
						      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0xbffU
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 0xc00U
							 : 0U)) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						        ? 0xe00U
						        : 0U))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isZero)) 
						  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						  ? 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? VL_ULL(0x8000000000000)
						   : VL_ULL(0))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
							      >> 0x37U)))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						   >> 1U)
						   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						    ? VL_ULL(0xfffffffffffff)
						    : VL_ULL(0))))));
    __Vtemp1231[1U] = (IData)(((((QData)((IData)((0xfffU 
						  & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							    & (~ 
							       (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isZero) 
								 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
								 ? 0xe00U
								 : 0U))) 
							   & (~ 
							      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							        ? 0xc31U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							       ? 0x400U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							      ? 0x200U
							      : 0U))) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							    ? 0x3ceU
							    : 0U)) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							   ? 0xbffU
							   : 0U)) 
						      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							  ? 0xc00U
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
							 ? 0xe00U
							 : 0U))))) 
				 << 0x34U) | (VL_ULL(0xfffffffffffff) 
					      & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_isZero)) 
						   | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? VL_ULL(0x8000000000000)
						    : VL_ULL(0))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
							       >> 0x37U)))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						    >> 1U)
						    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						     ? VL_ULL(0xfffffffffffff)
						     : VL_ULL(0))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U] 
	= __Vtemp1231[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
	= __Vtemp1231[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sign));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3647(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3647\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_696[0U] 
	= (IData)((VL_ULL(0xfffff00000000) | (((QData)((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[0U] 
								   >> 0x1fU)))) 
					       << 0x34U) 
					      | (QData)((IData)(
								((0x80000000U 
								  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[1U] 
								     << 0x1fU)) 
								 | (0x7fffffffU 
								    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[0U])))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_696[1U] 
	= (0xffe00000U | (IData)(((VL_ULL(0xfffff00000000) 
				   | (((QData)((IData)(
						       (1U 
							& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[0U] 
							   >> 0x1fU)))) 
				       << 0x34U) | (QData)((IData)(
								   ((0x80000000U 
								     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[1U] 
									<< 0x1fU)) 
								    | (0x7fffffffU 
								       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_686[0U])))))) 
				  >> 0x20U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_696[2U] = 1U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3648(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3648\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2059 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2011) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_31)) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)
		  ? 0U : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2059 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2011) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___GEN_31)) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)
		  ? 0U : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2059 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2011) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___GEN_31)) 
	   & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)
		  ? 0U : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1764 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1690 
				    | vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_27) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1828 
	= (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1780) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_31)) 
		     & (~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)
				       ? 0U : ((IData)(1U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3649(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3649\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1713 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1639 
				    | vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_27) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1777 
	= (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1729) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_31)) 
		     & (~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)
				       ? 0U : ((IData)(1U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data)))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1039 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_929) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1011))) 
	   & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_185 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_181) 
		  == (1U & (~ (0xffffU & (((IData)(0xfU) 
					   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
					  >> 3U))))) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_941 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_915) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_923)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1087 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1043)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1117))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1043)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1117))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3650(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3650\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1087 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1035) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1043)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1035) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1117))) 
	    & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1035 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1077 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1025) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1033)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___GEN_28 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1025) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1204))) 
		       & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
				       >> 0xeU)))) ? 
		      ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
					       >> 5U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___GEN_31 
	= (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1025) 
		      & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1274))) 
		     & ((vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
			 >> 0x10U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
					 >> 0xfU))))
		     ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink))
		     : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1077 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1025) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1033)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_28 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1025) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1204))) 
		       & (6U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
				       >> 0xeU)))) ? 
		      ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
					       >> 5U)))
		       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3651(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3651\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_31 
	= (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1025) 
		      & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1274))) 
		     & ((vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
			 >> 0x10U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
					 >> 0xfU))))
		     ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink))
		     : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__bitmap1 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_4) 
		    | ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_4))) 
		       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_sink___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_348 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_292) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_127)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_79 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_559 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_50 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_out_b_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_150 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_d_ready) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	       ? (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4))
	       : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)));
}
