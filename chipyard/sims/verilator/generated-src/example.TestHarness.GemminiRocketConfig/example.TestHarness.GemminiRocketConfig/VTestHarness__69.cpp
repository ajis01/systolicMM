// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3709(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3709\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_236_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_236_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1384;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_718_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1384)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_205_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_476_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1754_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_475_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1423)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1424)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_474_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_474_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_474_0));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3710(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3710\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1434)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_78);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1432) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_733_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_190_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_491_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1769_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_490_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1468)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1469)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_489_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_489_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_489_0));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3711(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3711\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3712(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3712\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_222_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_222_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1478;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1477;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_749_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1477)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1478)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT___GEN_1)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359479
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_954 
	= (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_pc 
				   + (((QData)((IData)(
						       (0xffU 
							& VL_NEGATE_I((IData)(
									      (1U 
									       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_952 
										>> 0x1fU))))))) 
				       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_952)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__cmdHi 
	= ((1U == (5U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	   | (2U == (2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3713(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3713\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__lhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
	       ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in1 
			  >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in1 
						>> 0x1fU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (4U == (5U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
	       ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
			  >> 0x3fU)) : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
						>> 0x1fU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv 
	= ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
	    ? (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_36 
	= ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin_r 
	= (((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
			      ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
					 >> 0x20U))
			      : ((1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
					 >> 3U) & (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
							   >> 0x1fU))))
				  ? 0xffffffffU : 0U)))) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3714(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3714\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2095 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3) 
	    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2) 
		       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1) 
				  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_48 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_49 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_50 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_out_valid 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_chosen))
	    ? (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__state))
	    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_chosen))
	        ? (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__state))
	        : (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__res_v 
	= (1U & ((1U & (((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
				  >> 1U)) | (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
						     >> 2U))) 
			| (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
				   >> 3U)))) ? ((~ 
						 ((1U 
						   >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)) 
						  & (0U 
						     != 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
								 >> 0xaU)))))) 
						& ((~ 
						    ((0U 
						      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)) 
						     & (0U 
							!= 
							(0x1ffU 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
								    >> 0x13U)))))) 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data)))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3715(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3715\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__cacheable 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_244 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	   & (((((VL_ULL(0) == (VL_ULL(0x84010000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
		 | (VL_ULL(0) == (VL_ULL(0x84000000) 
				  & (VL_ULL(0x4000000) 
				     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
		| (VL_ULL(0) == (VL_ULL(0x86010000) 
				 & (VL_ULL(0x4000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x86010000) 
				& (VL_ULL(0x2010000) 
				   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
	      | (VL_ULL(0) == (VL_ULL(0x80000000) & 
			       (VL_ULL(0x80000000) 
				^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_37 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_28)) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		     < (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
				    << 2U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3716(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3716\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_653 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_556)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_125 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_116)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_28))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_213 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_204)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_116))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3717(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3717\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_301 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_292)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_204))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_389 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_380)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_292))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_477 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_468)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_380))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3718(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3718\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_565 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr) 
		       ^ (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
				      << 2U))))) & 
		      (~ (3U | (0xfffffffcU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
					       << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_556)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_468))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & ((((VL_ULL(0) == (VL_ULL(0x84000000) & 
			       (VL_ULL(0x4000000) ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
		| (VL_ULL(0) == (VL_ULL(0x86010000) 
				 & (VL_ULL(0x2000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x82012000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))) 
	      | (VL_ULL(0) == (VL_ULL(0x86012000) & 
			       (VL_ULL(0x2010000) ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_244 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & (((((VL_ULL(0) == (VL_ULL(0x84010000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
		 | (VL_ULL(0) == (VL_ULL(0x84000000) 
				  & (VL_ULL(0x4000000) 
				     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
		| (VL_ULL(0) == (VL_ULL(0x86010000) 
				 & (VL_ULL(0x4000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x86010000) 
				& (VL_ULL(0x2010000) 
				   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))) 
	      | (VL_ULL(0) == (VL_ULL(0x80000000) & 
			       (VL_ULL(0x80000000) 
				^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3719(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3719\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1469 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1233 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1226) 
		  | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1233) 
		     & ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			< (7U & (~ (3U | (~ (4U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						   << 2U)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1519 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
					       << 2U)))))))
		  : (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1233) 
			& (0U != ((~ (3U | (~ (4U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						<< 2U))))) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3720(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3720\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_147 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_57) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_23) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_343 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_253) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_57) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3721(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3721\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_539 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_449) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_253) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_735 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_645) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_449) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3722(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3722\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_931 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_841) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_645) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1127 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1037) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_841) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3723(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3723\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1323 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
		  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))) 
				  & (~ (3U | (4U & 
					      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
					       << 2U)))))))
		  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1233) 
			 & (0U != (7U & ((~ (3U | (~ 
						   (4U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						       << 2U))))) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)))))) 
			| ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1037) 
			   & (0U != ((~ (3U | (~ (4U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						     << 2U))))) 
				     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_97 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_23 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_50) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_57) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						    << 2U)))))))))) 
		  & (((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
					      >> 3U))) 
		      < (0x1fffffffU & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
					       << 2U)) 
					   >> 3U)))) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_23) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3724(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3724\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_293 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_57 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_246) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_253) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_50) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_57) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_489 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_253 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_442) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_449) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_246) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_253) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3725(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3725\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_685 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_449 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_638) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_645) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_442) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_449) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_881 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_645 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_834) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_841) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_638) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_645) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3726(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3726\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1077 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_841 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1030) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1037) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_834) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_841) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						   << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1273 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1037 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
			     >> 1U)))) & (0U == (7U 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (4U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| ((4U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
							       << 2U)) 
							   | (~ 
							      (0x3fU 
							       & ((IData)(7U) 
								  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size)))))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1226) 
		      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1233) 
			 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_60) 
			    < (7U & (~ (3U | (~ (4U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						    << 2U)))))))))) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1030) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1037) 
			& ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
			   < (7U & (~ (3U | (~ (4U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						   << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3727(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3727\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_resp_valid) 
	   & (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__prot_eff 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__legal_address) 
	   & ((((VL_ULL(0) == (VL_ULL(0x84000000) & 
			       (VL_ULL(0x4000000) ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr))) 
		| (VL_ULL(0) == (VL_ULL(0x86010000) 
				 & (VL_ULL(0x2000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x82012000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr))) 
	      | (VL_ULL(0) == (VL_ULL(0x86012000) & 
			       (VL_ULL(0x2010000) ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_244 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__legal_address) 
	   & (((((VL_ULL(0) == (VL_ULL(0x84010000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 | (VL_ULL(0) == (VL_ULL(0x84000000) 
				  & (VL_ULL(0x4000000) 
				     ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))) 
		| (VL_ULL(0) == (VL_ULL(0x86010000) 
				 & (VL_ULL(0x4000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))) 
	       | (VL_ULL(0) == (VL_ULL(0x86010000) 
				& (VL_ULL(0x2010000) 
				   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))) 
	      | (VL_ULL(0) == (VL_ULL(0x80000000) & 
			       (VL_ULL(0x80000000) 
				^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3728(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3728\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__cacheable 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
						  ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1519 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
		  >> 1U) | (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1233) 
			       & (0U != (0x3fU & ((~ 
						   (3U 
						    | (~ 
						       (0x3cU 
							& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
							   << 2U))))) 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1244 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1233) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						  << 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_147 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_57) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_23) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3729(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3729\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_68 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_57) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						  << 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_343 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_253) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_57) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_264 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_253) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						  << 2U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3730(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3730\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_539 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_449) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_253) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_460 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_449) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						  << 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_735 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_645) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_449) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3731(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3731\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_656 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_645) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						  << 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_931 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_841) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_645) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_852 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_841) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						  << 2U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3732(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3732\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1127 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1037) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_841) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1323 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
		  >> 1U) | (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1233) 
				& (0U != (0x3fU & (
						   (~ 
						    (3U 
						     | (~ 
							(0x3cU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
							    << 2U))))) 
						   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))) 
			       | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1037) 
				  & (0U != (0x3fU & 
					    ((~ (3U 
						 | (~ 
						    (0x3cU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
							<< 2U))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3733(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3733\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1379,95,0,3);
    VL_SIGW(__Vtemp1380,95,0,3);
    VL_SIGW(__Vtemp1386,95,0,3);
    VL_SIGW(__Vtemp1387,95,0,3);
    VL_SIGW(__Vtemp1389,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1048 
	= (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
				   >> 6U))) < (0x3ffffffU 
					       & (~ 
						  ((~ 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						     << 2U)) 
						   >> 6U)))) 
	   | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1037) 
	      & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
		 < (0x3fU & (~ (3U | (~ (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						  << 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_124 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pte_cache_hit 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits)) 
	   & (2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)));
    __Vtemp1379[0U] = (0xc000000U ^ (0xfffffff8U & 
				     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47) 
				      << 3U)));
    __Vtemp1379[1U] = ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47) 
			      >> 0x1dU)) | (0xfffffff8U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
							>> 0x20U)) 
					       << 3U)));
    __Vtemp1379[2U] = (7U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
				      >> 0x20U)) >> 0x1dU));
    VL_EXTEND_WW(67,66, __Vtemp1380, __Vtemp1379);
    __Vtemp1386[0U] = (0x80000000U ^ (0xfffffff8U & 
				      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47) 
				       << 3U)));
    __Vtemp1386[1U] = ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47) 
			      >> 0x1dU)) | (0xfffffff8U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
							>> 0x20U)) 
					       << 3U)));
    __Vtemp1386[2U] = (7U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
				      >> 0x20U)) >> 0x1dU));
    VL_EXTEND_WW(67,66, __Vtemp1387, __Vtemp1386);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pmaHomogeneous 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)) 
		   & ((0U == (((0xfc000000U & __Vtemp1380[0U]) 
			       | __Vtemp1380[1U]) | 
			      (7U & __Vtemp1380[2U]))) 
		      | (0U == (((0xf0000000U & __Vtemp1387[0U]) 
				 | __Vtemp1387[1U]) 
				| (7U & __Vtemp1387[2U])))))));
    VL_EXTEND_WI(66,32, __Vtemp1389, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_725 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1389);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3734(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3734\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1390,95,0,3);
    VL_SIGW(__Vtemp1391,95,0,3);
    VL_SIGW(__Vtemp1392,95,0,3);
    VL_SIGW(__Vtemp1393,95,0,3);
    VL_SIGW(__Vtemp1394,95,0,3);
    VL_SIGW(__Vtemp1395,95,0,3);
    // Body
    VL_EXTEND_WI(66,32, __Vtemp1390, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_881 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1390);
    VL_EXTEND_WI(66,32, __Vtemp1391, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_803 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1391);
    VL_EXTEND_WI(66,32, __Vtemp1392, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_569 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1392);
    VL_EXTEND_WI(66,32, __Vtemp1393, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_647 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1393);
    VL_EXTEND_WI(66,32, __Vtemp1394, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_413 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1394);
    VL_EXTEND_WI(66,32, __Vtemp1395, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_491 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1395);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_196 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__invalidated) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_57 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_58 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3735(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3735\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_59 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_64 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_mem_req_valid 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_bht_advance_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_47)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_569)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_83)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_47)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2035 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_req_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1722 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_152 
	= ((7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_146) 
		   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_146) 
				   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_143) 
						<< 2U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageUpdate 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_88) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_88) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_88) 
							>> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_103 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit) 
	   | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit))
	       ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPageRepl)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3736(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3736\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPageReplEn 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__doTgtPageRepl)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPageRepl)
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2060 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2049) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
							>> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_506 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_502) 
		    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_502)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_732 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_705) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_728));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_776 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_749) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_772));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_825 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_798) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_821));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_869 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_842) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_865));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_407 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_405) 
	    | ((0x4000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_26)
	        : 0U)) | ((0x8000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPages_27)
			   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_323 
	= (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit) 
		     << 1U) >> (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_319) 
				 | ((0x4000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
				     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_26)
				     : 0U)) | ((0x8000000U 
						& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPages_27)
					        : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3737(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3737\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_0_btb_entry)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_taken 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_0_btb_taken)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bridx 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_0_btb_bridx)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1084 
	= ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1069) 
			 | (0x32bU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						 >> 0x14U)))) 
			| (0xb0bU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						>> 0x14U)))) 
		       | (0xc0bU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U)))) 
		      | (0x32cU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					      >> 0x14U)))) 
		     | (0xb0cU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))) 
		    | (0xc0cU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
		   | (0x32dU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
		  | (0xb0dU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					  >> 0x14U)))) 
		 | (0xc0dU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					 >> 0x14U)))) 
		| (0x32eU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					>> 0x14U)))) 
	       | (0xb0eU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				       >> 0x14U)))) 
	      | (0xc0eU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				      >> 0x14U)))) 
	     | (0x32fU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				     >> 0x14U)))) | 
	    (0xb0fU == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				  >> 0x14U)))) | (0xc0fU 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3738(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3738\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs3 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0x1bU) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0x1bU) : 
				     ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0x1bU)
				       : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					   ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      >> 0x1bU)
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_897_rs3))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0xfU) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					>> 0xfU) : 
				    ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0xfU) : 
				     ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0xfU) : 
				      ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				        ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					   >> 0xfU)
				        : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					    ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       >> 0xfU)
					    : ((0x19U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					        ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0xfU)
					        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_891_rs1)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 7U) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				   ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 7U) : ((0x1dU 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						 ? 
						(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						 >> 7U)
						 : 
						((0x1cU 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						  ? 
						 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 7U)
						  : 
						 ((0x1bU 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 7U)
						   : 
						  ((0x1aU 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 7U)
						    : 
						   ((0x19U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						     ? 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 7U)
						     : 
						    ((0x18U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						      ? 
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 7U)
						      : 
						     ((0x17U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						       ? 
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 7U)
						       : 
						      ((0x16U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						        ? 
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 7U)
						        : 
						       ((0x15U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							 ? 
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 7U)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_883_rd)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3739(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3739\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2 
	= (0x1fU & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
			>> 0x14U) : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				      ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 0x14U) : 
				     ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
				       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 0x14U)
				       : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					   ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					      >> 0x14U)
					   : ((0x1bU 
					       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
					       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  >> 0x14U)
					       : ((0x1aU 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   >> 0x14U)
						   : 
						  ((0x19U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    >> 0x14U)
						    : 
						   ((0x18U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						     ? 
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     >> 0x14U)
						     : 
						    ((0x17U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						      ? 
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 2U)
						      : 
						     ((0x16U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						       ? 
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       >> 2U)
						       : 
						      ((0x15U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
						        ? 
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							>> 2U)
						        : 
						       ((0x14U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
							 ? 
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 >> 2U)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_881_rs2))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_863_bits 
	= ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	    ? (0x13U | ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
			   ? 0x7fU : 0U) << 0x19U) 
			| ((0x1f00000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  << 0x12U)) 
			   | (0xf80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))))
	    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
	        ? ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
		      ? 0x7fU : 0U) << 0x19U) | ((0x1f00000U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						     << 0x12U)) 
						 | ((0xf8000U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							<< 8U)) 
						    | ((0xf80U 
							& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in) 
						       | ((0U 
							   != 
							   (0x1fU 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							       >> 7U)))
							   ? 0x1bU
							   : 0x1fU)))))
	        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		    ? (0x13U | ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
				   ? 0x7fU : 0U) << 0x19U) 
				| ((0x1f00000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  << 0x12U)) 
				   | ((0xf8000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   << 8U)) 
				      | (0xf80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))))
		    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
		        ? (0x843023U | ((0xe000000U 
					 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_28) 
					    << 0x14U)) 
					| ((0x700000U 
					    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       << 0x12U)) 
					   | ((0x38000U 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						  << 8U)) 
					      | (0xf80U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_28) 
						    << 7U))))))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_855_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3740(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3740\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_158 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_92) 
	     << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_90) 
					 << 0xfU) & 
					(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_92) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_90) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
			 >> 0x11U)))) << 0xeU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_89) 
						    << 0xdU) 
						   | (0xfffe000U 
						      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_87) 
							  << 0xdU) 
							 & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
							    >> 4U)))) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_89) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_87) 
							  & (~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
							      >> 0x11U)))) 
						      << 0xcU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_86) 
							  << 0xbU) 
							 | (0x3fff800U 
							    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_84) 
								<< 0xbU) 
							       & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
								  >> 6U)))) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_86) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_84) 
								& (~ 
								   (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
								    >> 0x11U)))) 
							    << 0xaU) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_83) 
								<< 9U) 
							       | (0xfffe00U 
								  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_81) 
								      << 9U) 
								     & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
									>> 8U)))) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_83) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_81) 
								      & (~ 
									 (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
									  >> 0x11U)))) 
								  << 8U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_80) 
								      << 7U) 
								     | (0x3fff80U 
									& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_78) 
									    << 7U) 
									   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
									      >> 0xaU)))) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_80) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_78) 
									    & (~ 
									       (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0x11U)))) 
									<< 6U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_77) 
									    << 5U) 
									   | (0xfffe0U 
									      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_75) 
										<< 5U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0xcU)))) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_77) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_75) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0x11U)))) 
									      << 4U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_74) 
										<< 3U) 
										| (0x3fff8U 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_72) 
										<< 3U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0xeU)))) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_74) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_72) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0x11U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_71) 
										<< 1U) 
										| (0xfffeU 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_69) 
										<< 1U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0x10U)))) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_71) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_69) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
										>> 0x11U)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3741(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3741\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_99 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_65) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_63) 
		& vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
	    << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_65) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_63) 
			   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
		       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_62) 
				   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_60) 
				      & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
				  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_62) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_60) 
						 & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
					     << 4U) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_59) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_57) 
						    & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						<< 3U) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_59) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_57) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
						   << 2U) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_56) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_54) 
							  & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						      << 1U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_56) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_54) 
							   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_99 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_65) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_63) 
		& vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
	    << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_65) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_63) 
			   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
		       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_62) 
				   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_60) 
				      & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
				  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_62) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_60) 
						 & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
					     << 4U) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_59) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_57) 
						    & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						<< 3U) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_59) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_57) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
						   << 2U) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_56) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_54) 
							  & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						      << 1U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_56) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_54) 
							   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3742(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3742\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_99 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_65) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_63) 
		& vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
	    << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_65) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_63) 
			   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
		       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_62) 
				   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_60) 
				      & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
				  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_62) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_60) 
						 & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
					     << 4U) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_59) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_57) 
						    & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						<< 3U) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_59) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_57) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))) 
						   << 2U) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_56) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_54) 
							  & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address)) 
						      << 1U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_56) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_54) 
							   & (~ vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693 
	= ((~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)) 
	       | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116) 
	      | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_158 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_92) 
	     << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_90) 
					 << 0xfU) & 
					(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_92) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_90) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			 >> 0x11U)))) << 0xeU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_89) 
						    << 0xdU) 
						   | (0xfffe000U 
						      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_87) 
							  << 0xdU) 
							 & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
							    >> 4U)))) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_89) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_87) 
							  & (~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
							      >> 0x11U)))) 
						      << 0xcU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_86) 
							  << 0xbU) 
							 | (0x3fff800U 
							    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_84) 
								<< 0xbU) 
							       & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
								  >> 6U)))) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_86) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_84) 
								& (~ 
								   (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
								    >> 0x11U)))) 
							    << 0xaU) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_83) 
								<< 9U) 
							       | (0xfffe00U 
								  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_81) 
								      << 9U) 
								     & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									>> 8U)))) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_83) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_81) 
								      & (~ 
									 (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									  >> 0x11U)))) 
								  << 8U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_80) 
								      << 7U) 
								     | (0x3fff80U 
									& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_78) 
									    << 7U) 
									   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									      >> 0xaU)))) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_80) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_78) 
									    & (~ 
									       (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
									<< 6U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_77) 
									    << 5U) 
									   | (0xfffe0U 
									      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_75) 
										<< 5U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0xcU)))) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_77) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_75) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
									      << 4U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_74) 
										<< 3U) 
										| (0x3fff8U 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_72) 
										<< 3U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0xeU)))) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_74) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_72) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_71) 
										<< 1U) 
										| (0xfffeU 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_69) 
										<< 1U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x10U)))) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_71) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_69) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3743(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3743\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_156 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_90) 
	     << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_88) 
					 << 0xfU) & 
					(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					 >> 2U)))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_90) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_88) 
		   & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			 >> 0x11U)))) << 0xeU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_87) 
						    << 0xdU) 
						   | (0xfffe000U 
						      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_85) 
							  << 0xdU) 
							 & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
							    >> 4U)))) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_87) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_85) 
							  & (~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
							      >> 0x11U)))) 
						      << 0xcU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_84) 
							  << 0xbU) 
							 | (0x3fff800U 
							    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_82) 
								<< 0xbU) 
							       & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
								  >> 6U)))) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_84) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_82) 
								& (~ 
								   (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
								    >> 0x11U)))) 
							    << 0xaU) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_81) 
								<< 9U) 
							       | (0xfffe00U 
								  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_79) 
								      << 9U) 
								     & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									>> 8U)))) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_81) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_79) 
								      & (~ 
									 (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									  >> 0x11U)))) 
								  << 8U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_78) 
								      << 7U) 
								     | (0x3fff80U 
									& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_76) 
									    << 7U) 
									   & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
									      >> 0xaU)))) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_78) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_76) 
									    & (~ 
									       (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
									<< 6U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_75) 
									    << 5U) 
									   | (0xfffe0U 
									      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_73) 
										<< 5U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0xcU)))) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_75) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_73) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
									      << 4U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_72) 
										<< 3U) 
										| (0x3fff8U 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_70) 
										<< 3U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0xeU)))) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_72) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_70) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_69) 
										<< 1U) 
										| (0xfffeU 
										& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_67) 
										<< 1U) 
										& (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x10U)))) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_69) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_67) 
										& (~ 
										(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
										>> 0x11U)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3744(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3744\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_69 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_54) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_67))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_54) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_70))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_57) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_73))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_57) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_76))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_81 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_60) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_79))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_60) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_82))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3745(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3745\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_87 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_63) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_85))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_90 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_63) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_88))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1858 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__nestC 
	= ((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_status_bits_nestC)) 
		      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
			  >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_status_bits_nestC))) 
		     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
			 >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_status_bits_nestC))) 
		    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
			>> 3U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_status_bits_nestC))) 
		   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_status_bits_nestC))) 
		  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		      >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_status_bits_nestC))) 
		 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_status_bits_nestC))) 
		| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_status_bits_nestC))) 
	       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		   >> 8U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_status_bits_nestC))) 
	      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		  >> 9U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_status_bits_nestC))) 
	     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		 >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_status_bits_nestC))) 
	    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
		>> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_status_bits_nestC))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3746(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3746\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__prioFilter));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_420 
	= (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_417 
	   | (0xffff00U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_417 
			   << 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1249 
	= (0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1175) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_27)) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_28))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_1)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_out_ar_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_out_ar_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		      & ((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid 
	= (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid 
	= (0x3fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid 
	= (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 4U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3747(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3747\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid 
	= (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 9U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 0xbU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12_io_enq_valid 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		   & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		      >> 0xcU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3748(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3748\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13_io_enq_valid 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xdU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14_io_enq_valid 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xeU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15_io_enq_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_53) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xfU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		      & ((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id)))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid 
	= (0x7fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid 
	= (0x3fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid 
	= (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		      & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			 >> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20_io_enq_valid 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 4U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3749(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3749\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21_io_enq_valid 
	= (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22_io_enq_valid 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23_io_enq_valid 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		     & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
			>> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24_io_enq_valid 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25_io_enq_valid 
	= (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 9U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26_io_enq_valid 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27_io_enq_valid 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		    & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		       >> 0xbU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28_io_enq_valid 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		   & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		      >> 0xcU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3750(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3750\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29_io_enq_valid 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xdU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30_io_enq_valid 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xeU)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31_io_enq_valid 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_180) 
		 & (((IData)(1U) << (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id))) 
		    >> 0xfU)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_1)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_out_aw_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_out_aw_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_169 
	= ((0xa9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0xab01000004000000)
	    : ((0xa8U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x3000000006c6f72)
	        : ((0xa7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x746e6f63a1010000)
		    : ((0xa6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x800000003000000)
		        : ((0xa5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
			    ? VL_ULL(0x10000000000102)
			    : ((0xa4U == (0x1ffU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))
			        ? VL_ULL(0xf01000008000000)
			        : ((0xa3U == (0x1ffU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						 >> 3U)))
				    ? VL_ULL(0x300000002000000)
				    : ((0xa2U == (0x1ffU 
						  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						     >> 3U)))
				        ? VL_ULL(0xfe00000004000000)
				        : ((0xa1U == 
					    (0x1ffU 
					     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						>> 3U)))
					    ? VL_ULL(0x300000000000000)
					    : ((0xa0U 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0x6568636163003065)
					        : (
						   (0x9fU 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x6863616365766973)
						    : 
						   ((0x9eU 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x756c636e692c6576)
						     : 
						    ((0x9dU 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0x696669731b000000)
						      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_156)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3753(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3753\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT___T_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_10 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_7) 
	   | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_7) 
		       << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3754(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3754\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_686 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_612 
			| vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_8 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_178) 
		       & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data))) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_8 
	= (0x7fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_178) 
		       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			  >> 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_8 
	= (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_178) 
		       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			  >> 2U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_8 
	= (0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_178) 
		       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			  >> 3U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_155 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_144) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_148)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_151)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_183 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_172) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_176)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_179)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_211 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_200) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_204)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_207)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3755(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3755\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_239 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_228) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_232)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_235)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_267 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_256) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_260)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_263)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_295 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_284) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_288)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_291)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_323 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_312) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_316)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_319)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_351 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_340) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_344)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_347)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_379 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_368) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_372)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_375)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_407 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_396) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_400)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_403)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_435 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_424) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_428)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_431)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_463 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_452) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_456)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_459)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_491 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_480) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_484)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_487)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_519 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_508) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_512)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_515)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_547 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_536) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_540)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_543)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_575 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_564) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_568)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_571)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_603 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_592) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_596)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_599)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_631 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_620) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_624)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_627)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3756(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3756\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_659 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_648) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_652)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_655)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_687 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_676) 
		  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_680)) 
		 - (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_683)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_16[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_16[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_16[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_16[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_17[4U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_16[4U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_16[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_16[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_16[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_16[3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_17[4U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_16[4U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3757(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3757\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_8 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state))
	     ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_4)) 
		& (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_inst_funct___05FT_18_data)))
	     : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state)) 
		& ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_63)))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_408 
	= (((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								   (0xc000000U 
								    ^ 
								    ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
								      << 0xfU) 
								     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
									>> 0x11U))))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
			       & (QData)((IData)((0x2000000U 
						  ^ 
						  ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
						    << 0xfU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
						      >> 0x11U)))))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								    ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
								      << 0xfU) 
								     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
									>> 0x11U))))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								   (0x54000000U 
								    ^ 
								    ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
								      << 0xfU) 
								     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
									>> 0x11U)))))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x2010000U 
								   ^ 
								   ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
								     << 0xfU) 
								    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
								       >> 0x11U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3758(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3758\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_365 
	= ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
			     >> 0x16U))) & (VL_ULL(0) 
					    == (VL_ULL(0x1fffff000) 
						& (QData)((IData)(
								  (0x3000U 
								   ^ 
								   ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
								     << 0xfU) 
								    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
								       >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_994) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1106)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
					>> 0x11U)))
	    : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_39 
	= (1U & ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
				 >> 0x16U))) | (1U 
						& ((((IData)(1U) 
						     << 
						     (3U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
							 >> 0x16U))) 
						    >> 3U) 
						   & (~ 
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
						       >> 0x14U))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_42 
	= (1U & ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
				 >> 0x16U))) | (1U 
						& ((((IData)(1U) 
						     << 
						     (3U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
							 >> 0x16U))) 
						    >> 3U) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
						      >> 0x14U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_46 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
		     >> 0x14U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
				      >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_49 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
		     >> 0x14U)) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
				   >> 0x13U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3759(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3759\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_52 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
		  >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
				  >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_55 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
		  >> 0x14U) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
			       >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_195 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1481)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_48)
		     ? ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1469)
			 : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1469)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent)))
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_read_resp_ready)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_deq_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_deq_ready) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_2) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_resp_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_0_fromDMA)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_24) 
		    & (3U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_laddr_data___05FT_18_data) 
				    >> 0xcU))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_resp_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_0_fromDMA)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_24) 
		    & (2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_laddr_data___05FT_18_data) 
				    >> 0xcU))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_resp_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_0_fromDMA)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_24) 
		    & (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_laddr_data___05FT_18_data) 
				    >> 0xcU))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3760(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3760\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_resp_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_0_fromDMA)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___T_24) 
		    & (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_laddr_data___05FT_18_data) 
				    >> 0xcU))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3761(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3761\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3762(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3762\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1391)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_66))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3763(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3763\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1484)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_66))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_btb_bht_history 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_2_0_btb_bht_history)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_966 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jalr) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_sfence))
	    ? (((QData)((IData)((1U & (((0U == (0x1ffffffU 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_wdata 
							   >> 0x27U)))) 
					| (0x1ffffffU 
					   == (0x1ffffffU 
					       & (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_wdata 
							  >> 0x27U)))))
				        ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_wdata 
						   >> 0x27U))
				        : (~ (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_wdata 
						      >> 0x26U))))))) 
		<< 0x27U) | (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_wdata))
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_954);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3764(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3764\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
	   ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu_io_adder_out 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
	    + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in2_inv) 
	   + (QData)((IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
				    >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT___T_45 
	= ((QData)((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin_r 
			    >> 0x20U))) | (VL_ULL(0xffffffff00000000) 
					   & ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__shin_r)) 
					      << 0x20U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2101 
	= (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
			  >> 2U))) << 1U) | (1U & (
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
						      >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hits 
	= ((0x2000U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
		       << 0xdU)) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
				     << 0xcU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
						  << 0xbU) 
						 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
						     << 0xaU) 
						    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
							<< 9U) 
						       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
							   << 8U) 
							  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
							      << 7U) 
							     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
								 << 6U) 
								| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_679)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1004 
	= (0xfffffU & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)
			        ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
					   >> 0xeU))
			        : 0U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1)
					  ? (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
						     >> 0xeU))
					  : 0U)) | 
			     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2)
			       ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
					  >> 0xeU))
			       : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3)
					  ? (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
						     >> 0xeU))
					  : 0U)) | 
			   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4)
			     ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
					>> 0xeU)) : 0U)) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5)
			      ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
					 >> 0xeU)) : 0U)) 
			 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6)
			     ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
					>> 0xeU)) : 0U)) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7)
			    ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
				       >> 0xeU)) : 0U)) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8)
			   ? ((0xc0000U & ((IData)(
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
						    >> 0x20U)) 
					   << 0x12U)) 
			      | ((0x3fe00U & ((0xfffffe00U 
					       & ((1U 
						   > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level))
						   ? (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							      >> 0xcU))
						   : 0U)) 
					      | (0xffe00U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
							    >> 0xeU))))) 
				 | (0x1ffU & ((IData)(
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 0xcU)) 
					      | (0xfffffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
							    >> 0xeU)))))))
			   : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3765(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3765\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
	    << 0xcU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
			 << 0xbU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
				      << 0xaU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
						   << 9U) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
						      << 8U) 
						     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
							 << 7U) 
							| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
							    << 6U) 
							   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_679))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_55 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb_io_out_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse 
	= ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__res_v) 
	       & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			     >> 1U)))) & (~ (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
						     >> 2U)))) 
	     & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
			   >> 3U)))) & (VL_ULL(0) == 
					(VL_ULL(0x3ffffffff) 
					 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
					    >> 0x1eU)))) 
	   & (2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_x 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
	     & ((VL_ULL(0) == (VL_ULL(0x86000000) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
		| (VL_ULL(0) == (VL_ULL(0x80000000) 
				 & (VL_ULL(0x80000000) 
				    ^ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_653)
	       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_655))
	       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_565)
		   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_567))
		   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_477)
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
			  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_479))
		       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_389)
			   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
			      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_391))
			   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_301)
			       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
				  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_303))
			       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_213)
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
				      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_215))
				   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_125)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
					  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_127))
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_37)
					   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
					      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_39))
					   : (1U < 
					      (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_priv))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3766(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3766\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff)
	      ? 3U : 0U) << 0xcU) | ((0x800U & ((IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
							 >> 2U)) 
						<< 0xbU)) 
				     | ((0x400U & ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
							    >> 2U)) 
						   << 0xaU)) 
					| ((0x200U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
							>> 2U)) 
					       << 9U)) 
					   | ((0x100U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
							   >> 2U)) 
						  << 8U)) 
					      | ((0x80U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
							      >> 2U)) 
						     << 7U)) 
						 | ((0x40U 
						     & ((IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
								 >> 2U)) 
							<< 6U)) 
						    | ((0x20U 
							& ((IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
								    >> 2U)) 
							   << 5U)) 
						       | ((0x10U 
							   & ((IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
								       >> 2U)) 
							      << 4U)) 
							  | ((8U 
							      & ((IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
									  >> 2U)) 
								 << 3U)) 
							     | ((4U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
									     >> 2U)) 
								    << 2U)) 
								| ((2U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
										>> 2U)) 
								       << 1U)) 
								   | (1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
										>> 2U)))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable)
	      ? 3U : 0U) << 0xcU) | ((0x800U & ((IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
							 >> 1U)) 
						<< 0xbU)) 
				     | ((0x400U & ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
							    >> 1U)) 
						   << 0xaU)) 
					| ((0x200U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
							>> 1U)) 
					       << 9U)) 
					   | ((0x100U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
							   >> 1U)) 
						  << 8U)) 
					      | ((0x80U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
							      >> 1U)) 
						     << 7U)) 
						 | ((0x40U 
						     & ((IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
								 >> 1U)) 
							<< 6U)) 
						    | ((0x20U 
							& ((IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
								    >> 1U)) 
							   << 5U)) 
						       | ((0x10U 
							   & ((IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
								       >> 1U)) 
							      << 4U)) 
							  | ((8U 
							      & ((IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
									  >> 1U)) 
								 << 3U)) 
							     | ((4U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
									     >> 1U)) 
								    << 2U)) 
								| ((2U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
										>> 1U)) 
								       << 1U)) 
								   | (1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
										>> 1U)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3767(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3767\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_r 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1469)
	       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1519) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1471)))
	       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1273)
		   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1323) 
		      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
			 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1275)))
		   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1077)
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1127) 
			  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
			     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079)))
		       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_881)
			   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_931) 
			      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_883)))
			   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_685)
			       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_735) 
				  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
				     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_687)))
			       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_489)
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_539) 
				      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
					 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_491)))
				   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_293)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_343) 
					  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
					     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_295)))
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_97)
					   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_147) 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
						 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_99)))
					   : (1U < 
					      (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_priv))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_w 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_244) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1469)
	       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1519) 
		  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1471)))
	       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1273)
		   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1323) 
		      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
			 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1275)))
		   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1077)
		       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1127) 
			  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
			     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1079)))
		       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_881)
			   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_931) 
			      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_883)))
			   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_685)
			       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_735) 
				  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
				     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_687)))
			       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_489)
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_539) 
				      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
					 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_491)))
				   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_293)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_343) 
					  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
					     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_295)))
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_97)
					   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_147) 
					      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
						 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_99)))
					   : (1U < 
					      (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_priv))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3768(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3768\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___T_18 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_1_resp_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__replaying));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_dcache_miss 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_mem) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_resp_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__dmem_resp_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_2_resp_valid) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_433) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_472)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__c_array 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__cacheable)
	      ? 3U : 0U) << 5U) | ((0x10U & ((IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_data_0 
						      >> 1U)) 
					     << 4U)) 
				   | ((8U & ((IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_data_0 
						      >> 1U)) 
					     << 3U)) 
				      | ((4U & ((IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_data_0 
							 >> 1U)) 
						<< 2U)) 
					 | ((2U & ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_data_0 
							    >> 1U)) 
						   << 1U)) 
					    | (1U & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_7 
							     >> 1U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1469 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1233 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_289 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1244)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_97 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_23 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_68)) 
		  & (((0x3ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr 
					     >> 6U))) 
		      < (0x3ffffffU & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
					      << 2U)) 
					  >> 6U)))) 
		     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_23) 
			& ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr)) 
			   < (0x3fU & (~ (3U | (~ (0x3cU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						      << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3769(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3769\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_293 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_57 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_343 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_264)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_68))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_489 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_253 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_334 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_460)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_264))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3770(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3770\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_685 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_449 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_325 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_656)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_460))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_881 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_645 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_316 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_852)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_656))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3771(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3771\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1077 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_841 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_307 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1048)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_852))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1273 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1037 
		       & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
			     >> 4U)))) & (0U == (0x3fU 
						 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__mpu_physaddr) 
						     ^ 
						     (~ 
						      (3U 
						       | (~ 
							  (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
							      << 2U)))))) 
						    & (~ 
						       (3U 
							| (0x3cU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_298 
							      << 2U))))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1244)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__pmp__DOT___T_1048))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3772(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3772\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1398,95,0,3);
    VL_SIGW(__Vtemp1399,95,0,3);
    VL_SIGW(__Vtemp1400,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_131 
	= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__hits) 
			    >> 4U))) << 2U) | (((0U 
						 != 
						 (3U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_124) 
						     >> 2U))) 
						<< 1U) 
					       | (1U 
						  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_124) 
						      >> 3U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_124) 
							>> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_995 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pte_cache_hit));
    __Vtemp1398[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
						  >> 9U))) 
				      << 0xcU));
    __Vtemp1398[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
					   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
					      >> 9U))) 
				  >> 0x14U)) | (0xfffff000U 
						& ((IData)(
							   ((VL_ULL(0x3fffffffffffff) 
							     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
								>> 9U)) 
							    >> 0x20U)) 
						   << 0xcU)));
    __Vtemp1398[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
					   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_47 
					      >> 9U)) 
					  >> 0x20U)) 
				 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp1399, (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						  << 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp1400, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_399));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_964 
	= (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
		  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
		       ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
			  >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
				     ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
					>> 9U) : ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
						   >> 0x12U)
						   : 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_352 
						   >> 0x1bU)))) 
		     | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
			 ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
					  & (((QData)((IData)(
							      vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[2U])) 
					      << 0x34U) 
					     | (((QData)((IData)(
								 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[1U])) 
						 << 0x14U) 
						| ((QData)((IData)(
								   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[0U])) 
						   >> 0xcU)))))
			 : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
			     ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
					      & (((QData)((IData)(
								  vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[2U])) 
						  << 0x34U) 
						 | (((QData)((IData)(
								     vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[1U])) 
						     << 0x14U) 
						    | ((QData)((IData)(
								       vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[0U])) 
						       >> 0xcU)))))
			     : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))
				 ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
						  & (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[2U])) 
						      << 0x2bU) 
						     | (((QData)((IData)(
									 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[1U])) 
							 << 0xbU) 
							| ((QData)((IData)(
									   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[0U])) 
							   >> 0x15U)))))
				 : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
						  & (((QData)((IData)(
								      vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[2U])) 
						      << 0x22U) 
						     | (((QData)((IData)(
									 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[1U])) 
							 << 2U) 
							| ((QData)((IData)(
									   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_902[0U])) 
							   >> 0x1eU)))))))))
		  : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)) 
		     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_881) 
			 | VL_GTE_W(3, __Vtemp1398, __Vtemp1399)) 
			| ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_860)) 
			   & VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_400, __Vtemp1400))))));
}
