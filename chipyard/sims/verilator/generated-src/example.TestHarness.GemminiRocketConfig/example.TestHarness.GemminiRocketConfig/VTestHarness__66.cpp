// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3541(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3541\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1298 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1277) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6 
		 >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1301 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1277) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6 
	      >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1279 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1267) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1277))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1304 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1280) 
	   & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6 
		 >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1307 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1280) 
	   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_6 
	      >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1282 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1267) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1280))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytes_written_this_beat 
	= (0x1fU & ((0xfU & ((7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_121) 
					   + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_122))) 
				    + (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_123) 
					     + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_124))))) 
			     + (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_125) 
					     + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_126))) 
				      + (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_127) 
					       + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_128))))))) 
		    + (0xfU & ((7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_129) 
					     + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_130))) 
				      + (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_131) 
					       + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_132))))) 
			       + (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_133) 
					       + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_134))) 
					+ (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_135) 
						 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_136)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3542(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3542\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_964_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_963_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1529))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1527)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1788_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1525) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1525) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_78);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1788_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1525) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1525) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_764_0));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_978_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_977_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_991_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_990_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1003_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1002_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1014_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1013_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1024_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1023_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1033_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1032_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3543(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3543\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1041_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1040_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1048_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1047_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1054_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_dataflow___05FT_18_data)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1819_0
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1820_0);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1822_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_431_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_431_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_431_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1823_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1294)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295)
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c1
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__c2)
		        : ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___GEN_1 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT___GEN_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_447_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1339)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1340)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_446_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_446_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_446_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1727_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1342) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1342) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3544(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3544\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1727_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1342) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1342) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_703_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_252_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_463_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_462_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1384)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_461_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_461_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_461_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_252_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_252_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1743_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1391 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3545(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3545\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1390 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_719_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1387)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_237_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_478_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1756_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_477_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1429)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1430)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_476_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_476_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_476_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__last_s) 
	    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1439))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1437)
	    : 0U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1758_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1435) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1435) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c1 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436)
		    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0)
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_78);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3546(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3546\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1758_0) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1435) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1435) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c2 
			= ((0xfff80000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0 
								   >> 0x12U)))) 
					   << 0x13U)) 
			   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0);
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__c2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_40
		    : ((0xfff80000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0 
							       >> 0x12U)))) 
				       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_734_0));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_38 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_222_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_493_0)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1771_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_492_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1474)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475)
			        ? (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_86) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_86)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_491_0)
			        : (((0x70000U & (VL_NEGATE_I((IData)(
								     (1U 
								      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_92) 
									 >> 0xfU)))) 
						 << 0x10U)) 
				    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT___T_92)) 
				   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_491_0))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_491_0));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_28 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_20 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c1, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c1 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_20))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c1, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c1 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_20))
					  ? 1U : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3547(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3547\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_66 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_58 
	   + ((0xfffffffcU & (VL_NEGATE_I((IData)((1U 
						   & (((((0U 
							  != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset)) 
							 & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c2, 
									  (0x1fU 
									   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
									      - (IData)(1U))))) 
							& ((0U 
							    != 
							    ((1U 
							      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset))
							      ? 0U
							      : 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c2 
							      & (((IData)(1U) 
								  << 
								  (0x1fU 
								   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
								      - (IData)(1U)))) 
								 - (IData)(1U))))) 
							   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_58))
						        ? 1U
						        : 0U) 
						      >> 1U)))) 
			      << 2U)) | ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset)) 
					   & VL_SHIFTRS_III(1,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c2, 
							    (0x1fU 
							     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
								- (IData)(1U))))) 
					  & ((0U != 
					      ((1U 
						>= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset))
					        ? 0U
					        : (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__c2 
						   & (((IData)(1U) 
						       << 
						       (0x1fU 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__shift_offset) 
							   - (IData)(1U)))) 
						      - (IData)(1U))))) 
					     | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_58))
					  ? 1U : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_78 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_92 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_238_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c1)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_40 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___GEN_20 
	   + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3548(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3548\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT___T_86 
	= (0xffffU & VL_MULS_III(16,16,16, (0xffffU 
					    & VL_EXTENDS_II(16,8, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_238_0))), 
				 (0xffffU & VL_EXTENDS_II(16,8, 
							  (0xffU 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__c2)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1774_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1484 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1483 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_750_0 
	    = (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1480)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481)
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c1
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__c2)
			    : ((0xfff80000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___GEN_1 
								       >> 0x12U)))) 
					       << 0x13U)) 
			       | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___GEN_1)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_955 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	    << 7U) | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_884) 
			       >> 1U)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_btb_resp_bht_history 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_bht_history;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_branch 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_branch;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_br_taken 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
			 ^ ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__slt)
			     : (VL_ULL(0) == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2))));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_debug_breakpoint 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_load) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_38) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_store) 
	      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_70) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3549(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3549\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1252 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__read_stvec
	    : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_388)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug 
	= (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)) 
	    | (0xfU & (((~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__cause 
				    >> 0x3fU))) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)) 
		       & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
			    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks) 
				       << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku))) 
			  >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2243) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2262))
	        ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2034) 
			  << 1U)) | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2034) 
					    << 1U) 
					   >> (2U | 
					       (1U 
						& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2034))))))
	        : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2262))
		    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2262))
		        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2262))
			    ? 3U : 2U) : 1U) : 0U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid) 
			 & (~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at PTW.scala:342 assert(state === s_wait3)\n");
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse)
	        ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		   & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_48)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_57)))))
	        : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)) 
		   | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			    & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_48)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_57)))))))
	    : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	       & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		  & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		     & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_48)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_57))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse)
	        ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		   & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_49)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_58)))))
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)) 
		   | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			    & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_49)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_58)))))))
	    : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	       & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		  & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		     & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_49)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_58))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse)
	        ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		   & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_50)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_59)))))
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_req_dest)) 
		   | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			    & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_50)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_59)))))))
	    : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	       & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		  & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		     & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_50)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_59))))));
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_978;
	} else {
	    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count = 0U;
	    } else {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pte_cache_hit) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_978;
		    }
		} else {
		    if ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
			if ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
			    if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
				if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__homogeneous)))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count = 2U;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count = 0U;
	} else {
	    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__pte_cache_hit) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_978;
		}
	    } else {
		if ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
		    if ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
			if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state))) {
			    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__homogeneous)))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count = 2U;
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_ae 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__traverse)
	        ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		   & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		      & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_64))))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__res_v) 
		   & (VL_ULL(0) != (VL_ULL(0x3ffffffff) 
				    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_data 
				       >> 0x1eU)))))
	    : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
	       & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		  & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___GEN_64)))));
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357741
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__mem_resp_valid) 
			 & (~ ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:357744: Assertion failed in %NTestHarness.top.tile.ptw\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",357744,"");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_0_s2_nack) 
			 & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at PTW.scala:359 assert(state === s_wait2)\n");
	}
    }
    if (
	// $c function at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357763
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb_io_requestor_0_s2_nack) 
			 & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: example.TestHarness.GemminiRocketConfig.top.v:357766: Assertion failed in %NTestHarness.top.tile.ptw\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v",357766,"");
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3550(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3550\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_54) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid) 
	      | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__bad_va 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (~ ((VL_ULL(0) == (VL_ULL(0xc000000000) 
				& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc)) 
		 | (VL_ULL(0xc000000000) == (VL_ULL(0xc000000000) 
					     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__samePage 
	= ((0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
				  >> 0xeU))) == (0x1ffffffU 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0xeU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3551(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3551\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3552(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3552\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_3
	    : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_2
	        : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_1
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_0)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_883___05FT_952_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_883
	[(0x1ffU & (((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
			      >> 2U)) ^ (3U & (IData)(
						      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						       >> 0xbU)))) 
		    ^ (0x1c0U & (((IData)(0xddU) * (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_884)) 
				 << 1U))))];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageValid) 
	   & (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_5 
		== (0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					  >> 0xeU)))) 
	       << 5U) | (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_4 
			   == (0x1ffffffU & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						     >> 0xeU)))) 
			  << 4U) | (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_3 
				      == (0x1ffffffU 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						     >> 0xeU)))) 
				     << 3U) | (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_2 
						 == 
						 (0x1ffffffU 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0xeU)))) 
						<< 2U) 
					       | (((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_1 
						    == 
						    (0x1ffffffU 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
								>> 0xeU)))) 
						   << 1U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pages_0 
						     == 
						     (0x1ffffffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
								 >> 0xeU))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3553(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3553\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_674 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0) 
	     & ((0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_tag 
			   >> 0x12U)) == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	    & ((1U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_level)) 
	       | ((0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_tag 
			     >> 9U)) == (0x1ffU & (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 0x15U)))))) 
	   & ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_level)) 
	      | ((0x1ffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_tag) 
		 == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
	= (0x7ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_tag 
			 ^ (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 0xcU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3554(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3554\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_27 
	= (0x7ffffffU & ((1U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_level))
			  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_33 
	= (0x7ffffffU & ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_level))
			  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_67 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_27) 
	     == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				    >> 1U)))) << 0x1bU) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_26) 
		== (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				       >> 1U)))) << 0x1aU) 
	      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_25) 
		   == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					  >> 1U)))) 
		  << 0x19U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_24) 
				 == (0x1fffU & (IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							>> 1U)))) 
				<< 0x18U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_23) 
					       == (0x1fffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							      >> 1U)))) 
					      << 0x17U) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_22) 
						  == 
						  (0x1fffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
							      >> 1U)))) 
						 << 0x16U) 
						| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_21) 
						     == 
						     (0x1fffU 
						      & (IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
								 >> 1U)))) 
						    << 0x15U) 
						   | (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_20) 
							 == 
							 (0x1fffU 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
								     >> 1U)))) 
							<< 0x14U) 
						       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_19) 
							    == 
							    (0x1fffU 
							     & (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
									>> 1U)))) 
							   << 0x13U) 
							  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_18) 
							       == 
							       (0x1fffU 
								& (IData)(
									  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
									   >> 1U)))) 
							      << 0x12U) 
							     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_17) 
								  == 
								  (0x1fffU 
								   & (IData)(
									     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
									      >> 1U)))) 
								 << 0x11U) 
								| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_16) 
								     == 
								     (0x1fffU 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
								    << 0x10U) 
								   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_15) 
									== 
									(0x1fffU 
									 & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
								       << 0xfU) 
								      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_14) 
									  == 
									  (0x1fffU 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
									 << 0xeU))))))) 
						      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_13) 
							   == 
							   (0x1fffU 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
								       >> 1U)))) 
							  << 0xdU) 
							 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_12) 
							      == 
							      (0x1fffU 
							       & (IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
									  >> 1U)))) 
							     << 0xcU) 
							    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_11) 
								 == 
								 (0x1fffU 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
									     >> 1U)))) 
								<< 0xbU) 
							       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_10) 
								    == 
								    (0x1fffU 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
								   << 0xaU) 
								  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_9) 
								       == 
								       (0x1fffU 
									& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
								      << 9U) 
								     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_8) 
									  == 
									  (0x1fffU 
									   & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
									 << 8U) 
									| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_7) 
									     == 
									     (0x1fffU 
									      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
									    << 7U) 
									   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_6) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
									       << 6U) 
									      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_5) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
										<< 5U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_4) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
										<< 4U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_3) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
										<< 3U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_2) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_1) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))) 
										<< 1U) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxs_0) 
										== 
										(0x1fffU 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
										>> 1U)))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3555(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3555\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_45 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_taken)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_302));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___GEN_40 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_308) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__wrong_path));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_90 
	= (VL_ULL(0xffffffffff) & ((~ (VL_ULL(3) | 
				       (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_pc))) 
				   + (QData)((IData)(
						     (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
						        ? 1U
						        : 2U) 
						      << 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken)
	    ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI)
		 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviReturn)
		 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcReturn))
	        ? 3U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI)
			  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviCall)
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcJALR))
			 ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI)
					   ? (0x63U 
					      == (0x7fU 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviBits))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcBranch))))))
	    : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1)
		 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviReturn_1)
		 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcReturn_1))
	        ? 3U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1)
			  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviCall_1)
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcJALR_1))
			 ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1)
					   ? (0x63U 
					      == (0x7fU 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcBranch_1)))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_610 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1)
	    ? ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
	        ? ((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data) 
		   | ((0x7ff00000U & (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							      >> 0x1fU)))) 
				      << 0x14U)) | 
		      ((0xff000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data) 
		       | ((0x800U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				     >> 9U)) | ((0x7e0U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						    >> 0x14U)) 
						| (0x1eU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						      >> 0x14U)))))))
	        : ((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data) 
		   | ((0x7ff00000U & (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							      >> 0x1fU)))) 
				      << 0x14U)) | 
		      ((0xff000U & (VL_NEGATE_I((IData)(
							(1U 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							    >> 0x1fU)))) 
				    << 0xcU)) | ((0x800U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						     << 4U)) 
						 | ((0x7e0U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							>> 0x14U)) 
						    | (0x1eU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							  >> 7U))))))))
	    : ((0xffe00000U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcImm_1 
						       >> 0x14U)))) 
			       << 0x15U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcImm_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3556(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3556\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1 
	= (1U & ((((IData)(3U) << (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_pc 
						 >> 1U)))) 
		  >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_102 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_6) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x)) 
	   & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
	       ? (((VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_pc) 
		   >= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
		  ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
	       : ((VL_ULL(0x7fffffffff) & ((~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_pc) 
					   | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_22)))) 
		  == vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_35)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_59 
	   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_61);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_59 
	   | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_61);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_386 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_383) 
	   | (6U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_383) 
		    << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_401 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[0U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[0U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[0U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[0U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[1U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[1U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[1U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[1U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[2U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[2U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[2U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[2U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[3U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[3U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[3U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[3U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[4U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[4U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[4U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[5U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[5U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[5U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_396)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[6U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_397)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[6U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_354))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_398)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_436_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[6U]
				   : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3557(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3557\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_519 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_516) 
	   | (6U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_516) 
		    << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_534 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[0U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[0U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[0U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[1U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[1U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[1U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[1U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[2U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[2U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[2U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[2U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[3U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[3U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[3U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[3U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[4U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[4U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[4U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[5U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[5U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[5U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
	= (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0))
	      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_457[6U]
	      : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
			 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530)
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1))
		        ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_465[6U]
		        : 0U)) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531)
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2))
				   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_473[6U]
				   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_request 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_397) 
	    << 0x17U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_374) 
			  << 0x16U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_351) 
					<< 0x15U) | 
				       (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_328) 
					 << 0x14U) 
					| (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_305) 
					    << 0x13U) 
					   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_282) 
					       << 0x12U) 
					      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_402) 
						  << 0xcU) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_request) 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_filter)))))))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_61 
	= (0xfffffffU & (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_8 
			 + (0xffffU & ((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_63 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_145 
	= (0xfffffffU & (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_92 
			 + (0xffffU & ((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_147 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_ready 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_5)) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_7)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3558(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3558\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_179) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_91)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_id 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
	    ? vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_id
	   [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_558 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_510) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___GEN_15 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_510) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_622)))
	    ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
					>> 9U))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_205 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_203)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_244 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_203) 
		 - ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
		    & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_203))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_232)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_255)))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_510 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_250 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_203)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_247_0)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_251 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready) 
	   & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_203))
	       ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_209))
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_247_1)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3559(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3559\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_68) 
	    & (~ (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
		  >> 0x16U))) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_63));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_147 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_68) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_71)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_68) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_71));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_117 
	= ((0x75U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				>> 3U))) ? VL_ULL(0x200000003000000)
	    : ((0x74U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
				    >> 3U))) ? VL_ULL(0x7801000004000000)
	        : ((0x73U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					>> 3U))) ? VL_ULL(0x300000063010000)
		    : ((0x72U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
					    >> 3U)))
		        ? VL_ULL(0x3000000) : ((0x71U 
						== 
						(0x1ffU 
						 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
						    >> 3U)))
					        ? VL_ULL(0x63746e692d75)
					        : (
						   (0x70U 
						    == 
						    (0x1ffU 
						     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							>> 3U)))
						    ? VL_ULL(0x70632c7663736972)
						    : 
						   ((0x6fU 
						     == 
						     (0x1ffU 
						      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							 >> 3U)))
						     ? VL_ULL(0x1b0000000f000000)
						     : 
						    ((0x6eU 
						      == 
						      (0x1ffU 
						       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							  >> 3U)))
						      ? VL_ULL(0x300000001000000)
						      : 
						     ((0x6dU 
						       == 
						       (0x1ffU 
							& (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							   >> 3U)))
						       ? VL_ULL(0x5201000004000000)
						       : 
						      ((0x6cU 
							== 
							(0x1ffU 
							 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							    >> 3U)))
						        ? VL_ULL(0x300000000000000)
						        : 
						       ((0x6bU 
							 == 
							 (0x1ffU 
							  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							     >> 3U)))
							 ? VL_ULL(0x72656c6c6f72746e)
							 : 
							((0x6aU 
							  == 
							  (0x1ffU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							      >> 3U)))
							  ? VL_ULL(0x6f632d7470757272)
							  : 
							 ((0x69U 
							   == 
							   (0x1ffU 
							    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
							       >> 3U)))
							   ? VL_ULL(0x65746e6901000000)
							   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_104)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3561(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3561\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
			    << 0x1eU) | (0x3ffffffeU 
					 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
					    >> 2U)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
	       ? ((7U == (7U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_161)))
	       : ((0U != (7U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_161)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
	= ((1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
	= ((1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
						  >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U] 
	= ((1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
		  >> 2U)) | (6U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
				   >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_492 
	= (((0x2000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
				 >> 0x1aU)) << 0xdU)) 
	    | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
				      >> 0x18U)))) 
		<< 0xcU) | (((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
						   >> 0x16U)))) 
			     << 0xbU) | (((0U != (3U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x14U)))) 
					  << 0xaU) 
					 | (((0U != 
					      (3U & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x12U)))) 
					     << 9U) 
					    | (((0U 
						 != 
						 (3U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x10U)))) 
						<< 8U) 
					       | (((0U 
						    != 
						    (3U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								>> 0xeU)))) 
						   << 7U) 
						  | (((0U 
						       != 
						       (3U 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								   >> 0xcU)))) 
						      << 6U) 
						     | (((0U 
							  != 
							  (3U 
							   & (IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								      >> 0xaU)))) 
							 << 5U) 
							| (((0U 
							     != 
							     (3U 
							      & (IData)(
									(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									 >> 8U)))) 
							    << 4U) 
							   | (((0U 
								!= 
								(3U 
								 & (IData)(
									   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									    >> 6U)))) 
							       << 3U) 
							      | (((0U 
								   != 
								   (3U 
								    & (IData)(
									      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									       >> 4U)))) 
								  << 2U) 
								 | (((0U 
								      != 
								      (3U 
								       & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 2U)))) 
								     << 1U) 
								    | (0U 
								       != 
								       (3U 
									& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))))))))))) 
	   & (((0xaa0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_467) 
			  << 4U)) | (0x1540U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_467) 
						<< 6U))) 
	      | ((0x10U & ((IData)((VL_ULL(0xffffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & (~ 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
							   >> 1U)))) 
				       >> 9U))) << 4U)) 
		 | ((8U & ((IData)((VL_ULL(0x7fffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & (~ 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
							   >> 1U)))) 
				       >> 0xaU))) << 3U)) 
		    | ((4U & ((IData)((VL_ULL(0x3fffff) 
				       & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
							 (0x1fU 
							  & (~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
							      >> 1U)))) 
					  >> 0xbU))) 
			      << 2U)) | ((2U & ((IData)(
							(VL_ULL(0x1fffff) 
							 & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									   (0x1fU 
									    & (~ 
									       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							    >> 0xcU))) 
						<< 1U)) 
					 | (1U & (IData)(
							 (VL_ULL(0xfffff) 
							  & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									    (0x1fU 
									     & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							     >> 0xdU))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3562(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3562\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_26))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___GEN_12 
	= (0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___T_158)
			   ? (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___T_127)
				  ? (VL_LTES_III(1,31,31, 0U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___T_151) 
				     << 0x19U) : 0U) 
				| (((1U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
				    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt))
				    ? 0x1000000U : 0U)) 
			       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___T_113)
				   ? (VL_LTES_III(1,31,31, 0U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT___T_151) 
				      << 0x17U) : 0U)) 
			      | ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
				  ? (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
				     | (((IData)(1U) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
					>> 2U)) : 0U))
			   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__sigX_Z));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___GEN_12 
	= (VL_ULL(0x3fffffffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___T_158)
					  ? (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___T_127)
						 ? 
						((QData)((IData)(
								 VL_LTES_IQQ(1,63,63, VL_ULL(0), vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___T_151))) 
						 << 0x36U)
						 : VL_ULL(0)) 
					       | (((1U 
						    >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt))
						   ? VL_ULL(0x20000000000000)
						   : VL_ULL(0))) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___T_113)
						  ? 
						 ((QData)((IData)(
								  VL_LTES_IQQ(1,63,63, VL_ULL(0), vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT___T_151))) 
						  << 0x34U)
						  : VL_ULL(0))) 
					     | ((1U 
						 < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
						 ? 
						(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
						 | ((VL_ULL(1) 
						     << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
						    >> 2U))
						 : VL_ULL(0)))
					  : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sigX_Z));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3563(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3563\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__toint 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)
	        ? ((QData)((IData)((0U != ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
					   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp_io_lt) 
					       << 1U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros) 
						    | (((1U 
							 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
							== 
							(1U 
							 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U])) 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs) 
							  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags)))))))))) 
		   | ((QData)((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
				       >> 0x20U))) 
		      << 0x20U)) : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
				     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out
				     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_247)
					 ? (((QData)((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out 
							      >> 0x20U))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((((1U 
								  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))) 
								 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_239)) 
								<< 0x1fU) 
							       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_239)
								   ? 0U
								   : 0x7fffffffU)))))
					 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_io_out)))
	    : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))
	        ? ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_212)) 
		   | ((QData)((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
				       >> 0x20U))) 
		      << 0x20U)) : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_118 
	= ((1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wen)))
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags) 
	       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_toint_valid)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wb_toint_exc)
		     : 0U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_wen)
			       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
				   ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_invalidExc) 
				       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_infiniteExc) 
						  << 3U) 
						 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
						     << 2U) 
						    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_271))))
				   : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw_io_invalidExc) 
				       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw_io_infiniteExc) 
						  << 3U) 
						 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
						     << 2U) 
						    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_204)))))
			       : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wen))
					  ? ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
					      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT___T_12_exc)
					      : ((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
						  ? 
						 (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_20) 
						   << 4U) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
						      << 2U) 
						     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_204)))
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))
						   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_exc)
						   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_exc))))
					  : 0U))) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3564(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3564\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1181,95,0,3);
    // Body
    __Vtemp1181[0U] = (IData)((((QData)((IData)((0xfffU 
						 & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							   & (~ 
							      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
								| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							        ? 0xe00U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							       ? 0xc31U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							      ? 0x400U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							     ? 0x200U
							     : 0U))) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x3ceU
							   : 0U)) 
						      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0xbffU
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 0xc00U
							 : 0U)) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						        ? 0xe00U
						        : 0U))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
						  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						  ? 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? VL_ULL(0x8000000000000)
						   : VL_ULL(0))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
							      >> 0x37U)))
						   ? 
						  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						   >> 1U)
						   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						    ? VL_ULL(0xfffffffffffff)
						    : VL_ULL(0))))));
    __Vtemp1181[1U] = (IData)(((((QData)((IData)((0xfffU 
						  & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							    & (~ 
							       (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isZero_Z) 
								 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
								 ? 0xe00U
								 : 0U))) 
							   & (~ 
							      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							        ? 0xc31U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							       ? 0x400U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							      ? 0x200U
							      : 0U))) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							    ? 0x3ceU
							    : 0U)) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							   ? 0xbffU
							   : 0U)) 
						      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							  ? 0xc00U
							  : 0U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
							 ? 0xe00U
							 : 0U))))) 
				 << 0x34U) | (VL_ULL(0xfffffffffffff) 
					      & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__isZero_Z)) 
						   | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? VL_ULL(0x8000000000000)
						    : VL_ULL(0))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw_io_rawOut_sig 
							       >> 0x37U)))
						    ? 
						   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						    >> 1U)
						    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						     ? VL_ULL(0xfffffffffffff)
						     : VL_ULL(0))))) 
			       >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U] 
	= __Vtemp1181[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
	= __Vtemp1181[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sign_Z));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3565(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3565\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_712[4U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[4U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_685_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[4U]
		       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3566(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3566\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_815[4U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[4U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_788_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[4U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_d_ready)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1540 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1489 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[0U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[0U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[0U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[1U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[1U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[1U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[2U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[2U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[2U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[3U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[3U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[3U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_918[4U] 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_0))
	     ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_702[4U]
	     : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_891_1))
		       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_710[4U]
		       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_52 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_d_ready) 
	    | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_41))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1094 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_d_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget_auto_out_d_ready 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_d_ready) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_41))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_365) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_365) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool_io_alloc_ready 
	= ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_365) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_160))) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_135))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_148));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3567(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3567\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_161 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_160));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4013 
	= (0xffU & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		     ? 0U : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_addr))
			      ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4007 
					 >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4007))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op2 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_rs_1
	    : (((QData)((IData)(VL_NEGATE_I((IData)(
						    (1U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_745 
							>> 0x1fU)))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_745))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_op1 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1))
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_rs_0
	    : (((QData)((IData)((0xffffffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_738 
									     >> 0x27U)))))))) 
		<< 0x28U) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_738));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_338 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__inWriteback)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_victim_way)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_way))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_meta_hit_way));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT___T_38));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3568(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3568\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_47 
	= (((0U != (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_26 
			       >> 0x10U))) << 4U) | 
	   (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_30) 
			      >> 8U))) << 3U) | (((0U 
						   != 
						   (0xfU 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_34) 
						       >> 4U))) 
						  << 2U) 
						 | (((0U 
						      != 
						      (3U 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_38) 
							  >> 2U))) 
						     << 1U) 
						    | (1U 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_42) 
							  >> 1U))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_12[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_12[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_12[2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_13[3U] 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram
			   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram_RW_0_addr_pipe_0] 
			   << 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_12[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_141 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_75) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_73) 
		& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
	    << 0xfU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_75) 
			  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_73) 
			     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
			 << 0xeU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_72) 
				       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_70) 
					  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
				      << 0xdU) | ((
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_72) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_70) 
						       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
						   << 0xcU) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_69) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_67) 
							  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
						      << 0xbU) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_69) 
							  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_67) 
							     & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
							 << 0xaU) 
							| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_66) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_64) 
								& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
							    << 9U) 
							   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_66) 
								| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_64) 
								   & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
							       << 8U) 
							      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_63) 
								   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_61) 
								      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
								  << 7U) 
								 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_63) 
								      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_61) 
									 & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
								     << 6U) 
								    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_60) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_58) 
									    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
									<< 5U) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_60) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_58) 
									       & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
									   << 4U) 
									  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_57) 
									       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_55) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
									      << 3U) 
									     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_57) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_55) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))) 
										<< 2U) 
										| ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_52) 
										& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address)) 
										<< 1U) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_54) 
										| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_52) 
										& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_address))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3569(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3569\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_auto_out_a_bits_mask 
	= (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_144) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_142) 
		 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
	     << 0xfU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_144) 
			   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_142) 
			      & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
			  << 0xeU) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_141) 
					| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_139) 
					   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
				       << 0xdU) | (
						   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_141) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_139) 
							& (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
						    << 0xcU) 
						   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_138) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_136) 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
						       << 0xbU) 
						      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_138) 
							   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_136) 
							      & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
							  << 0xaU) 
							 | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_135) 
							      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_133) 
								 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
							     << 9U) 
							    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_135) 
								| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_133) 
								   & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
							       << 8U)))))))) 
	   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_132) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_130) 
		   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
	       << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_132) 
			   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_130) 
			      & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
			  << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_129) 
				      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_127) 
					 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
				     << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_129) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_127) 
						    & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
						<< 4U) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_126) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_124) 
						       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
						   << 3U) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_126) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_124) 
							  & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr))) 
						      << 2U) 
						     | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_123) 
							  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_121) 
							     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)) 
							 << 1U) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_123) 
							   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_121) 
							      & (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_paddr)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3570(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3570\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core_io_req_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_223)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_230) 
	       | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state)))
	    : (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1136 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1062) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_54 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_39) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_52))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_57 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_39) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_55))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_42) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_58))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_63 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_42) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_61))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3571(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3571\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_66 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_45) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_64))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_69 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_45) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_67))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_72 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_48) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_70))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_75 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_48) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_73))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1288 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1273) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1286))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1291 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1273) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1289))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3572(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3572\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1294 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1276) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1292))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1297 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1276) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1295))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1300 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1279) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1298))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1303 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1279) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1301))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1306 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1282) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1304))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1309 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1282) 
	   | (7U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_71))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1307))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3573(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3573\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1465 
	= (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_vaddr 
				   + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytes_written_this_beat))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1469 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent) 
		    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytes_written_this_beat)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1471 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytes_written_this_beat) 
	   >= (0x1fU & ((IData)(0x10U) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3574(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3574\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_20 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c1, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3575(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3575\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT___T_58 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__c2, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__shift_offset));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___GEN_20 
	= ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_38) 
						   >> 0xfU)))) 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___GEN_1 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1487)
		        ? (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_28)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_28)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_28))
		        : (VL_LTS_III(1,32,32, 0x3ffffU, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_66)
			    ? 0x3ffffU : (VL_GTS_III(1,32,32, 0xfffc0000U, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_66)
					   ? 0xfffc0000U
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT___T_66))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3576(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3576\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_replay)) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ldst_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_debug_breakpoint) 
	   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_load) 
	       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_38) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_store) 
		 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_70) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_92 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_56))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_76 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
				        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc
					    : (~ (VL_ULL(1) 
						  | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_pc))))
				        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc)
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_80 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
				        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc
				        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
					    ? (~ (VL_ULL(1) 
						  | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_pc)))
					    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc))
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_87 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
				        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc
				        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc
					    : (~ (VL_ULL(1) 
						  | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_pc)))))
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_90 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie)
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie)))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3577(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3577\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_91 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_100 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
		     >> 0x1dU)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie)
				        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie)
					    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie)))
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__new_prv 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret)
	    ? ((0x20000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst)
	        ? ((0x40000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp))
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp))
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)
		        : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
				  ? 1U : 3U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_85 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp)
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp)))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2262 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0) 
	    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0) 
		       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0) 
				  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3578(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3578\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_4 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_4)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_enq_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_request_refill 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_12));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_12));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__ptw_ae_array 
	= ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
				>> 0xbU)) << 0xcU)) 
	   | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
				  >> 0xbU)) << 0xbU)) 
	      | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
				     >> 0xbU)) << 0xaU)) 
		 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
					>> 0xbU)) << 9U)) 
		    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
					   >> 0xbU)) 
				  << 8U)) | ((0x80U 
					      & ((IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
							  >> 0xbU)) 
						 << 7U)) 
					     | ((0x40U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
							     >> 0xbU)) 
						    << 6U)) 
						| ((0x20U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
								>> 0xbU)) 
						       << 5U)) 
						   | ((0x10U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
								   >> 0xbU)) 
							  << 4U)) 
						      | ((8U 
							  & ((IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
								      >> 0xbU)) 
							     << 3U)) 
							 | ((4U 
							     & ((IData)(
									(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
									 >> 0xbU)) 
								<< 2U)) 
							    | ((2U 
								& ((IData)(
									   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
									    >> 0xbU)) 
								   << 1U)) 
							       | (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
									     >> 0xbU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3579(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3579\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1718 
	= ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
				>> 0xdU)) << 0xcU)) 
	   | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
				  >> 0xdU)) << 0xbU)) 
	      | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
				     >> 0xdU)) << 0xaU)) 
		 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
					>> 0xdU)) << 9U)) 
		    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
					   >> 0xdU)) 
				  << 8U)) | ((0x80U 
					      & ((IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
							  >> 0xdU)) 
						 << 7U)) 
					     | ((0x40U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
							     >> 0xdU)) 
						    << 6U)) 
						| ((0x20U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
								>> 0xdU)) 
						       << 5U)) 
						   | ((0x10U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
								   >> 0xdU)) 
							  << 4U)) 
						      | ((8U 
							  & ((IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
								      >> 0xdU)) 
							     << 3U)) 
							 | ((4U 
							     & ((IData)(
									(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
									 >> 0xdU)) 
								<< 2U)) 
							    | ((2U 
								& ((IData)(
									   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
									    >> 0xdU)) 
								   << 1U)) 
							       | (1U 
								  & (IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
									     >> 0xdU)))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__doTgtPageRepl 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__samePage)) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxPageRepl 
	= (0xffU & (((0x3eU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit) 
			       << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit) 
						>> 5U))) 
		    | ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__pageHit))
		        ? 0U : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__nextPageRepl)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_674));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_440) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3580(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3580\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_446) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_404) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3581(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3581\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_410) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_416) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_422) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3582(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3582\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_428) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_434) 
	   & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)
	        : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					 >> 0xcU))))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)
		    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
					     >> 0xcU))))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)))) 
	      & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3583(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3583\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_67 
	   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_356 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_valid)) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictBranch) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictJump)) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_630 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken))) 
	   & (3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			   >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictJump_1 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1) 
	    & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1) 
	      & (0xa001U == (0xe003U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					>> 0x10U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_predictReturn_1 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971)) 
	   & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rviReturn_1)) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcReturn_1))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_569 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1) 
	    & (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcBranch_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_575 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_303) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1)) 
	   & (3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			   >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_taken_1 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_prevRVI_1) 
	    & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
		| (0x67U == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	       | ((0x63U == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_valid_1) 
	      & ((((0xa001U == (0xe003U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					   >> 0x10U))) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcJALR_1)) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcJR_1)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__taken_rvcBranch_1) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3584(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3584\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu_io_debug_if 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_102) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__bpu__DOT___T_102) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_828 
	= ((0x10000000U == (0x12400000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)) 
	   | (0x40000000U == (0x40000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_880 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
	   < (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
		    >> 0x1cU)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1039 
	= (((((((((((((((0x7a0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					      >> 0x14U))) 
			| (0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						>> 0x14U)))) 
		       | (0x7a2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					       >> 0x14U)))) 
		      | (0x301U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					      >> 0x14U)))) 
		     | (0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					     >> 0x14U)))) 
		    | (0x305U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					    >> 0x14U)))) 
		   | (0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					   >> 0x14U)))) 
		  | (0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					  >> 0x14U)))) 
		 | (0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					 >> 0x14U)))) 
		| (0x341U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
					>> 0x14U)))) 
	       | (0x343U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				       >> 0x14U)))) 
	      | (0x342U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				      >> 0x14U)))) 
	     | (0xf14U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				     >> 0x14U)))) | 
	    (0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
				  >> 0x14U)))) | (0x7b1U 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
						      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3585(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3585\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__inst 
	= ((3U != (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))
	    ? (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109 
	= ((3U != (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in))
	    ? 0U : ((((2U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
			     - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst)
		       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst)) 
		     << 1U) | ((2U & (((IData)(1U) 
				       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
				      - (IData)(1U)))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_ae_inst)
			        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_744 
	= ((0x1c0U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		      >> 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_764 
	= ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     >> 1U)) | (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_707 
	= (0x67U | ((0x1f00000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				   << 0x12U)) | (0xf8000U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						    << 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497 
	= ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	      ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						<< 1U)) 
				      | ((0x20U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   << 3U)) 
					 | ((0x18U 
					     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						>> 7U)) 
					    | (6U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						>> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3586(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3586\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_207 
	= ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	      ? 0x7fU : 0U) << 5U) | (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					       >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_416 
	= ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)
	      ? 0x3ffU : 0U) << 0xbU) | ((0x400U & 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					   << 2U)) 
					 | ((0x300U 
					     & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						>> 1U)) 
					    | ((0x80U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						   << 1U)) 
					       | ((0x40U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						      >> 1U)) 
						  | ((0x20U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							 << 3U)) 
						     | ((0x10U 
							 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							    >> 7U)) 
							| (0xeU 
							   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							      >> 2U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_325 
	= (0x45413U | ((0x2000000U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      << 0xdU)) | (
						   (0x1f00000U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
						       << 0x12U)) 
						   | ((0x38000U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
							  << 8U)) 
						      | (0x380U 
							 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_353 
	= ((4U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		  >> 0xaU)) | (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				     >> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_50 
	= ((0x40U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     << 1U)) | ((0x38U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					  >> 7U)) | 
				(4U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				       >> 4U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3587(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3587\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_28 
	= ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     << 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
					 >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843 
	= ((0x18U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
		     << 3U)) | (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
				      >> 0xdU)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_459 
	= ((0xcU >= (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
			      << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					>> 0x17U)))) 
	   & (0U == (0x7ffff000U & (0x3000U ^ ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						<< 0xfU) 
					       | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
						  >> 0x11U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_497 
	= (((((0U == (0x7c000000U & (0xc000000U ^ (
						   (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						    << 0xfU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
						      >> 0x11U))))) 
	      | (0U == (0x7fff0000U & (0x2000000U ^ 
				       ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					 << 0xfU) | 
					(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					 >> 0x11U)))))) 
	     | (0U == (0x7ffff000U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
						   >> 0x11U))))) 
	    | (0U == (0x7ffff000U & (0x54000000U ^ 
				     ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
						   >> 0x11U)))))) 
	   | (0U == (0x7ffff000U & (0x2010000U ^ ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						   << 0xfU) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
						     >> 0x11U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3588(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3588\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_47 
	= (1U & ((4U <= (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
				  << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					    >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					>> 0x14U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_50 
	= (1U & ((4U <= (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
				  << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
					    >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
				     >> 0x14U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		     >> 0x14U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
				      >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		     >> 0x14U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
				   >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		  >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
				  >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
		  >> 0x14U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
			       >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_corrupt)
		  : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[0U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3589(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3589\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_param 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_param)
		  : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
		      << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				>> 0x1bU))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_source 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_source)
		     : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
			 << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				     >> 0x11U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_6[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[2U])) 
		    << 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[1U])) 
				  << 0x1fU) | ((QData)((IData)(
							       vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[0U])) 
					       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_6[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[2U])) 
		     << 0x3fU) | (((QData)((IData)(
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[1U])) 
				   << 0x1fU) | ((QData)((IData)(
								vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[0U])) 
						>> 1U))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_6[2U] 
	= (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
				      ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_data[3U]
				      : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					  << 0x1fU) 
					 | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[3U] 
					    >> 1U))))) 
		    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
						  ? 
						 vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_data[2U]
						  : 
						 ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[3U] 
						   << 0x1fU) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[2U] 
						     >> 1U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_6[3U] 
	= (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
				       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_data[3U]
				       : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					   << 0x1fU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[3U] 
					     >> 1U))))) 
		     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
						   ? 
						  vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_data[2U]
						   : 
						  ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[3U] 
						    << 0x1fU) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[2U] 
						      >> 1U)))))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_mask 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_mask)
		       : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					>> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_opcode 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_opcode)
		  : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
		      << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				>> 0x1eU))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_size 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_size)
		    : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
			<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				  >> 0x17U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_bits_address 
	= (0x7fffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full)
			   ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_address
			   : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
			       << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					   >> 0x11U))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		       ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_mask
		      [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
			       << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					    >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___GEN_27 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1491) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1700)))
	    ? (VL_ULL(1) << (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						   >> 0x11U))))
	    : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___GEN_27 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1440) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1649)))
	    ? (VL_ULL(1) << (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				       << 0xfU) | (
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						   >> 0x11U))))
	    : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3590(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3590\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_47 
	= (1U & ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					  >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					>> 0x14U))))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_50 
	= (1U & ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					  >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				     >> 0x14U)))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_45 
	= (1U & ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					  >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					>> 0x14U))))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_48 
	= (1U & ((4U <= (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
				<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
					  >> 0x17U)))) 
		 | (1U & ((((IData)(1U) << (3U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
						     >> 0x17U)))) 
			   >> 3U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				     >> 0x14U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3591(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3591\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		     >> 0x14U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				      >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		     >> 0x14U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				   >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		  >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				  >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		  >> 0x14U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			       >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_52 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		     >> 0x14U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				      >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_55 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		     >> 0x14U)) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				   >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_58 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		  >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
				  >> 0x13U))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_61 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		  >> 0x14U) & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			       >> 0x13U)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_size 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		  ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_size
		 [0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			  << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				    >> 0x17U))));
}
