// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3886(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3886\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_s2_nack 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_nack) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nReady) 
	   >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nReady) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_972 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_valid) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid))) 
		 | ((VL_ULL(0xfffffffffe) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_966) 
		    != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_pc)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1159 
	= ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1144) 
			 | (0x106U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						 >> 0x14U)))) 
			| (0x303U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						>> 0x14U)))) 
		       | (0x302U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U)))) 
		      | (0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					      >> 0x14U)))) 
		     | (0x3a2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))) 
		    | (0x3b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
		   | (0x3b1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
		  | (0x3b2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					  >> 0x14U)))) 
		 | (0x3b3U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					 >> 0x14U)))) 
		| (0x3b4U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					>> 0x14U)))) 
	       | (0x3b5U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				       >> 0x14U)))) 
	      | (0x3b6U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				      >> 0x14U)))) 
	     | (0x3b7U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				     >> 0x14U)))) | 
	    (0x3b8U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				  >> 0x14U)))) | (0x3b9U 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3887(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3887\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
	= ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
	    : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in
	        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_901_bits));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data) 
					  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data) 
				 >> 0x1fU)) | (0xfffffffeU 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data 
							   >> 0x20U)) 
						  << 1U)))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xfffffe00U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
					  << 9U)) | 
			  ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_mask) 
					   << 1U)) 
			   | (1U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_a_bits_data 
					     >> 0x20U)) 
				    >> 0x1fU)))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
	      ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
	     ? ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size) 
				<< 0xeU)) | ((0xffffff00U 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_source) 
						 << 8U)) 
					     | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[3U]))
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
		       ? ((0xffe00000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode)
					    : 4U) << 0x15U)) 
			  | ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
					       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_param)
					       : 0U) 
					     << 0x12U)) 
			     | ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size) 
						<< 0xeU)) 
				| ((0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source) 
						   << 8U)) 
				   | (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
						>> 0x17U))))))
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_904 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_695)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_986 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1810 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1155 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1153) 
	   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1153) 
		       >> 4U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_440 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_436) 
		  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_436)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_63 
	= ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state)) 
	     & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			   >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_tag))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_33)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_1)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_6) 
	   != ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__flushOutValid)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_19) 
	       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[4U] 
		  >> 8U))) & (~ ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
					& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
					   | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[5U] 
					      >> 2U))))
				  ? ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_7) 
					 << 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_7))
				  : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1824 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1824 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1542 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1593 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1542 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address 
	= (0xfffffffU & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_60);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
	    & (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_param)
			     : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[3U] 
				 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
					   >> 0x18U)))))) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242 
	= ((0x7000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way)
			 : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
			     << 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[1U] 
					  >> 6U))) 
		       << 0xcU)) | ((0xffcU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set)
						 : 
						((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[2U] 
						  << 0x13U) 
						 | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[1U] 
						    >> 0xdU))) 
					       << 2U)) 
				    | (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
					      >> 4U) 
					     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_22 
	= ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
		   << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
					    >> 2U)))) 
	   | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
		    | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
			  >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
		  >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3892(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3892\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___GEN_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_26) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_26));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[0U] 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1717 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[0U] 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__may_pop));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1699 
	= (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1695 
		       >> 0x10U) | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1695));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_9)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2__DOT___T_1) 
	       & ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_ready) 
		  & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_2_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_234 
	= ((0xeaU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0xbd01000010000000)
	    : ((0xe9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x300000063010000)
	        : ((0xe8U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x3000000)
		    : ((0xe7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x3063696c702c76) : 
		       ((0xe6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
			 ? VL_ULL(0x637369721b000000)
			 : ((0xe5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0xc00000003000000)
			     : ((0xe4U == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0x100000052010000)
				 : ((0xe3U == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x400000003000000)
				     : ((0xe2U == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x30303030)
					 : ((0xe1U 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x3030634072656c6c)
					     : ((0xe0U 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x6f72746e6f632d74)
						 : 
						((0xdfU 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x7075727265746e69)
						  : 
						 ((0xdeU 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x100000002000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_221)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3893(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3893\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_11_0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[2U] 
				   >> 0x18U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_385_0 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
		     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U]
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_12_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_398_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_397_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_412_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_411_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_427_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_426_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_11_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_11_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_264_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_12_0)
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_277_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_276_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_291_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_290_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_306_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_305_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1078_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1077_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_243_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_242_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_227_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_226_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_211_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_210_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3894(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3894\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_195_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_194_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_179_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_178_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1538_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_777 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_774;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1554_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_825 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_822;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1570_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_873 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_870;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1586_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_921 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_918;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1602_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_969 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_966;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1618_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1014;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1634_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1065 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1062;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1650_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1113 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1110;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1666_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1158;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1682_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1209 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1206;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1698_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1257 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1254;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1714_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1305 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1302;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1730_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1353 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1350;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1746_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1401 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1398;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1762_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1449 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1446;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1778_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1497 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1494;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3895(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3895\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1218 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1217));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_163_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_162_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_95_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_501_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1779_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_500_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1498)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1499)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_499_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_499_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_499_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_147_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_146_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_131_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_130_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_115_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_114_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_99_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_98_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_83_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_82_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_67_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_66_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[5U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_21[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[5U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_21[5U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_51_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_50_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3896(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3896\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_35_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_34_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_19_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_18_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_3_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_2_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem_R0_en 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_43)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_11 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1)
	     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_6)
	     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___GEN_8)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_6)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_34)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_34))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_116)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3897(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3897\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_959_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_958_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3898(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3898\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_175_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_175_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1786_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1520 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1519 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_762_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___GEN_1)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_973_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_972_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_986_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_985_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_998_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_997_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1009_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_dataflow___05FT_18_data)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1804_0
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1805_0);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1807_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_351_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_351_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_351_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3899(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3899\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1808_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055)
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2)
		        : ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___GEN_1 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___GEN_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_367_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1099)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1100)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_366_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_366_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_366_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1647_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1102) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1102) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_78);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1647_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1102) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1102) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3900(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3900\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_247_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_383_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1661_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_382_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1144)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1145)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_381_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_381_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_381_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_247_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_247_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1663_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1151 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_639_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3901(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3901\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_232_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_398_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1676_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_397_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1189)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1190)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_396_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_396_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_396_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1199))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1197)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1678_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1195) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1195) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_78);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1678_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1195) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1195) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3902(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3902\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_217_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_413_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1691_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_412_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1234)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1235)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_411_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_411_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_411_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3903(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3903\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_233_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3904\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_233_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1694_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1244 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1243 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_670_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_202_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_428_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1706_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_427_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1279)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1280)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_10__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_10__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_426_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_10__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_10__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_426_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_426_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1292))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1290)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1709_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1288) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1288) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3905\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1709_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1288) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1288) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_187_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_443_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1721_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_442_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1324)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1325)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_11__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_11__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_441_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_11__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_11__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_441_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_441_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3906\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_219_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3907\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_219_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1725_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1337 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1336 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_701_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_172_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_458_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1736_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_457_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1369)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1370)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_456_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_456_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_456_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1383)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3908\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_157_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_473_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1751_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_472_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1414)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1415)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_471_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_471_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_471_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_205_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_205_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1756_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1430 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1429 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_732_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_14__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_142_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_488_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1766_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_487_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1459)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1460)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_486_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_486_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_486_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1478))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1476)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1771_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3911\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1771_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_36)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin_r
	    : ((VL_ULL(0x5555555555555555) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_85 
					      >> 1U)) 
	       | (VL_ULL(0xaaaaaaaaaaaaaaaa) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_85 
						<< 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1160)
		     ? (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
				 >> 3U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1159)
					     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT___T_rd
					    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT__value_1]
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_resp_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1160)) 
		 & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1159)) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_wxd)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb_io_resp_valid 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__state))
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb_io_exp_flush_skip)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___GEN_39))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___GEN_39));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_74 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__homogeneous)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_472 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_84)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_473 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_85)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_474 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_86)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_475 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_87)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_482 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_106)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_483 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_107)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_484 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_108)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_485 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_109)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_492 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_128)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_493 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_129)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_494 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_130)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_495 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_131)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3914(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3914\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_502 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_150)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_503 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_151)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_504 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_152)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_505 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_153)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_512 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_172)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_513 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_173)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3915(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3915\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_514 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_174)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_515 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_175)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_522 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_194)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_523 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_195)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_524 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_196)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_525 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_197)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3916(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3916\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_532 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_216)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_533 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_217)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_534 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_218)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_535 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_219)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_542 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_238)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_543 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_239)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3917(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3917\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_544 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_240)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_545 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_241)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_858 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_66)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_862 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_70)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_866 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_74)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3918(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3918\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_870 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_78)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_472 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_473 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_474 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_475 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)
		    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_482 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_106)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_483 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_484 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_485 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_492 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_493 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_494 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_495 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)
		    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_502 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_503 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_504 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_505 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)
		    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3921(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3921\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_512 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_513 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_514 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_515 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)
		    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_522 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_523 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3922(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3922\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_524 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_525 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_532 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_533 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_534 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_535 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)
		    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3923(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3923\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_542 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_543 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_544 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_545 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
	        ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_858 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_66)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_862 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_70)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3924(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3924\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_866 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_74)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_870 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)
						 ? 
						((2U 
						  > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_78)
						  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[3U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[4U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[5U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[6U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[7U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[3U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[4U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[5U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[6U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[7U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[3U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wdata[2U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT___GEN_154 
	= ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
			<< 8U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
				  << 0xcU))) | ((0x4000U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
						     << 8U) 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
						       << 0xbU))) 
						| ((0x2000U 
						    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							<< 8U) 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							  << 0xaU))) 
						   | ((0x1000U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							   << 8U) 
							  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							     << 9U))) 
						      | ((0x800U 
							  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en)) 
							     << 8U)) 
							 | ((0x400U 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								 << 8U) 
								& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								   << 7U))) 
							    | ((0x200U 
								& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								    << 8U) 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								      << 6U))) 
							       | ((0x100U 
								   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								       << 8U) 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									 << 5U))) 
								  | ((0x80U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									    << 5U))) 
								     | ((0x40U 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									       << 4U))) 
									| ((0x20U 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 3U))) 
									   | ((0x10U 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 2U))) 
									      | ((8U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 1U))) 
										| ((4U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en))) 
										| ((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										>> 1U))) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										>> 2U))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3925(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3925\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT___GEN_155 
	= ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
			<< 8U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
				  << 0xeU))) | ((0x4000U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
						     << 8U) 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
						       << 0xdU))) 
						| ((0x2000U 
						    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							<< 8U) 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							  << 0xcU))) 
						   | ((0x1000U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							   << 8U) 
							  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							     << 0xbU))) 
						      | ((0x800U 
							  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							      << 8U) 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								<< 0xaU))) 
							 | ((0x400U 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								 << 8U) 
								& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								   << 9U))) 
							    | ((0x200U 
								& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en)) 
								   << 8U)) 
							       | ((0x100U 
								   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								       << 8U) 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									 << 7U))) 
								  | ((0x80U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									    << 7U))) 
								     | ((0x40U 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									       << 6U))) 
									| ((0x20U 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 5U))) 
									   | ((0x10U 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 4U))) 
									      | ((8U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 3U))) 
										| ((4U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 2U))) 
										| ((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 1U))) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3926(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3926\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT___GEN_154 
	= ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
			<< 8U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
				  << 0xcU))) | ((0x4000U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
						     << 8U) 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
						       << 0xbU))) 
						| ((0x2000U 
						    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							<< 8U) 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							  << 0xaU))) 
						   | ((0x1000U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							   << 8U) 
							  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							     << 9U))) 
						      | ((0x800U 
							  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en)) 
							     << 8U)) 
							 | ((0x400U 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								 << 8U) 
								& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								   << 7U))) 
							    | ((0x200U 
								& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								    << 8U) 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								      << 6U))) 
							       | ((0x100U 
								   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								       << 8U) 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									 << 5U))) 
								  | ((0x80U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									    << 5U))) 
								     | ((0x40U 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									       << 4U))) 
									| ((0x20U 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 3U))) 
									   | ((0x10U 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 2U))) 
									      | ((8U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 1U))) 
										| ((4U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en))) 
										| ((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										>> 1U))) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										>> 2U))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3927(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3927\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT___GEN_155 
	= ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
			<< 8U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
				  << 0xeU))) | ((0x4000U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
						     << 8U) 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
						       << 0xdU))) 
						| ((0x2000U 
						    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							<< 8U) 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							  << 0xcU))) 
						   | ((0x1000U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							   << 8U) 
							  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
							     << 0xbU))) 
						      | ((0x800U 
							  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
							      << 8U) 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								<< 0xaU))) 
							 | ((0x400U 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								 << 8U) 
								& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
								   << 9U))) 
							    | ((0x200U 
								& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en)) 
								   << 8U)) 
							       | ((0x100U 
								   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
								       << 8U) 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									 << 7U))) 
								  | ((0x80U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									    << 7U))) 
								     | ((0x40U 
									 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
									       << 6U))) 
									| ((0x20U 
									    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 5U))) 
									   | ((0x10U 
									       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 4U))) 
									      | ((8U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 3U))) 
										| ((4U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 2U))) 
										| ((2U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en) 
										<< 1U))) 
										| (1U 
										& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_eccMask) 
										& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_way_en))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3928(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3928\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_in_2_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_e_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3725)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3712));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_205 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3725)) 
		 & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached)) 
		    | (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3633)) 
			| (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_5))) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_51 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_36) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_49))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_54 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_36) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_52))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_57 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_39) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_55))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_39) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_58))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_63 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_42) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_61))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3929(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3929\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_66 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_42) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_64))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_69 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_45) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_67))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_45) 
	   | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
					    >> 0x13U))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_70))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_nack_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s2_req_fire));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe)
		  ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data) 
		      | ((0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_state_state)) 
			 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)))) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_118))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_118)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1373 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__blocked) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_dmem_req_valid)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_s2_nack));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_flush_icache 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_s2_nack)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb_common 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_s2_nack) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_replay));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_wrong_npc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_969)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_972));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3930(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3930\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1185 
	= (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_880) 
		   | (~ (((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1159) 
				  | (0x3baU == (0xfffU 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						   >> 0x14U)))) 
				 | (0x3bbU == (0xfffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						  >> 0x14U)))) 
				| (0x3bcU == (0xfffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						 >> 0x14U)))) 
			       | (0x3bdU == (0xfffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						>> 0x14U)))) 
			      | (0x3beU == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U)))) 
			     | (0x3bfU == (0xfffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
			    | (0x7c1U == (0xfffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
			   | (0xf12U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						   >> 0x14U)))) 
			  | (0xf11U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						  >> 0x14U)))) 
			 | (0xf13U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						 >> 0x14U)))))) 
		  | ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U))) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_851)))) 
		 | ((((0xc00U <= (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U))) 
		      & (0xc20U > (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))) 
		     | ((0xc80U <= (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					      >> 0x14U))) 
			& (0xca0U > (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U))))) 
		    & (~ (((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
			   | ((7U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcounteren) 
			      >> (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
			  & ((1U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
			     | ((7U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_scounteren) 
				>> (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3931(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3931\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_alu_fn 
	= (((((((0x2010U == (0x2006054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		| (0x2010U == (0x6074U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x4040U == (0x4058U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x40000030U == (0x40000074U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x40001010U == (0x40003054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    << 3U) | (((((((0x2010U == (0x2002054U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			   | (0x2010U == (0x2074U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			  | (0x4010U == (0x40004054U 
					 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			 | (0x4010U == (0x5054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			| (0x4040U == (0x4058U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		       << 2U) | (((((((((0x40U == (0x4054U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
					| (0x2040U 
					   == (0x2058U 
					       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				       | (0x3010U == 
					  (0x3054U 
					   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				      | (0x6010U == 
					 (0x6054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				     | (0x2002030U 
					== (0x2002074U 
					    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				    | (0x40000030U 
				       == (0x40000074U 
					   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				   | (0x40001010U == 
				      (0x40001054U 
				       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				  << 1U) | ((((0x1010U 
					       == (0x3054U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
					      | (0x1040U 
						 == 
						 (0x1058U 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					     | (0x5010U 
						== 
						(0x5054U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					    | (0x2001030U 
					       == (0x2001074U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3932(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3932\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___GEN_1 
	= (((4U == (0x2054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    & (0U == (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
			      >> 0x14U)))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_pause));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___GEN_2 
	= (((4U == (0x2054U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    | ((0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
		  >> 0x1aU))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_mem_busy) 
				 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_fence)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd 
	= (((0x40U == (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    << 4U) | (((8U == (0x18000008U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		       << 3U) | ((((((0x40U == (0x40U 
						& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
				     | (0x8000008U 
					== (0x8000008U 
					    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				    | (0x10000008U 
				       == (0x10000008U 
					   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				   | (0x80000008U == 
				      (0x80000008U 
				       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
				  << 2U) | ((((0x10000008U 
					       == (0x10000008U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
					      | (0x40000008U 
						 == 
						 (0x40000008U 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					     << 1U) 
					    | (((0x20U 
						 == 
						 (0x68U 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
						| (0x18000020U 
						   == 
						   (0x18000020U 
						    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					       | (0x20000020U 
						  == 
						  (0x20000020U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3933(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3933\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_106 
	= ((((((((((((((((((3U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			   | (3U == (0x106fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			  | (0xbU == (0x105fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			 | (0xfU == (0x607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			| (0x17U == (0x5fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		       | (0x33U == (0xfc00007fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		      | (0x33U == (0xbe007077U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		     | (0x43U == (0x4000073U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		    | (0x53U == (0xe400007fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		   | (0x5bU == (0x105fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  | (0x63U == (0x707bU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x73U == (0xffefffffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x1013U == (0xfc00305fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x101bU == (0xfe00305fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x2003U == (0x605bU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x200bU == (0x205fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x2013U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3934(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3934\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rocc 
	= ((8U == (0x5cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	   | (0x58U == (0x58U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem 
	= ((((((((3U == (0x405fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		 | (3U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (3U == (0x107fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x2003U == (0x605bU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x202fU == (0x1800607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x800202fU == (0xe800607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x1000202fU == (0xf9f0607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x12000073U == (0xfe007fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_fp 
	= (((4U == (0x5cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x40U == (0x68U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen 
	= (((0U == (0x80000020U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    | (0U == (0x30U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x10000000U == (0x10000020U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1 
	= (((0U == (0x80000004U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    | (0U == (0x10000004U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3935(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3935\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2 
	= (((0U == (0x40000004U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	    | (0x20U == (0x20U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_csr 
	= (((((((0x70U == (0x10000078U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		| (0x1070U == (0x1078U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x2070U == (0x2078U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x10000030U == (0x1200003cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x60000050U == (0xe0000058U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    << 2U) | (((0x2070U == (0x2078U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		       << 1U) | (0x1070U == (0x1078U 
					     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_wxd 
	= ((((((((((0U == (0x6cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		   | (0x10U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  | (0x24U == (0x2024U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0x68U == (0x78U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x1030U == (0x1038U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x2030U == (0x2038U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x4000U == (0x4040U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x4018U == (0x4018U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x80000010U == (0x90000018U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3936(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3936\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs2 
	= ((((((0x20U == (0x3cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
	       | (0x30U == (0x74U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x1008U == (0x105cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x3018U == (0x3018U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x2000020U == (0x4200302cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs1 
	= (((((((0x10U == (0x54U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		| (0x20U == (0x402cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x20U == (0x38U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x2000U == (0x2050U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x2018U == (0x2018U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x90000010U == (0x9000003cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0U == (0x58U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_400 
	= ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			     >> 0xeU))) & (0U == (0x7ffff000U 
						  & (0x3000U 
						     ^ 
						     ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						       << 0x17U) 
						      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							 >> 9U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0x7c000000U & (0xc000000U ^ (
						   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						    << 0x17U) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						      >> 9U))))) 
	      | (0U == (0x7fff0000U & (0x2000000U ^ 
				       ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					 << 0x17U) 
					| (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
					   >> 9U)))))) 
	     | (0U == (0x7ffff000U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
				       << 0x17U) | 
				      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				       >> 9U))))) | 
	    (0U == (0x7ffff000U & (0x54000000U ^ ((
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						   << 0x17U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						     >> 9U)))))) 
	   | (0U == (0x7ffff000U & (0x2010000U ^ ((
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						   << 0x17U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						     >> 9U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3937(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3937\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
				      >> 8U))) : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
		     >> 0xbU)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				     >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
		     >> 0xbU)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				  >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
		  >> 0xbU) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				 >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
		  >> 0xbU) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
			      >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_47 
	= (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
				 >> 0xeU))) | (1U & 
					       ((((IData)(1U) 
						  << 
						  (3U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						      >> 0xeU))) 
						 >> 2U) 
						& (~ 
						   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						    >> 0xbU))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_50 
	= (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
				 >> 0xeU))) | (1U & 
					       ((((IData)(1U) 
						  << 
						  (3U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
						      >> 0xeU))) 
						 >> 2U) 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						   >> 0xbU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3938(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3938\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_986 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_986 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
	     ? 0U : (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
				      >> 8U))) << 3U) 
		     | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1759) 
					 >> 4U))) << 2U) 
			| (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1763) 
					  >> 2U))) 
			    << 1U) | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1763) 
					     >> 3U) 
					    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1763) 
					       >> 1U))))))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
	       ? (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
				   >> 8U))) << 5U) 
		  | (((0U != (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1798 
					 >> 0x10U))) 
		      << 4U) | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1802) 
						  >> 8U))) 
				 << 3U) | (((0U != 
					     (0xfU 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1806) 
						 >> 4U))) 
					    << 2U) 
					   | (((0U 
						!= 
						(3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1810) 
						    >> 2U))) 
					       << 1U) 
					      | (1U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1810) 
						     >> 3U) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1810) 
						       >> 1U))))))))
	       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3939(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3939\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_bits_source 
	= ((0x20U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1030[4U])
	    ? (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
				>> 8U))) << 3U) | (
						   ((0U 
						     != 
						     (0xfU 
						      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_432) 
							 >> 4U))) 
						    << 2U) 
						   | (((0U 
							!= 
							(3U 
							 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_436) 
							    >> 2U))) 
						       << 1U) 
						      | (1U 
							 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_440) 
							    >> 1U)))))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_443 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_432) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_436) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_440) 
						     >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1872 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1824) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1833)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1872 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1824) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1872 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1824) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1590 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1542) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1641 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1593) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1602)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1590 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1542) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1551)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
	    ? ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))
	    : (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3940(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3940\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass 
	= (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set) 
		  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way) 
		    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
		& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_beat) 
		   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires))
	      ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_size)) 
			 << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_offset) 
						  >> 2U)))) 
		 | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_size)) 
			  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_offset) 
				>> 3U))))) : 0U) | 
	    (((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set) 
		  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way) 
		    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
		& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_beat) 
		   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires))
	      ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			 << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_offset) 
						  >> 2U)))) 
		 | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
			  | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_offset) 
				>> 3U))))) : 0U)) | 
	   ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set) 
		== (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way) 
		  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
	      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat) 
		 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full))
	     ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_size)) 
			<< 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_offset) 
						 >> 2U)))) 
		| (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_size)) 
			 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_offset) 
			       >> 3U))))) : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3941(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3941\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid 
	= (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat)) 
	    | ((((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
		      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
		     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set))) 
		 & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
			!= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
		       != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set)))) 
		& (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
		       != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
		      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set)))) 
	       & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
		      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
		     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1379) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1717) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1699) 
		     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1699)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247 
	= ((0xf7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x400000078010000)
	    : ((0xf6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x400000003000000)
	        : ((0xf5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x300000000020000)
		    : ((0xf4U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x400000003000000)
		        : ((0xf3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x3000000ed010000)
			    : ((0xf2U == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0x400000003000000)
			        : ((0xf1U == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x6c6f72746e6f63)
				    : ((0xf0U == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0xa101000008000000)
				        : ((0xefU == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x300000000000004)
					    : ((0xeeU 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0xc0f010000)
					        : (
						   (0xedU 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x800000003000000)
						    : 
						   ((0xecU 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x900000003000000)
						     : 
						    ((0xebU 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0xb00000003000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_234)))))))))))));
}
