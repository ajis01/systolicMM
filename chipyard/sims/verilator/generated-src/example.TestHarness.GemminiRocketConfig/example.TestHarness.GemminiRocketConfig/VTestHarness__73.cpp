// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3944(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3944\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_22[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[6U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_22[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[6U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram_RW_0_addr_pipe_0];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3945(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3945\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_49)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_49))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_123)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1523)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3946(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3946\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3947(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3947\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1247)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT___T_66))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3948(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3948\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1340)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_66))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3949(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3949\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_66))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_14__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_14__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_14__DOT__tile_0_0__DOT___T_38));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3950(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3950\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1543,95,0,3);
    VL_SIGW(__Vtemp1544,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset));
    __Vtemp1543[0U] = (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin);
    __Vtemp1543[1U] = (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin 
			       >> 0x20U));
    __Vtemp1543[2U] = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
			      >> 3U) & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin 
						>> 0x3fU))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1544, __Vtemp1543, 
		   ((((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2 
			       >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)) 
		     << 5U) | (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[0U] 
	= __Vtemp1544[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[1U] 
	= __Vtemp1544[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[2U] 
	= (1U & __Vtemp1544[2U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1160) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1159) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_resp_ready) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_resp_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb_io_resp_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT___T_3 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb_io_resp_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_d 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 7U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_d)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_d)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_a 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 6U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_a)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_a)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3951(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3951\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_g 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 5U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_g)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_g)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_u 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 4U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_u)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_u)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_x 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 3U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_x)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_x)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_w 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 2U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_w)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_w)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_r 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
		  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 1U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_r)
					 : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
					    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_r)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_v 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__res_v)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_v)
	        : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_v))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___1_1_io_x_ppn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? (QData)((IData)((0xfffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
						   >> 0xaU)))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_993)
	        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		    ? ((VL_ULL(0x3ffffffffffe00) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn) 
		       | (QData)((IData)((0x1ffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr))))
		    : ((VL_ULL(0x3ffffffffc0000) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn) 
		       | (QData)((IData)((0x3ffffU 
					  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_addr)))))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995)
		    ? (QData)((IData)((((((((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_0
					       : 0U) 
					     | ((2U 
						 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
						 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_1
						 : 0U)) 
					    | ((4U 
						& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_2
					        : 0U)) 
					   | ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_3
					       : 0U)) 
					  | ((0x10U 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					      ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_4
					      : 0U)) 
					 | ((0x20U 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_5
					     : 0U)) 
					| ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_6
					    : 0U)) 
				       | ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits))
					   ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__data_7
					   : 0U))))
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_55)
		        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_ppn
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_ppn))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3952(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3952\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_874 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354)
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_874 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
	    >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
			       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011)
					     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354)
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT___GEN_154) 
	    << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT___GEN_155));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT___GEN_154) 
	    << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT___GEN_155));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_1) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_mem_req_valid) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_137))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_e_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_d_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3811)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_205));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3811)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_205)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_138 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_72) 
	     << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_70) 
					 << 0xfU) & 
					(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
					 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_72) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_70) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
			 >> 0x11U)))) << 0xeU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_69) 
						    << 0xdU) 
						   | (0xfffe000U 
						      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_67) 
							  << 0xdU) 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
							    >> 4U)))) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_69) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_67) 
							  & (~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
							      >> 0x11U)))) 
						      << 0xcU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_66) 
							  << 0xbU) 
							 | (0x3fff800U 
							    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_64) 
								<< 0xbU) 
							       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
								  >> 6U)))) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_66) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_64) 
								& (~ 
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
								    >> 0x11U)))) 
							    << 0xaU) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_63) 
								<< 9U) 
							       | (0xfffe00U 
								  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_61) 
								      << 9U) 
								     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									>> 8U)))) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_63) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_61) 
								      & (~ 
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									  >> 0x11U)))) 
								  << 8U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_60) 
								      << 7U) 
								     | (0x3fff80U 
									& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_58) 
									    << 7U) 
									   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
									      >> 0xaU)))) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_60) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_58) 
									    & (~ 
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
									<< 6U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_57) 
									    << 5U) 
									   | (0xfffe0U 
									      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_55) 
										<< 5U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0xcU)))) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_57) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_55) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
									      << 4U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_54) 
										<< 3U) 
										| (0x3fff8U 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_52) 
										<< 3U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0xeU)))) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_52) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_51) 
										<< 1U) 
										| (0xfffeU 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_49) 
										<< 1U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x10U)))) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_51) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_49) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
										>> 0x11U)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3953\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nack_head 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_nack_valid) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_4))) 
	   & (0U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_28 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_flush_icache) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb_common)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb_common) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1148) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_6)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
	       < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC))) 
	   & (1U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_wrong_npc) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_sfence)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_123 
	= ((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_106) 
			   | (0x202fU == (0x1800607fU 
					  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			  | (0x205bU == (0x205fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			 | (0x2073U == (0x2077U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			| (0x5013U == (0xbc00707fU 
				       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		       | (0x501bU == (0xbe00705fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		      | (0x5033U == (0xbe007077U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		     | (0x2004033U == (0xfe004077U 
				       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		    | (0x800202fU == (0xe800607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		   | (0x1000202fU == (0xf9f0607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  | (0x10200073U == (0xdfffffffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0x10500073U == (0xdfffffffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		| (0x12000073U == (0xfe007fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	       | (0x20000053U == (0xf400607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	      | (0x20000053U == (0x7c00607fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	     | (0x20000053U == (0x7c00507fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	    | (0x40100053U == (0x7ff0007fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
	   | (0x42000053U == (0x7ff0007fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3954(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3954\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_553 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem) 
	    & (0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd))) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_csr)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_547 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_csr)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_csr)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1221 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_wxd) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_790 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs2) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__do_bypass_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1219 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs2) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_782 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs1) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__do_bypass)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1217 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rxs1) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3955(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3955\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
	   | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
					    >> 0xeU))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1034 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_986) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_995)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_986) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1098)))
	    ? (VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_356 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354) 
		    - ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
		       & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_418)
			   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_448)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3956(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3956\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_18)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379) 
			>> 2U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235 
	= ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_enq_ready) 
	      & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
		  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_379) 
			>> 1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail_push_tail_data 
	= ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_40 
	= (VL_ULL(0xfffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
				  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_req_bits_sink 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
			    >> 8U))) << 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_443));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3957(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3957\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_last 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter) 
	   == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single)
		      ? 0U : (~ (0x1ffU & (((IData)(0x3fU) 
					    << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
					   >> 4U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41 
	= (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_199) 
		     >> (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156))) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)
		     ? ((IData)(1U) << (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156)))
		     : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_43 
	= ((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_260 
	= ((0x104U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				 >> 3U))) ? VL_ULL(0x30303030303034)
	    : ((0x103U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				     >> 3U))) ? VL_ULL(0x35406c6169726573)
	        : ((0x102U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					 >> 3U))) ? VL_ULL(0x100000002000000)
		    : ((0x101U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
		        ? VL_ULL(0x6d656da1010000) : 
		       ((0x100U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					      >> 3U)))
			 ? VL_ULL(0x400000003000000)
			 : ((0xffU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
			     ? VL_ULL(0x10000000100)
			     : ((0xfeU == (0x1ffU & 
					   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
				 ? VL_ULL(0xf01000008000000)
				 : ((0xfdU == (0x1ffU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
				     ? VL_ULL(0x300000000306d6f)
				     : ((0xfcU == (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
					 ? VL_ULL(0x722c657669666973)
					 : ((0xfbU 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x1b0000000c000000)
					     : ((0xfaU 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x300000000000030)
						 : 
						((0xf9U 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x30303031406d6f72)
						  : 
						 ((0xf8U 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x100000002000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3958\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_12_0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_397_0 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U] 
			>> 8U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_13_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_411_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_410_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_426_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_425_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_12_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_12_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_276_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_13_0)
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_290_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_289_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_305_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_304_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1077_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1076_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_242_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_241_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_226_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_225_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_210_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_209_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_194_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_193_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_178_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_177_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3959(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3959\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1537_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_774 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_771;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1553_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_822 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_819;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1569_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_870 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_867;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1585_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_918 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_915;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1601_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_966 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_963;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1617_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1011;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1633_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1062 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1059;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1649_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1110 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1107;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1665_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1155;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1681_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1206 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1203;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1697_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1254 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1251;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1713_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1302 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1299;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1729_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1350 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1347;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1745_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1398 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1395;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1761_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1446 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1443;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1777_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1494 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1491;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1217 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1216));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3960(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3960\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_162_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_161_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_79_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_500_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1778_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_499_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1495)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1496)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_15__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_15__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_498_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_15__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_15__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_498_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_498_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_146_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_145_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_130_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_129_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_114_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_113_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_98_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_97_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_82_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_81_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_66_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_65_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[6U] 
	= ((0xffffff00U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram_RW_0_addr_pipe_0] 
			   << 8U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_23[6U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[6U] 
	= ((0xffffff00U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram_RW_0_addr_pipe_0] 
			   << 8U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_23[6U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_50_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_49_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_34_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_33_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3961(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3961\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_18_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_17_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_2_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_137 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_64)
	        ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_43)) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_64))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_130)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_958_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_957_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1520))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1518)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_78);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3962(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3962\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_972_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_971_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_985_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_984_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_997_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_dataflow___05FT_18_data)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1801_0
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1802_0);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1804_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1006)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1007)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_335_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_335_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_335_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1805_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1006)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1007)
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c1
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__c2)
		        : ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___GEN_1 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT___GEN_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1630_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_351_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1051)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1052)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_350_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_350_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_350_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1631_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3963(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3963\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1631_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1054) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_607_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_246_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_367_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1645_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_366_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1096)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1097)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_365_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_365_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_365_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_246_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_246_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1647_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1100;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3964(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3964\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1102 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1099;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_623_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1099)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1100)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_231_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_382_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1660_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_381_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1141)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1142)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_380_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_380_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_380_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1151))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1149)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3965(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3965\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1147) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_638_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_216_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_397_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1675_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_396_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1186)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1187)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_395_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_395_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_395_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3966(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3966\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_232_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3967(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3967\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_232_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1678_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1677_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1677_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1193;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1677_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1195 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1192;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1677_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_654_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1192)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1193)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_201_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_412_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1690_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_411_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1231)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1232)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_9__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_9__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_410_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_9__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_9__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_410_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_410_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1244))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1242)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3968(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3968\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1240) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_669_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_186_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_427_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1705_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_426_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1276)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1277)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_425_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_425_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_425_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3969(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3969\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_218_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3970(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3970\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_218_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1709_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1286;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1288 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1285;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_685_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1285)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1286)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_171_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_442_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1720_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_441_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1321)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1322)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_440_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_440_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_440_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1337))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1335)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3971(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3971\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1333) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_700_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_12__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_156_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_457_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1735_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_456_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1366)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1367)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_455_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_455_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_455_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3972(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3972\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_204_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3973(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3973\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_204_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1739_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1739_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1379;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1739_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1381 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1378;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1739_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_716_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1378)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1379)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_13__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_141_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_472_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1750_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_471_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1411)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1412)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_470_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_470_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_470_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1430))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1428)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3974(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3974\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1426) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_731_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_126_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_487_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1765_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_486_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1456)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1457)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_485_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_485_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_485_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3975(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3975\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_190_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3976(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3976\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_190_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1771_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1472;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1471;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_747_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1471)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1472)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_110 
	= ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[1U])) 
	   | (VL_ULL(0xffffffff00000000) & ((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_101[0U])) 
					    << 0x20U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1228 
	= (0xfffffffeU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222 
			  & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen)
				 ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr))
				 : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rf_waddr 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_waddr)
		     : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
			>> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT___T_3) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_1_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT___T_3) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT___T_34 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wordMask));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3977(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3977\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT___T_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_wordMask) 
	      >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1720 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_d_ready 
	= (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
		>> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_d_ready)) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_333 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_296 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3904) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694)
	       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached)
		   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_ack_wait)
		   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsUncached)
		       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_ack_wait)
		       : ((6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_ack_wait))))
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_ack_wait)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_data_way 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_338)
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsUncached)
		    ? ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data))
		        ? 0x10U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_338))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_338)))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_338));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_perf_grant 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_last) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_replay_next 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_last) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_denied___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq_io_enq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq_io_nack_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nack_head)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_flush_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3978(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3978\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_999 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_write));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1379 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__rocc_blocked));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_wb) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_eret)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_569 
	= (1U & ((((~ (((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_123) 
				| (0x58000053U == (0xfdf0007fU 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			       | (0x7b200073U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			      | (0xc0000053U == (0xedc0007fU 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			     | (0xe0000053U == (0xfdf0607fU 
						& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			    | (0xe0000053U == (0xedf0707fU 
					       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			   | (0x1063U == (0x306fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			  | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			 | (0x33U == (0xfc007077U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			| (3U == (0x7067U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		       | (3U == (0x405fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))) 
		   | ((0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		      & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
				    >> 0xcU))))) | 
		  ((0x200cU == (0x204cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_fp) 
		    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_decode_0_fp_illegal) 
		       | (((5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
					 >> 0xcU))) 
			   | (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
					   >> 0xcU)))) 
			  | ((7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
					   >> 0xcU))) 
			     & (5U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_frm))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3979(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3979\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_csr_ren 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_547) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_csr_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_547) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_csr)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__data_hazard_mem 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_wxd) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1217) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1291)) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1219) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1293))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1221) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1295))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_99 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
	     << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
				       << 7U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_65) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
			 >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62) 
					       << 5U) 
					      | (0xfffffe0U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
						     << 5U) 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
						       >> 4U)))) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_62) 
						  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
						     & (~ 
							(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							 >> 9U)))) 
						 << 4U) 
						| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59) 
						     << 3U) 
						    | (0x3fffff8U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
							   << 3U) 
							  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							     >> 6U)))) 
						   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_59) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
							   & (~ 
							      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
							       >> 9U)))) 
						       << 2U) 
						      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56) 
							   << 1U) 
							  | (0xfffffeU 
							     & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
								 << 1U) 
								& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
								   >> 8U)))) 
							 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_56) 
							    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
							       & (~ 
								  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
								   >> 9U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3980(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3980\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1162 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1088 
				    | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1093 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1054)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1045) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1157)))
	    ? (VL_ULL(1) << (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						   >> 0x11U))))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_245)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_244) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_245));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_227)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_226) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_227));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_236)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_235) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_236));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_22) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_need_r 
	= (((((0U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_22) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15)))) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)) 
	     & (5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))) 
	   & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
	      | (3U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3981(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3981\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__s2_latch 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_45));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_addr 
	= (0x1fffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_addr 
	= (0x1fffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((2U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((2U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_addr 
	= (0x1fffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((4U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((4U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3982(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3982\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_addr 
	= (0x1fffU & ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((8U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((8U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_addr 
	= (0x1fffU & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x10U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_addr 
	= (0x1fffU & ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x20U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x20U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3983(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3983\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_addr 
	= (0x1fffU & ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x40U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_addr 
	= (0x1fffU & ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3) 
			  >> 2U) : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156) 
					>> 3U) : ((0x80U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_70) 
						   >> 3U)
						   : 
						  ((0x80U 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_310) 
						    >> 2U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_242) 
						    >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3984(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3984\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 1U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 2U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 3U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_548 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 4U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_586 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 5U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_624 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 6U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 6U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3985(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3985\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_662 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
		     >> 7U)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel)) 
				>> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_199));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits 
	= (((0U != (0xfU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1691 
				    >> 0x20U)))) << 5U) 
	   | (((0U != (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1695 
				  >> 0x10U))) << 4U) 
	      | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1699) 
				   >> 8U))) << 3U) 
		 | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1703) 
				     >> 4U))) << 2U) 
		    | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
				      >> 2U))) << 1U) 
		       | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
				 >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1707) 
					   >> 1U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_273 
	= ((0x111U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				 >> 3U))) ? VL_ULL(0x2000000006c6f72)
	    : ((0x110U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				     >> 3U))) ? VL_ULL(0x746e6f63a1010000)
	        : ((0x10fU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					 >> 3U))) ? VL_ULL(0x800000003000000)
		    : ((0x10eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
		        ? VL_ULL(0x10000000000054) : 
		       ((0x10dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					      >> 3U)))
			 ? VL_ULL(0xf01000008000000)
			 : ((0x10cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
			     ? VL_ULL(0x300000003000000)
			     : ((0x10bU == (0x1ffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					       >> 3U)))
				 ? VL_ULL(0xe201000004000000)
				 : ((0x10aU == (0x1ffU 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						   >> 3U)))
				     ? VL_ULL(0x300000004000000)
				     : ((0x109U == 
					 (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
					 ? VL_ULL(0xd101000004000000)
					 : ((0x108U 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x300000000000000)
					     : ((0x107U 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x30747261752c6576)
						 : 
						((0x106U 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x696669731b000000)
						  : 
						 ((0x105U 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0xd00000003000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_260)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3986(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3986\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_last)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_in_1_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_request_refill));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3988(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3988\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->__Vdly__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[6U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_24[6U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[6U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_24[6U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3989(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3989\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT___T_38));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3990(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3990\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1199)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3991(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3991\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1292)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3992(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3992\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_12__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_12__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_12__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3993(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3993\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_13__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_13__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_13__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1478)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3994(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3994\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_120 
	= ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_110 
				      >> 0x10U)) | 
	   (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_110 
					  << 0x10U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__last_vpn_translated_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___GEN_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_1_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__last_vpn_translated_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT___T_34) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT___T_60) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1772 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1720) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1728)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_28 
	= (3U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1720) 
		   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1899))) 
		  & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)))
		  ? ((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data)))
		  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_31 
	= (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1720) 
			& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1969))) 
		       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
					>> 1U)))) ? 
		      ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data))
		       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3995(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3995\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1771 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_d_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__en 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__inWriteback)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_replay_next));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_word_en 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_replay_next)
		  ? ((IData)(1U) << (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_addr 
						   >> 3U))))
		  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__inWriteback)
		      ? 3U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_did_read)
			       ? ((IData)(1U) << (1U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 3U))))
			       : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__dcache_kill_mem 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_648) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_replay_next));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_way_en 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting)
		    ? 0xfU : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid)
			       ? ((0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
				   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_way)
				   : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_782)))
			       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid)
				   ? ((0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
				       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_way)
				       : ((IData)(1U) 
					  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_782)))
				   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884)
				       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_way)
				       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_way))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_idx 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__flushCounter)
		     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid)
			 ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_vaddr 
				    >> 6U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid)
					        ? (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_vaddr 
							   >> 6U))
					        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_4_valid)
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address 
						    >> 6U)
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_6_valid)
						     ? 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state))
						      ? 
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address 
						      >> 6U)
						      : 
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_address___05FT_18_data 
						      >> 6U))
						     : (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_mem_req_bits_addr 
								>> 6U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3996(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3996\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___GEN_19 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid)
	    ? ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3790))
		  ? 1U : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3790))
			   ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3790))
				    ? 2U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3790))
					     ? 3U : 0U)))) 
		<< 0x14U) | (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						 >> 0xcU))))
	    : ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884)
		  ? ((3U == (8U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
		      ? 2U : ((2U == (8U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
			       ? 2U : ((1U == (8U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
				        ? 1U : ((0U 
						 == 
						 (8U 
						  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						 ? 0U
						 : 
						((7U 
						  == 
						  (8U 
						   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						  ? 1U
						  : 
						 ((6U 
						   == 
						   (8U 
						    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						   ? 1U
						   : 
						  ((5U 
						    == 
						    (8U 
						     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))
						    ? 1U
						    : 0U)))))))
		  : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
		      ? 2U : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
			       ? 2U : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
				        ? 1U : ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
						 ? 0U
						 : 
						((7U 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
						  ? 1U
						  : 
						 ((6U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
						   ? 1U
						   : 
						  ((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_790))
						    ? 1U
						    : 0U)))))))) 
		<< 0x14U) | (0xfffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address 
					 >> 0xcU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3997(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3997\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_out_bits_write 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_4_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_2 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__resetting) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_3_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_retire 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1162) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_xcpt)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_bht_update_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb))) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_wrong_npc)) 
	   & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_983) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal))) 
	      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_825) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jalr)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_wb) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_illegal_insn 
	= ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_569) 
	       | (((((0x1004U == (0x105cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		     | (0x2000040U == (0x2000070U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		    | (0x2000040U == (0x2000068U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		   | (0x40000050U == (0xd0000078U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		  & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
				>> 3U))))) | ((3U != 
					       (3U 
						& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)) 
					      & (~ (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
							    >> 2U))))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_ctrl_rocc) 
		& ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs)) 
		   | (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
				 >> 0x17U)))))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_csr_en) 
						   & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1185) 
							| ((0x410U 
							    == 
							    (0xc10U 
							     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
								>> 0x14U))) 
							   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) 
						       | ((0U 
							   == 
							   (0x900U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
							       >> 0x14U))) 
							  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_decode_0_fp_illegal))) 
						      | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_csr_ren)) 
							 & (3U 
							    == 
							    (3U 
							     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
								>> 0x1eU))))))) 
	   | ((3U == (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)) 
	      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_553) 
		 & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_880) 
		       | ((0x10000000U == (0x32200000U 
					   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)) 
			  & (~ ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
				| (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw)))))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_828) 
			 & (~ ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
			       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr)))))) 
		     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_828) 
			 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
			    >> 0x1eU)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) 
		    | ((0x2000000U == (0x42000000U 
				       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)) 
		       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_851)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3998(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3998\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1382 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	     & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_wxd) 
		  & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1217) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1264)) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1219) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1266))) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1221) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1268)))) 
		 & ((((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_csr)) 
			| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_jalr)) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_mem)) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_div)) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_fp)) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_rocc))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_wfd) 
		   & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1264)) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
			   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1266))) 
		       | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3) 
			     == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_inst 
					  >> 7U))))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1268)))))) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__data_hazard_mem) 
		   & (((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_csr)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_mem) 
			    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_slow_bypass))) 
			| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_div)) 
		       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_rocc))) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_wfd) 
		     & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
			   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1291)) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
			     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1293))) 
			 | ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3) 
			       == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_inst 
					    >> 7U))))) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
			   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1295))))))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	      & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wxd) 
		   & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1217) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1314)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1219) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1316))) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1221) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1318)))) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_set_sboard)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wfd) 
		    & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1314)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) 
			    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1316))) 
			| ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3) 
			      == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 7U))))) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen) 
			  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1318)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3999(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3999\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1221 
	= (VL_ULL(0x1fffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1147 
				    | vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
				   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___GEN_15 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_939) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051)))
		  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
		  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_8 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_24 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_880 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_2_a_ready) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_994) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1106)))
	    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_994 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_994 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1731)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4000(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4000\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_27 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1722) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1931)))
		    ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data))
		    : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1722 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1722 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_38 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_3) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_need_r));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_wmode 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_397 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_396)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_435 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_434)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_473 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_472)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_511 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_510)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_548)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4001(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4001\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_549 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_548)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_586)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_587 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_586)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 6U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_624)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_625 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 6U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_624)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_wmode 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 7U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_662)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_663 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel) 
		  >> 7U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_662)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_113 
	= ((0x80U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
			 >> 7U)) << 7U)) | ((0x40U 
					     & ((~ 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
						  >> 6U)) 
						<< 6U)) 
					    | ((0x20U 
						& ((~ 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
						     >> 5U)) 
						   << 5U)) 
					       | ((0x10U 
						   & ((~ 
						       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
							>> 4U)) 
						      << 4U)) 
						  | ((8U 
						      & ((~ 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
							   >> 3U)) 
							 << 3U)) 
						     | ((4U 
							 & ((~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
							      >> 2U)) 
							    << 2U)) 
							| ((2U 
							    & ((~ 
								((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum) 
								 >> 1U)) 
							       << 1U)) 
							   | (1U 
							      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4002(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4002\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSum 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSum));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head_pop_head_data 
	= ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits))
	    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__head
	   [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits]
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_286 
	= ((0x11eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				 >> 3U))) ? VL_ULL(0x6361632d6400657a)
	    : ((0x11dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				     >> 3U))) ? VL_ULL(0x69732d6b636f6c62)
	        : ((0x11cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					 >> 3U))) ? VL_ULL(0x2d65686361632d64)
		    : ((0x11bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					     >> 3U)))
		        ? VL_ULL(0x79636e65757165) : 
		       ((0x11aU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					      >> 3U)))
			 ? VL_ULL(0x72662d6b636f6c63)
			 : ((0x119U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						  >> 3U)))
			     ? VL_ULL(0x306c6169726573)
			     : ((0x118U == (0x1ffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					       >> 3U)))
				 ? VL_ULL(0x6c65646f6d0065)
				 : ((0x117U == (0x1ffU 
						& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						   >> 3U)))
				     ? VL_ULL(0x6c62697461706d6f)
				     : ((0x116U == 
					 (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
					 ? VL_ULL(0x6300736c6c65632d)
					 : ((0x115U 
					     == (0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					     ? VL_ULL(0x657a69732300736c)
					     : ((0x114U 
						 == 
						 (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
						 ? VL_ULL(0x6c65632d73736572)
						 : 
						((0x113U 
						  == 
						  (0x1ffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						      >> 3U)))
						  ? VL_ULL(0x6464612309000000)
						  : 
						 ((0x112U 
						   == 
						   (0x1ffU 
						    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						       >> 3U)))
						   ? VL_ULL(0x200000002000000)
						   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_273)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4003(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4003\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_13_0 
	    = (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U] 
			>> 8U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_410_0 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[3U] 
			>> 0x10U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_14_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_425_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_424_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_13_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_13_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_289_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_14_0)
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_14_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_304_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_303_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT___GEN_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
	    << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
			 << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
				      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
						      << 0xbU) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
							 << 0xaU) 
							| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							    << 9U) 
							   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
							       << 8U) 
							      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								  << 7U) 
								 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								     << 6U) 
								    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									<< 5U) 
								       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									   << 4U) 
									  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
									      << 3U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT___GEN_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_51 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
	    << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
			 << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
				      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
						      << 0xbU) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
							 << 0xaU) 
							| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							    << 9U) 
							   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
							       << 8U) 
							      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								  << 7U) 
								 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								     << 6U) 
								    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									<< 5U) 
								       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									   << 4U) 
									  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
									      << 3U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4004(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4004\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1076_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1794_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_241_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_240_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_225_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_224_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_209_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_208_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_193_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_192_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_177_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_176_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1536_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_771 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_768;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1552_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_819 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_816;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1568_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_867 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_864;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1584_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_915 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_912;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1600_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_963 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_960;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1616_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1011 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1008;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1632_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1059 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1056;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1648_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1107 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1104;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1664_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1155 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1152;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1680_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1203 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1200;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1696_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1251 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1248;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1712_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1299 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1296;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1728_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1347 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1344;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4005(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4005\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1744_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1395 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1392;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1760_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1443 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1440;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1776_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1491 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1488;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1216 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1215));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_161_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_160_0;
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_101 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
	    << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
			 << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
				      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
						      << 0xbU) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
							 << 0xaU) 
							| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							    << 9U) 
							   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
							       << 8U) 
							      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								  << 7U) 
								 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								     << 6U) 
								    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									<< 5U) 
								       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									   << 4U) 
									  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
									      << 3U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_63_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_499_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1777_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_498_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1492)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1493)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_15__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_15__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_497_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_15__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_15__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_497_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_497_0));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4006(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4006\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_145_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_144_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_129_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_128_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_113_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_112_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_97_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_96_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_81_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_80_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_65_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_64_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_26[6U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_25[6U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_26[6U] 
	= ((0xff000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x18U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_25[6U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_49_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_48_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_33_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_32_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_17_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_16_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_957_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_956_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4007(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4007\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_159_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4008(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4008\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_159_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1784_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1784_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1514;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1784_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1516 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1513;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1784_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_761_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1513)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1514)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___GEN_1)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_971_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_970_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_984_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_dataflow___05FT_18_data)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1798_0
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1799_0);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1801_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_958)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_959)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_319_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_319_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_319_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1802_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_958)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_959)
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__c1
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__c2)
		        : ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___GEN_1 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT___GEN_1)));
}
