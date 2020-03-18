// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_combo__TOP__5161(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5161\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1039 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1018) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_240 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_655 
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

VL_INLINE_OPT void VTestHarness::_combo__TOP__5162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1039 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1018) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_240 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_253 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_655 
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

VL_INLINE_OPT void VTestHarness::_combo__TOP__5163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1039 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1018) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1534 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1512)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1762 
	= (1U & ((~ (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1729) 
			       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_sink)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_573 
	= ((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source) 
			     >> 4U))) | (0U == (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source) 
						   >> 4U)))) 
	      | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1530 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1511)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1538 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_bad) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1513)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_178 
	= (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full) 
		      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_pb)) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_corrupt))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_65 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_status_bits_nestC)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_537 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_525)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_533 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_524)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_128 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_128 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_742 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_588 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_520 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_438))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_444 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_438) 
		  | (0U == (0xffff0000U & (0x10000U 
					   ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_520 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_438))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_444 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_400) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_438) 
		  | (0U == (0xffff0000U & (0x10000U 
					   ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_208 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_82)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_272 
	= ((0U == (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
		   [0U] & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_82)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_24 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___GEN_23) 
	    >= (0x7ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT___T_8))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_543 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_531)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_539 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_530)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_128 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
		     >> 2U)) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_20 
	= (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_cmd_id___05FT_18_data))
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1070 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1048)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1298 
	= (1U & ((~ (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1265) 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1070 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1048)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1298 
	= (1U & ((~ (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1265) 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_909 
	= ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__m__DOT__state))
	      ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_900)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_909 
	= ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__m__DOT__state))
	      ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_900)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_909 
	= ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__m__DOT__state))
	      ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_900)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_909 
	= ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__m__DOT__state))
	      ? 1U : 4U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_900)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1901 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1892)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1901 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1892)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1901 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1892)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1619 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1610)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1670 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1661)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1619 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1610)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1905 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1893)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1905 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1893)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1905 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1893)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1623 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1611)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1674 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1662)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1623 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1611)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1459 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1459 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1459 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	     | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1225 
	= ((((((1U == (3U & (2U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
				   >> 4U)))) | (0U 
						== 
						(3U 
						 & (2U 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
						       >> 4U))))) 
	      | (0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	     | (0x22U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	    | (0x24U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5169(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5169\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1270 
	= (((((((1U == (3U & (2U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
				    >> 4U)))) | (0U 
						 == 
						 (3U 
						  & (2U 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
							>> 4U))))) 
	       | (0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	      | (0x21U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	     | (0x22U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	    | (0x24U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1225 
	= ((((((1U == (3U & (2U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
				   >> 4U)))) | (0U 
						== 
						(3U 
						 & (2U 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
						       >> 4U))))) 
	      | (0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	     | (0x22U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	    | (0x24U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1913 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1895)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5170(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5170\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1913 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1895)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1913 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1895)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1631 
	= (((0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1613)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1682 
	= (((0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1664)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1631 
	= (((0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1613)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1456 
	= (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x3000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				   & (QData)((IData)(
						     (0xc000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x54000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
			       & (QData)((IData)((0x2010000U 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x10000U 
								     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5171(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5171\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1456 
	= (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x3000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				   & (QData)((IData)(
						     (0xc000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x54000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
			       & (QData)((IData)((0x2010000U 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x10000U 
								     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1456 
	= (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x3000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				   & (QData)((IData)(
						     (0xc000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x54000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
			       & (QData)((IData)((0x2010000U 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x10000U 
								     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5172(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5172\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1917 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1896) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1917 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1896) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1917 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1896) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1635 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1614) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1686 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1665) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1635 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1614) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1466 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1549 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1563 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1909 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1894)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1466 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5173(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5173\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1549 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1563 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1909 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1894)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1466 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1549 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1563 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1909 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1894)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1232 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5174(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5174\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271 
	= (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1305 
	= (((0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1627 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1612)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1277 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1316 
	= (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1353 
	= (((0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5175(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5175\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1678 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1663)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1232 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (7U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271 
	= (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data))) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1305 
	= (((0x20U == (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data))) 
	    & (6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1627 
	= (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1612)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_420 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_413) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5176(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5176\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_502 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_413) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_420 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_413) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_502 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_413) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5177(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5177\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_420 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_413) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_502 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_370) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_413) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_415 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_408) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_497 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_408) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5178(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5178\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_415 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_408) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_497 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_408) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_415 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_408) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5179(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5179\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_497 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_365) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_408) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1522 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1509)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__room) 
	    == (1U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_2)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_1)
				    ? 0xcU : 0U) : 
			       (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1) 
				 > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value))
				 ? ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_20))
				 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_20)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_541 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_526)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_590 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_574)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_547 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_532)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_64 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_60)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_5))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5180(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5180\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5181(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5181\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1654,607,0,19);
    VL_SIGW(__Vtemp1657,607,0,19);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1654, vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_661 
	= (1U & ((~ __Vtemp1654[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1657, vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_661 
	= (1U & ((~ __Vtemp1657[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
			      [0U] >> 8U))) | (0U == 
					       (3U 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
						   [0U] 
						   >> 8U)))) 
	       | (0x20U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
				     [0U] >> 4U)))) 
	      | (0x21U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
				    [0U] >> 4U)))) 
	     | (0x22U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
				   [0U] >> 4U)))) | 
	    (0x24U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
				[0U] >> 4U)))) | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_600 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
	    [0U] == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5182(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5182\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
		      [0U] >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
			      [0U] >> 0xaU))) | (0U 
						 == 
						 (3U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
						     [0U] 
						     >> 0xaU)))) 
	       | (0x20U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
				     [0U] >> 6U)))) 
	      | (0x21U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
				    [0U] >> 6U)))) 
	     | (0x22U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
				   [0U] >> 6U)))) | 
	    (0x24U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
				[0U] >> 6U)))) | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
		      [0U] >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_596 
	= (((3U & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
	     [0U]) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_600 
	= (((0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
		       [0U] >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5183(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5183\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_45 
	= (1U & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4)) 
		      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_corrupt
		      [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1]) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_96 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_10 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_4) 
		  | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_1)
		      : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
			  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_1)
			  : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
			      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_1)
			      : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_1)
				  : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
				      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_1)
				      : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
					  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_1)
					  : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_1)
					      : ((8U 
						  == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_1)
						  : 
						 ((7U 
						   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_1)
						   : 
						  ((6U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_1)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_1)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_1)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						       ? 
						      (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_4))
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
						        ? 
						       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_4))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_id___05FT_18_data))
							 ? 
							(~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_4))
							 : 
							(~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_4)))))))))))))))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5184(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5184\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_88 
	= (1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4)) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_201 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_214 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_616 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5185(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5185\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_984 
	= ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_963) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_142 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_155 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_557 
	= ((((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	     & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(
						     (0x3000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
				     & (QData)((IData)(
						       (0xc000000U 
							^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0x54000000U 
						     ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(
						   (0x2010000U 
						    ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	    | ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5186(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5186\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_925 
	= ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	    == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_904) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_641 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_bad)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1518 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1508)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1573 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1560)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1522 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1509)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1589 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1564)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1538 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1513)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1585 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1563)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1813 
	= (1U & ((~ (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1780) 
			       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1534 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1512)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1762 
	= (1U & ((~ (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1729) 
			       >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_592 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
			      >> 4U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
						    >> 4U)))) 
	       | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	      | (0x21U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5187(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5187\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_573 
	= ((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
			     >> 4U))) | (0U == (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
						   >> 4U)))) 
	      | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	     | (0x22U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	    | (0x24U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1581 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1562)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1530 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1511)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_131 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__s3_valid)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_5))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_115 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode___05FT_18_data))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_458 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_608 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_458 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5188(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5188\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_608 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5189(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5189\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1660,607,0,19);
    VL_SIGW(__Vtemp1663,607,0,19);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_403 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1660, vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_661 
	= (1U & ((~ __Vtemp1660[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1663, vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_661 
	= (1U & ((~ __Vtemp1663[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_516 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
			      >> 8U))) | (0U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 8U)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				     >> 4U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						      >> 4U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
				   >> 4U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
						    >> 4U)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5190(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5190\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1666,607,0,19);
    VL_SIGW(__Vtemp1669,607,0,19);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_748 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
		      >> 4U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_729)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_545 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_527)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_594 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_575)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1666, vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_655 
	= (1U & ((~ __Vtemp1666[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_549 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_528) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_551 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_533)) 
	   | (IData)(vlTOPp->reset));
    VL_SHIFTR_WWI(592,592,10, __Vtemp1669, vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_661 
	= (1U & ((~ __Vtemp1669[0U]) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5191(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5191\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_128 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
		   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_need_r))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue_io_deq_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_345 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_409 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
			      >> 0xaU))) | (0U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 0xaU)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				     >> 6U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 6U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				   >> 6U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
			      >> 0xaU))) | (0U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 0xaU)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				     >> 6U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 6U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				   >> 6U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5192(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5192\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
			      >> 0xaU))) | (0U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 0xaU)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				     >> 6U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						      >> 6U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
				   >> 6U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_596 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_600 
	= (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_596 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5193(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5193\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_600 
	= (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_768 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_596 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_768 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_743)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_748 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_738)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_748 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_738)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4xbar__DOT___T_117 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_138 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
		  | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT___T_1)
		      : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
			  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT___T_1)
			  : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
			      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT___T_1)
			      : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT___T_1)
				  : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
				      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT___T_1)
				      : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
					  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT___T_1)
					  : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT___T_1)
					      : ((8U 
						  == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT___T_1)
						  : 
						 ((7U 
						   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT___T_1)
						   : 
						  ((6U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT___T_1)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT___T_1)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT___T_1)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						       ? 
						      (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_4))
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
						        ? 
						       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_4))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))
							 ? 
							(~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_4))
							 : 
							(~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_4)))))))))))))))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5194(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5194\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_912 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1084 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1059)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1064 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1143 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1118)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_912 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1084 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1059)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_912 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1084 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1059)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1123 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1113)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1064 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1054)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1064 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1054)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_216 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_82)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_280 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_82)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_216 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_82)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5195(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5195\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_280 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_82)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_588 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_578)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1700 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1691)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_226 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1712 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1694)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1919 
	= (1U & ((~ (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870) 
			   >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_source)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5196(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5196\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_223 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_source)) 
	    & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_size))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1708 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1693)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_23 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb_io_exp_flush_retry)) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb_io_exp_flush_skip))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_772 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_326) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_376 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_326) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_369) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_458 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_326) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_369) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_713 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_267) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5197(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5197\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_317 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_267) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_310) 
		   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				    & (QData)((IData)(
						      (0x10000U 
						       ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_399 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_267) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_310) 
		  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
				   & (QData)((IData)(
						     (0x80000000U 
						      ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_660 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_641 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1569 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1559)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1518 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1508)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1773 
	= (1U & ((0xfffU & ((0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___GEN_31) 
				       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1729))) 
			    >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_522 
	= (((((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			      >> 0xaU))) | (0U == (3U 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						      >> 0xaU)))) 
	       | (0x20U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
				     >> 6U)))) | (0x21U 
						  == 
						  (0x3fU 
						   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						      >> 6U)))) 
	     | (0x22U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
				   >> 6U)))) | (0x24U 
						== 
						(0x3fU 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
						    >> 6U)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5198(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5198\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
	= (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
		      >> 6U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_735)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_596 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62)) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_600 
	= (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_971 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_596 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_580)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5199(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5199\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_436 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_608 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_583)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5200(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5200\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_600 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_581)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2379 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)) 
		  | ((0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					    >> 0xcU))) 
		     == (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					       >> 0xcU))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1704 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_a_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1692)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_434 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_138)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_596 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_138)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_434 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_596 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_434 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_138)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_596 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_138)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_429 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_150)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_591 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_150)))) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5201(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5201\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_429 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_150)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_591 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_150)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_429 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_150)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_591 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_150)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1045 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1024)
		    ? 1U : 0U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_982)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1052 
	= (1U & ((((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1024)
			   ? 1U : 0U)) != (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1039)
						  ? 1U
						  : 0U))) 
		  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1024)
			 ? 1U : 0U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1045 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
		    ? 1U : 0U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_982)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1052 
	= (1U & ((((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
			   ? 1U : 0U)) != (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1039)
						  ? 1U
						  : 0U))) 
		  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
			 ? 1U : 0U))) | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5202(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5202\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1045 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1024)
		    ? 1U : 0U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_982)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1052 
	= (1U & ((((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1024)
			   ? 1U : 0U)) != (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1039)
						  ? 1U
						  : 0U))) 
		  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1024)
			 ? 1U : 0U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1052 
	= (1U & ((((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
			   ? 1U : 0U)) != (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16))) 
		  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
			 ? 1U : 0U))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1045 
	= (1U & (((1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1024)
			   ? 1U : 0U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_982))) 
		  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1526 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1510)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_66 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_pop_valid)) 
		  | (IData)((VL_ULL(0xffffffffff) & 
			     (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__valid 
			      >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_put))))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5203(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5203\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_48 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer_io_pop_valid)) 
		  | (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__valid) 
			   >> (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_put))))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_288 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_295 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_305 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_312 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_325 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_332 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_339 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_346 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5204(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5204\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_353 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_360 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_367 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_374 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_381 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_388 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_395 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_402 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_409 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5205(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5205\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_416 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_423 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_430 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_437 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_444 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_451 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_458 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_465 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_475 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5206(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5206\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_485 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_492 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_499 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_506 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_519 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_529 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_536 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_543 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_550 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5207(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5207\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_557 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_564 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_571 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_578 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_588 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_595 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_602 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_609 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_616 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5208(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5208\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_626 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_636 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_643 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_650 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_672 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_679 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_686 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_693 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_700 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5209(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5209\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_713 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_288 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_295 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_305 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_312 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_325 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_332 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_339 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_346 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5210(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5210\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_353 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_360 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_367 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_374 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_381 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_388 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_395 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_402 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_409 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5211(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5211\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_416 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_423 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_430 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_437 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_444 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_451 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_458 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_465 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_475 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5212(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5212\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_485 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_492 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_499 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_506 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_519 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_529 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_536 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_543 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_550 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5213(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5213\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_557 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_564 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_571 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_578 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_588 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_595 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_602 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_609 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_616 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5214(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5214\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_626 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_636 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_643 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_650 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_672 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_679 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_686 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_693 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_700 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5215(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5215\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_713 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_288 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_295 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_305 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_312 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_325 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_332 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_339 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_346 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5216(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5216\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_353 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_360 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_367 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_374 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_381 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_388 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_395 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_402 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_409 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5217(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5217\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_416 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_423 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_430 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_437 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_444 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_451 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_458 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_465 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_475 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5218(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5218\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_485 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_492 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_499 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_506 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_519 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_529 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_536 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_543 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_550 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5219(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5219\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_557 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_564 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_571 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_578 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_588 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_595 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_602 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_609 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_616 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5220(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5220\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_626 
	= (1U & ((~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_636 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_643 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_650 
	= (1U & ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_672 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_679 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_686 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_693 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_700 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5221(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5221\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_713 
	= (1U & ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_288 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_295 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_305 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_312 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_325 
	= (1U & ((~ ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_332 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_339 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_346 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5222(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5222\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_353 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_360 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_367 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_374 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_381 
	= (1U & ((~ ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_388 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_395 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_402 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_409 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5223(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5223\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_416 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_423 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_430 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_437 
	= (1U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_444 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_451 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_458 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_465 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_475 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__5224(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__5224\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_485 
	= (1U & ((~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_492 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_499 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_506 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_519 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_529 
	= (1U & ((~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_536 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_543 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_550 
	= (1U & ((~ ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__before_)) 
		     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__after)))) 
		 | (IData)(vlTOPp->reset)));
}
