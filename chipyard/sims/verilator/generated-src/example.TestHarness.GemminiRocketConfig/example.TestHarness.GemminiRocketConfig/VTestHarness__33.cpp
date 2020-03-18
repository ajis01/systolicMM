// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1580(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1580\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_337));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1552_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_818;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1568_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_866;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1584_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_914;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1600_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_962;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1616_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1010;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1632_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1058;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1648_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1106;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1664_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1154;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1680_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1202;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1696_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1250;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1712_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1298;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1728_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1346;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1744_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1394;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1760_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1442;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1581(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1581\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1776_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_0_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1490;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1553_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_821;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1569_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_869;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1585_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_917;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1601_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_965;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1617_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1013;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1633_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1061;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1649_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1109;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1665_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1157;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1681_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1205;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1697_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1253;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1713_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1301;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1729_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1349;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1745_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1397;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1761_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1445;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1777_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_1_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1493;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1554_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_824;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1582(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1582\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1570_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_872;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1586_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_920;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1602_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_968;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1618_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1016;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1634_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1064;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1650_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1112;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1666_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1160;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1682_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1208;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1698_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1256;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1714_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1304;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1730_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1352;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1746_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1400;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1762_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1448;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1778_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_2_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1496;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1555_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_827;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1571_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_875;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1587_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_923;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1583(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1583\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1603_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_971;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1619_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1019;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1635_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1067;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1651_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1115;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1667_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1163;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1683_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1211;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1699_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1259;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1715_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1307;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1731_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1355;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1747_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1403;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1763_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1451;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1556_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_830;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1779_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1499;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1572_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_878;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1588_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_926;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1604_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_974;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1620_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1022;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1584(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1584\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1636_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1070;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1652_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1118;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1668_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1166;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1684_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1214;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1700_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1262;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1716_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1310;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1732_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1358;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1557_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_833;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1748_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1406;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1573_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_881;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1764_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1454;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1589_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_929;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1780_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1502;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1605_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_977;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1621_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1025;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1637_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1073;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1653_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1121;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1585(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1585\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1669_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1169;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1685_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1217;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1701_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1265;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1717_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1313;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1558_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_836;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1733_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1361;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1574_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_884;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1749_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1409;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1590_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_932;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1765_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1457;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1606_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_980;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1781_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1505;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1622_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1028;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1638_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1076;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1654_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1124;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1670_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1172;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1686_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1220;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1586(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1586\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1702_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1268;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1559_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_839;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1718_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1316;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1575_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_887;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1734_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1364;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1591_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_935;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1750_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1412;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1607_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_983;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1766_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1460;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1623_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1031;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1782_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1508;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1639_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1079;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1655_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1127;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1671_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1175;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1687_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1223;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1560_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_842;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1703_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1271;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1587(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1587\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1576_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_890;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1719_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1319;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1592_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_938;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1735_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1367;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1608_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_986;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1751_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1415;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1767_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1463;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1624_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1034;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1783_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1511;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1640_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1082;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1656_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1130;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1672_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1178;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1561_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_845;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1688_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1226;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1704_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1274;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1577_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_893;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1720_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1322;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1588(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1588\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1593_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_941;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1736_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1370;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1609_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_989;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1752_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1418;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1625_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1037;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1768_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1466;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1641_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1085;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1784_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1514;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1657_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1133;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1673_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1181;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1562_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_848;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1689_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1229;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1578_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_896;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1705_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1277;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1594_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_944;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1721_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1325;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1610_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_992;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1589(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1589\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1737_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1373;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1626_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1040;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1753_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1421;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1642_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1088;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1769_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1469;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1658_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1136;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1785_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_9_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1517;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1674_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1184;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1563_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_851;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1690_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1232;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1579_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_899;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1706_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1280;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1595_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_947;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1722_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1328;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1611_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_995;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1738_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1376;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1627_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1043;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1590(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1590\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1754_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1424;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1643_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1091;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1770_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1472;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1659_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1139;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1786_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_10_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1520;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1564_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_854;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1675_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1187;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1580_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_902;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1691_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1235;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1596_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_950;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1707_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1283;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1612_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_998;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1723_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1331;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1628_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1046;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1739_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1379;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1755_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1427;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1644_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1094;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1591(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1591\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1771_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1475;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1660_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1142;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1565_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_857;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1787_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_11_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1523;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1481) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_291[0U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_291[1U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_291[2U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_data[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_291[3U];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1676_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1190;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1581_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_905;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1692_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1238;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1597_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_953;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1708_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1286;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1613_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1001;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1724_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1334;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1629_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1049;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1740_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1382;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1645_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1097;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1756_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1430;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1661_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1145;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1592(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1592\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1566_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_860;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1772_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1478;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1677_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1193;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1582_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_908;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1788_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_12_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1526;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1693_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1241;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1598_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_956;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1709_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1289;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1614_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1004;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1725_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1337;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1630_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1052;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1741_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1385;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1646_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1100;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1757_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1433;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1567_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_1__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_863;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1662_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1148;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1773_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1481;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1593(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1593\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1583_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_2__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_911;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1678_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1196;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1789_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_13_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1529;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1599_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_3__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_959;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1694_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1244;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1615_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_4__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1007;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1710_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1292;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1631_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_5__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1055;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1726_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1340;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1742_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1388;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1647_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_6__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1103;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1758_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1436;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1663_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_7__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1151;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1774_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1484;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1679_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_8__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1199;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1790_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_14_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1532;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1695_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_9__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1247;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1594(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1594\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1711_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_10__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1295;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1727_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_11__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1343;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1743_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_12__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1391;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1759_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_13__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1439;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1775_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_14__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1487;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:274546
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1791_0) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT__last_s 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1535;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[0U] 
	= (IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
		    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[0U])))
		    : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[0U])))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[1U] 
	= (IData)((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
		     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[1U])) 
			 << 0x20U) | (QData)((IData)(
						     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[0U])))
		     : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[1U])) 
			 << 0x20U) | (QData)((IData)(
						     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[0U])))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[2U] 
	= (IData)(((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
		    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[3U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[2U])))
		    : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[3U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[2U])))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[3U] 
	= (IData)((((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
		     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[3U])) 
			 << 0x20U) | (QData)((IData)(
						     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[2U])))
		     : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[3U])) 
			 << 0x20U) | (QData)((IData)(
						     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[2U])))) 
		   >> 0x20U));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((((0U == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_time))) 
	  | (((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4118)) 
	      | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3838))) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3831))) 
	 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_pause = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_reg_pause 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___GEN_1;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:169732
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1040) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1009 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1595(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1595\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:165304
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1772) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1741 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:336767
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1823) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1792 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_rob_id__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4516)
	        ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4846));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_rob_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_rob_id__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3831) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839 
		= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__c_first)
			     ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
				 ? (~ (0x7fffffU & 
				       (((IData)(0xfffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
					>> 4U))) : 0U)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3841)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_92) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_92) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_bypass 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_bypass;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1596(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1596\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp96,127,0,4);
    VL_SIGW(__Vtemp97,127,0,4);
    VL_SIGW(__Vtemp98,127,0,4);
    VL_SIGW(__Vtemp99,127,0,4);
    VL_SIGW(__Vtemp100,127,0,4);
    VL_SIGW(__Vtemp103,127,0,4);
    VL_SIGW(__Vtemp104,127,0,4);
    VL_SIGW(__Vtemp105,127,0,4);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342282
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_size = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_size 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_size___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4178) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x33U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342282
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_630 = 3U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_622) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_623)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_630 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_646) 
		   | (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_646) 
			    << 1U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:351337
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_bit0AlignedSigC 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:351337
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
	VL_EXTEND_WQ(106,53, __Vtemp96, (VL_ULL(0x1fffffffffffff) 
					 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig));
	VL_EXTEND_WQ(106,53, __Vtemp97, (VL_ULL(0x1fffffffffffff) 
					 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig));
	VL_MUL_W(4, __Vtemp98, __Vtemp96, __Vtemp97);
	__Vtemp99[0U] = __Vtemp98[0U];
	__Vtemp99[1U] = __Vtemp98[1U];
	__Vtemp99[2U] = __Vtemp98[2U];
	__Vtemp99[3U] = (0x3ffU & __Vtemp98[3U]);
	VL_EXTEND_WW(107,106, __Vtemp100, __Vtemp99);
	__Vtemp103[0U] = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
					>> 1U));
	__Vtemp103[1U] = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
					>> 1U));
	__Vtemp103[2U] = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
					>> 1U));
	__Vtemp103[3U] = (0x3ffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
				     << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
						  >> 1U)));
	VL_EXTEND_WW(107,106, __Vtemp104, __Vtemp103);
	VL_ADD_W(4, __Vtemp105, __Vtemp100, __Vtemp104);
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[0U] 
	    = __Vtemp105[0U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[1U] 
	    = __Vtemp105[1U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[2U] 
	    = __Vtemp105[2U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[3U] 
	    = (0x7ffU & __Vtemp105[3U]);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1597(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1597\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:351337
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC 
	    = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
					    << 0x35U) 
					   | (((QData)((IData)(
							       vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
					       << 0x15U) 
					      | ((QData)((IData)(
								 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
						 >> 0xbU))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_157));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_195));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_233));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_271));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1598(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1598\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:352807
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x15U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[6U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[5U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x15U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[6U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[5U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_772[3U] 
			>> 8U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_fence_i;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:354638
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_fpu_valid) {
	if ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_2 
		= (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
			    >> 0x1bU));
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) {
		if ((0x10U == (0x30000010U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_2 
			= (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
				    >> 0x14U));
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1599(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1599\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:354638
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_fpu_valid) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) {
	    if ((0U == (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0 
		    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
				>> 0x14U));
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) {
		    if ((0U != (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0 
			    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
					>> 0xfU));
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) {
		if ((0U != (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_0 
			= (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
				    >> 0xfU));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:354638
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_fpu_valid) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) {
	    if (((0U != (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		 & (0x10U != (0x30000010U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1 
		    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
				>> 0x14U));
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) {
		    if ((0U == (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1 
			    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
					>> 0xfU));
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1) {
		if ((0U == (0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_ra_1 
			= (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
				    >> 0xfU));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_733 = 3U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_725) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_726)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_733 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_749) 
		   | (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_749) 
			    << 1U)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1600(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1600\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4198) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x3bU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4138) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x23U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4158) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x2bU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:80853
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_9))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_last__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_bits_last;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_last__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wfd 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_wfd;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_836 = 3U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_828) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_829)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_836 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_852) 
		   | (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_852) 
			    << 1U)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1601(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1601\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:189297
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1008) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_980 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_5)
	        ? 0U : 1U);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_div 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_div;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_cmd_id__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_23)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker_io_alloc_bits_cmd_id)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_24));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_cmd_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_cmd_id__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:81181
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_burst__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:81181
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_user__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_38;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_user__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:81181
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_size;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_size__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:374448
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1461 
	    = vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_wxd 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_wxd;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1602(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1602\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flushing 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flushing)
					  ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1385)) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___GEN_1192))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___GEN_1192)));
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flushing) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1385) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_20) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter 
			= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_29)
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_37)
			    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_39));
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_20) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_29)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_37)
		        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_39));
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flushing) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__buffering_done) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1382;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter = 0U;
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter = 0U;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:329238
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid 
	= (0xfffffffU & ((IData)(vlTOPp->reset) ? 0U
			  : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_381));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__id_xcpt)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_768)
		    ? 0U : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109))
			     ? 1U : 0U)) : (((((0U 
						== 
						(0x18U 
						 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
					       | (0x10U 
						  == 
						  (0x50U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					      | (0x4000U 
						 == 
						 (0x4008U 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					     << 1U) 
					    | (((((0U 
						   == 
						   (0x58U 
						    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
						  | (4U 
						     == 
						     (0xcU 
						      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						 | (0x10U 
						    == 
						    (0x70U 
						     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
						| (0x48U 
						   == 
						   (0x58U 
						    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
					       | (0x4050U 
						  == 
						  (0x4058U 
						   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1603(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1603\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_sum
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_sum__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_mxr
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_mxr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_debug
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_debug__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_dprv
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_dprv__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_1_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_1_valid 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___GEN_3;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_11) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_1_valid = 0U;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_vaddr__v0 
	    = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs1
				       [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1] 
				       + (VL_ULL(0xfffffffffff) 
					  & ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__row_counter)) 
					     * vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__stride))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_vaddr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_vaddr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1604(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1604\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:71656
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_580 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:74271
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_580 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:84150
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_580 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:86765
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_580 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:89380
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_580 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:71656
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_583 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:74271
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_583 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:84150
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_583 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:86765
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_583 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:89380
    if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_583 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:165304
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1772) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1742 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:336767
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1823) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1793 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound6 = 0U;
	if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1___05FT_47_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound6;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1___05FT_47_addr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantInProgress = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantInProgress 
		    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_last)));
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1605(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1605\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound3 
	    = (((0U != (0x1fffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH 
				   >> 0x10U))) << 4U) 
	       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_39));
	if ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound3;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_data__v0 
	    = (0x3fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs2___05FT_18_data) 
			  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__row_counter)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4098) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x13U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4118) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0x1bU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391127
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__regsel_sourceD 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_685;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342282
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_address__v0 
	    = (0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1606(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1606\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_issued 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584)) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
		   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6096)
		   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4496)));
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_issued 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6096;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_issued 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3952;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
		    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_issued = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__d_last) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 7U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3815) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3682;
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3815) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3682;
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3815) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3682;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:38092
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_712) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_686 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:43569
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_712) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_686 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:57525
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_712) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_686 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_453));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:357409
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__valid = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__valid = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_76) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__valid 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT___T_118;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1607(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1607\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller_io_dma_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_is_acc_addr__v0 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs2___05FT_18_data 
			     >> 0x1fU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_is_acc_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_laddr_is_acc_addr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_beat 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_beat;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365490
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__req_tag 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_inst 
			>> 7U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_674) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354;
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_874;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:59725
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92))) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_108 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_4;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_157));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_195));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1608(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1608\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_233));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_271));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killm)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_bits_opcode;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_bits_param;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_bits_size;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1609(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1609\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_ctrl_csr 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_csr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm 
	    = (((((0U == (0x30U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
		  | (4U == (0x201cU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		 | (0x10U == (0x14U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
		<< 2U) | ((((8U == (0x18U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
			    | (0x14U == (0x14U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
			   << 1U) | ((8U == (0x18U 
					     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
				     | (0x40U == (0x44U 
						  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:329238
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_isValid 
	    = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_btb_update_valid)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_983) 
			| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x14U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[5U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1610(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1610\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    VL_SIGW(__Vtemp117,95,0,3);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x14U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[5U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381816
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___GEN_14) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___GEN_13))) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_4)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue_io_deq_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_6));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_release_data_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseRejected)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:345405
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroC 
	    = (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
				       >> 0x1dU))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:351337
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isZeroC 
	    = (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
				       >> 0x1dU))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348236
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_valid) {
	__Vtemp111[1U] = ((0xfffffffeU & ((7U == (7U 
						  & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
						      << 3U) 
						     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
							>> 0x1dU))))
					   ? (0xefefffffU 
					      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])
					   : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])) 
			  | (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
				       << 0x20U) | (QData)((IData)(
								   ((0xff800000U 
								     & ((((0x7ffU 
									   & VL_EXTENDS_II(11,10, 
										(0x1ffU 
										& ((IData)(0x80U) 
										+ 
										(0x3ffU 
										& VL_EXTENDS_II(10,9, 
										(0x80U 
										| (0x3fU 
										& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_133)))))))))) 
									  + 
									  (0x7ffU 
									   & VL_EXTENDS_II(11,10, 
										(3U 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
										>> 0x18U))))) 
									 & (~ 
									    ((0x80000000U 
									      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
									      ? 0U
									      : 0x1c0U))) 
									<< 0x17U)) 
								    | (0x7fffffU 
								       & ((0x80000000U 
									   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
									   ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40
									   : 0U)))))) 
				     >> 0x20U)));
	__Vtemp116[0U] = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
			   ? (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
				       << 0x20U) | (QData)((IData)(
								   ((0xff800000U 
								     & ((((0x7ffU 
									   & VL_EXTENDS_II(11,10, 
										(0x1ffU 
										& ((IData)(0x80U) 
										+ 
										(0x3ffU 
										& VL_EXTENDS_II(10,9, 
										(0x80U 
										| (0x3fU 
										& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_133)))))))))) 
									  + 
									  (0x7ffU 
									   & VL_EXTENDS_II(11,10, 
										(3U 
										& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
										>> 0x18U))))) 
									 & (~ 
									    ((0x80000000U 
									      & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
									      ? 0U
									      : 0x1c0U))) 
									<< 0x17U)) 
								    | (0x7fffffU 
								       & ((0x80000000U 
									   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
									   ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40
									   : 0U)))))))
			   : ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
					     << 3U) 
					    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
					       >> 0x1dU))))
			       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[0U]
			       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[0U]));
	__Vtemp117[0U] = (IData)((((QData)((IData)(
						   (0xfffffU 
						    == 
						    (0xfffffU 
						     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U])))) 
				   << 0x3cU) | (((QData)((IData)(
								 (0x7fU 
								  & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
								      << 0xbU) 
								     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
									>> 0x15U))))) 
						 << 0x35U) 
						| (((QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
										>> 0x1fU))))) 
						    << 0x34U) 
						   | (((QData)((IData)(
								       (0xfffffU 
									& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]))) 
						       << 0x20U) 
						      | (QData)((IData)(
									((0x80000000U 
									  & ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
										>> 0x20U)) 
									     << 0x1fU)) 
									 | (0x7fffffffU 
									    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223))))))))));
	__Vtemp117[1U] = ((0xe0000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]) 
			  | (IData)(((((QData)((IData)(
						       (0xfffffU 
							== 
							(0xfffffU 
							 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U])))) 
				       << 0x3cU) | 
				      (((QData)((IData)(
							(0x7fU 
							 & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
							     << 0xbU) 
							    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
							       >> 0x15U))))) 
					<< 0x35U) | 
				       (((QData)((IData)(
							 (1U 
							  & (IData)(
								    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
								     >> 0x1fU))))) 
					 << 0x34U) 
					| (((QData)((IData)(
							    (0xfffffU 
							     & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((0x80000000U 
							       & ((IData)(
									  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
									   >> 0x20U)) 
								  << 0x1fU)) 
							      | (0x7fffffffU 
								 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223))))))))) 
				     >> 0x20U)));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[0U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
	        ? __Vtemp116[0U] : ((7U == (7U & ((
						   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
						   << 3U) 
						  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
						     >> 0x1dU))))
				     ? __Vtemp117[0U]
				     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[0U]));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[1U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
		    ? __Vtemp111[1U] : ((7U == (7U 
						& ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
						    << 3U) 
						   | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
						      >> 0x1dU))))
					 ? (0xefefffffU 
					    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])
					 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U]))
	        : ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
					    >> 0x1dU))))
		    ? __Vtemp117[1U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[2U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
		    ? (1U & ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
					    << 3U) 
					   | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
					      >> 0x1dU))))
			      ? (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U])
			      : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U]))
		    : ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
				      << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
						>> 0x1dU))))
		        ? (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U])
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U]))
	        : ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
				  << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
					    >> 0x1dU))))
		    ? (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U])
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U]));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_exc 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
		    ? ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U] 
			>> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
		    : ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_134[1U] 
			>> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
	        : 0U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1611(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1611\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:81181
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_id__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_id__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_564 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_575));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_592 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_603));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_620 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_631));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_536 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_547));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_648 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_659));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_676 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_687));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_bits_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2379
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem_R0_en) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_read_req_bits_addr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1612(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1612\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4058) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 3U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4078) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a 
		    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0xbU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_rob_id__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_3779)
	        ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4109));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_rob_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_rob_id__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342700
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_6) 
	     != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:32611
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_18)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_21));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1613(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1613\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365490
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__req_dw 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365490
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
	    = (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
					  ? (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
						     >> 0x20U))
					  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign)
					      ? 0xffffffffU
					      : 0U)))) 
			<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2))));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
	    = (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
					   ? (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
						      >> 0x20U))
					   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign)
					       ? 0xffffffffU
					       : 0U)))) 
			 << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_bits_in2))) 
		       >> 0x20U));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign;
    } else {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_46) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[0U];
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[1U];
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U];
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_source 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_corrupt 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:40598
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_718) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_690 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:49850
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_718) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_690 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_param 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:59316
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
					     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_repeat)))) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:422362
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_135))) {
	vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_162 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__select;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1614(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1614\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_745_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_701))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_745_1 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_716;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197212
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_sum
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_sum__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197212
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_debug
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_debug__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197212
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_dprv
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_dprv__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197212
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_status_mxr
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_mxr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197212
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_vaddr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_vaddr
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_vaddr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_vaddr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348236
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ 
	    = (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
		     >> 0x14U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1615(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1615\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp122,95,0,3);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387051
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_mask__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387051
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_446));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_432));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:331864
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_miss;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:331864
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_54 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_valid;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_status_debug 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_status_debug
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__value_1];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_439));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_valid) {
	__Vtemp122[0U] = (IData)((((QData)((IData)(
						   (1U 
						    & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
						       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])))) 
				   << 0x20U) | (QData)((IData)(
							       ((0xff800000U 
								 & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
									    & (~ 
									       (((0U 
										== 
										(7U 
										& ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
										<< 3U) 
										| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
										>> 0x1dU)))) 
										| VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
										 ? 0x1c0U
										 : 0U))) 
									   & (~ 
									      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									        ? 0x194U
									        : 0U))) 
									  & (~ 
									     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									       ? 0x80U
									       : 0U))) 
									 & (~ 
									    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									      ? 0x40U
									      : 0U))) 
									| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									    ? 0x6bU
									    : 0U)) 
								       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									   ? 0x17fU
									   : 0U)) 
								      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									  ? 0x180U
									  : 0U)) 
								     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
									 ? 0x1c0U
									 : 0U)) 
								    << 0x17U)) 
								| (0x7fffffU 
								   & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
									 | (0U 
									    == 
									    (7U 
									     & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
										<< 3U) 
										| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
										>> 0x1dU))))) 
									| VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
								        ? 
								       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
									 ? 0x400000U
									 : 0U)
								        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122) 
								      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									  ? 0x7fffffU
									  : 0U))))))));
	__Vtemp122[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
			  | (IData)(((((QData)((IData)(
						       (1U 
							& ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
							   & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])))) 
				       << 0x20U) | (QData)((IData)(
								   ((0xff800000U 
								     & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
										& (~ 
										(((0U 
										== 
										(7U 
										& ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
										<< 3U) 
										| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
										>> 0x1dU)))) 
										| VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
										 ? 0x1c0U
										 : 0U))) 
									       & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
										 ? 0x194U
										 : 0U))) 
									      & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
										 ? 0x80U
										 : 0U))) 
									     & (~ 
										((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
										 ? 0x40U
										 : 0U))) 
									    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									        ? 0x6bU
									        : 0U)) 
									   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									       ? 0x17fU
									       : 0U)) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									      ? 0x180U
									      : 0U)) 
									 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x1c0U
									     : 0U)) 
									<< 0x17U)) 
								    | (0x7fffffU 
								       & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
									     | (0U 
										== 
										(7U 
										& ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
										<< 3U) 
										| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
										>> 0x1dU))))) 
									    | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
									    ? 
									   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
									     ? 0x400000U
									     : 0U)
									    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122) 
									  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									      ? 0x7fffffU
									      : 0U))))))) 
				     >> 0x20U)));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[0U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? __Vtemp122[0U] : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
					 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U]
					 : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
					     ? ((7U 
						 == 
						 (7U 
						  & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
						      << 3U) 
						     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
							>> 0x1dU))))
						 ? 0U
						 : 
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])
					     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
						 ? 
						((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
						   ? 
						  vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]
						   : 
						  vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U]))
						 : 
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]))))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U]
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
					  << 3U) | 
					 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
					  >> 0x1dU))))
			    ? 0U : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])
		        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
			        ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
					 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]
					 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U]))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]))));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[1U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? __Vtemp122[1U] : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
					 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U]
					 : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
					     ? ((7U 
						 == 
						 (7U 
						  & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
						      << 3U) 
						     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
							>> 0x1dU))))
						 ? 0xe0080000U
						 : 
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])
					     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
						 ? 
						((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
						  ? 0xe0080000U
						  : 
						 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
						   ? 
						  vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U]
						   : 
						  vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U]))
						 : 
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]))))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U]
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
					  << 3U) | 
					 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
					  >> 0x1dU))))
			    ? 0xe0080000U : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])
		        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
			        ? 0xe0080000U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
						  ? 
						 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U]
						  : 
						 vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U]))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]))));
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[2U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U])
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U]
		        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
			    ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
					      << 3U) 
					     | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
						>> 0x1dU))))
			        ? 0U : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])
			    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
				    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
					     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]
					     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U]))
			        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]))))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U]
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
					  << 3U) | 
					 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
					  >> 0x1dU))))
			    ? 0U : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])
		        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
			        ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
					 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]
					 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U]))
			    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]))));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_exc 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
		    ? ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
			 << 4U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
				   << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
						& (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
						   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100) 
							& VL_GTES_III(1,6,6, 0U, 
								      (0x3fU 
								       & (((IData)(0x3900U) 
									   + 
									   VL_EXTENDS_II(14,13, 
										(0xfffU 
										& ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
										<< 0xcU) 
										| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
										>> 0x14U))))) 
									  >> 8U)))) 
						       & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89) 
						      & (~ 
							 ((((~ 
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
							      >> 1U)) 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
							       >> 0x18U)) 
							   & (0U 
							      != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
							  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
							      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
								 >> 1U)) 
							     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
								& (0U 
								   != 
								   (3U 
								    & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig))))))))) 
					       << 1U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
						    & (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
						       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100))))))
		    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
			   << 4U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
				      ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
					  | ((7U == 
					      (7U & 
					       ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
						 << 3U) 
						| (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
						   >> 0x1dU)))) 
					     & (~ (
						   vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
						   >> 0x13U)))) 
					 << 4U) : 0U)))
	        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
		       << 4U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
				  ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
				      | ((7U == (7U 
						 & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
						     << 3U) 
						    | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
						       >> 0x1dU)))) 
					 & (~ (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
					       >> 0x13U)))) 
				     << 4U) : 0U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1616(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1616\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_write_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_W0_mask))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_157));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_158[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_157));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_write_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_W0_mask))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_195));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_196[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_195));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_write_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_W0_mask))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_233));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1617(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1617\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_234[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_233));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_write_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_W0_mask))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_271));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2374
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3_io_write_en) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext_W0_mask) 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_272[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT___GEN_271));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_5_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_5_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[5U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_4_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_4_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[4U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_3_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_3_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[3U]);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1618(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1618\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_2_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_2_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[2U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_0_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_0_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_1_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_1_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[1U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_6_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_6_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[6U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_7_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_7_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[7U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_8_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_8_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[8U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_9_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_9_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[9U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_10_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_10_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xaU]);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1619(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1619\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_11_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_11_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xbU]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_12_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_12_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xcU]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_13_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_13_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xdU]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_14_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_14_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xeU]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_data_15_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_data_15_0
	       [0U] : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xfU]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381816
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___GEN_13) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_14));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x13U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[5U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[4U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1620(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1620\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0x13U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[5U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[4U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_shift__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__in_shift;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_shift__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_shift__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_data__v0 
	    = (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_8);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_valid__v0 
	    = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__performing_single_mul)) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_1013))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_valid__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_valid__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_bits__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__performing_single_preload)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_0_rob_id)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_bits_1_rob_id));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_bits__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_rob_id_bits__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_accumulate__v0 
	    = (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_8 
		     >> 0x1eU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_accumulate__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_accumulate__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1621(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1621\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_is_acc_addr__v0 
	    = (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_8 
		     >> 0x1fU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_is_acc_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_c_addr_is_acc_addr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
	= (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_366);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_2_0 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___GEN_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_2_0 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___GEN_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:59316
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___T_5) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__saved_size 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_valid 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___GEN_2;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_11) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_valid = 0U;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_2_0 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___GEN_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:200081
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_fromDMA 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__q__DOT___T_fromDMA
	       [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_78));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_sum)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_sum)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_sum)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_sum)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_sum)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_sum)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_sum)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_sum)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_sum)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_sum)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_sum)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_sum)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_sum)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_sum)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_sum)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_sum))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1622(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1622\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_debug)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_debug)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_debug)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_debug)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_debug)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_debug)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_debug)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_debug)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_debug)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_debug)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_debug)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_debug)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_debug)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_debug)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_debug)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_debug))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_dprv)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_dprv)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_dprv)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_dprv)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_dprv)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_dprv)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_dprv)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_dprv)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_dprv)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_dprv)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_dprv)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_dprv)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_dprv)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_dprv)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_dprv)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_dprv))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1623(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1623\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_mxr)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_mxr)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_mxr)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_mxr)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_mxr)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_mxr)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_mxr)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_mxr)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_mxr)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_mxr)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_mxr)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_mxr)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_mxr)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_mxr)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_mxr)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_mxr))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_0_fromDMA 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_fromDMA
	       [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_38));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1624(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1624\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_2_0 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___GEN_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_418));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:314103
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__firing) {
	if (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__firing) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_690))) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_ready)) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_481)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_489)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_491));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48521
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_mask__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_0_fromDMA 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_fromDMA
	       [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_38));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1625(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1625\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_2_0 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___GEN_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342007
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:365490
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
    } else {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
	    if ((0x40U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__count))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__isHi;
	    } else {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_99) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__isHi;
		    } else {
			if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
			}
		    }
		} else {
		    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		    }
		}
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_99) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__isHi;
		} else {
		    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		    }
		}
	    } else {
		if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_144 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_155));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_172 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_183));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_200 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_211));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1626(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1626\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_228 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_239));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_508 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_519));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_480 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_491));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_452 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_463));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_424 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_435));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_396 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_407));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_368 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_379));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_340 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_351));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_312 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_323));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_284 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_295));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_256 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_267));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_0_fromDMA 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_fromDMA
	       [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_38));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:170980
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_198_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_133))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_198_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_169;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1627(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1627\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_425));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockUncachedGrant 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3811)
	    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_in_0_valid)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid))
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_7) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_0_fromDMA 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_fromDMA
	       [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_38));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_size 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_sum)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_sum)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_sum)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_sum)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_sum)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_sum)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_sum)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_sum)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_sum)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_sum)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_sum)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_sum)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_sum)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_sum)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_sum)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_sum))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1628(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1628\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_debug)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_debug)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_debug)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_debug)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_debug)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_debug)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_debug)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_debug)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_debug)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_debug)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_debug)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_debug)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_debug)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_debug)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_debug)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_debug))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_dprv)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_dprv)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_dprv)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_dprv)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_dprv)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_dprv)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_dprv)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_dprv)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_dprv)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_dprv)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_dprv)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_dprv)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_dprv)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_dprv)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_dprv)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_dprv))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_dprv__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1629(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1629\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_mxr)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_mxr)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_mxr)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_mxr)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_mxr)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_mxr)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_mxr)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_mxr)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_mxr)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_mxr)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_mxr)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_mxr)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_mxr)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_mxr)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_mxr)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_mxr))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen) 
	     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1252))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222 
		= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1228 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1252)
		       ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
						   >> 7U)))
		       : 0U));
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ll_wen) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1222 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1228;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1630(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1630\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x302U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_medeleg 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x140U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sscratch 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3901) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_ppn 
		    = (QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata))));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x143U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
		= (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_tval;
		    }
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_tval;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags 
	= (0x1fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
			     ? ((3U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
						  >> 0x14U)))
				 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata
				 : ((1U == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
				     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata
				     : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_118))))
			     : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_118)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1631(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1631\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
				    ? ((0x141U == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
				        ? (~ (VL_ULL(1) 
					      | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
				        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_80)
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_80));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x343U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
		= (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_tval;
		    }
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__delegate)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_tval;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_85 
	= (0x3fU & ((IData)(vlTOPp->reset) ? 0U : (IData)(
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
							    ? 
							   ((0xb02U 
							     == 
							     (0xfffU 
							      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
								 >> 0x14U)))
							     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata
							     : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_86)))
							    : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_86))))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 = VL_ULL(0);
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0xb02U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			>> 6U));
	    } else {
		if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_86))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_90;
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_86))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_90;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1632(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1632\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:364063
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_93 
	= (0x3fU & ((IData)(vlTOPp->reset) ? 0U : (IData)(
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
							    ? 
							   ((0xb00U 
							     == 
							     (0xfffU 
							      & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
								 >> 0x14U)))
							     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata
							     : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_94)))
							    : (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_94))))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:364063
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 = VL_ULL(0);
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			>> 6U));
	    } else {
		if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_94))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_98;
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_94))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_98;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0xcU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0xdU)));
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1633(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1633\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 0xfU)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 2U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:314103
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__firing) {
	if (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__firing) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_595))) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_ready)) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_460)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_468)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_470));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x104U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3907;
	} else {
	    if ((0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
		    = (VL_ULL(0x1aaa) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342700
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1 = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_4)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
				    ? ((0x341U == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
				        ? (~ (VL_ULL(1) 
					      | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
				        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_87)
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_87));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1634(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1634\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp143,127,0,4);
    VL_SIGW(__Vtemp144,127,0,4);
    VL_SIGW(__Vtemp145,127,0,4);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
				    ? ((0x7b1U == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
				        ? (~ (VL_ULL(1) 
					      | (~ vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
				        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_76)
				    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_76));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp143, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr 
		    = (1U & (__Vtemp143[0U] >> 0x16U));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp144, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw 
		    = (1U & (__Vtemp144[0U] >> 0x15U));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp145, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm 
		    = (1U & (__Vtemp145[0U] >> 0x14U));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_a_fire__v0 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_500)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_ready));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_a_fire__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_a_fire__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1635(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1635\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_funct__v0 
	    = (0x7fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
			>> 0x19U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_funct__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_funct__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_opcode__v0 
	    = (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_inst_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381816
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_4)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___GEN_11)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_6))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore_io_sourceD_rdat_data[0U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore_io_sourceD_rdat_data[1U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore_io_sourceD_rdat_data[2U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore_io_sourceD_rdat_data[3U];
	if ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0[0U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[0U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0[1U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[1U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0[2U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[2U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0[3U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT____Vlvbound1[3U];
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_data__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_b_fire__v0 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_595)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_ready));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_b_fire__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_b_fire__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:268570
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_d_fire__v0 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_690)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_ready));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_d_fire__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT___T_d_fire__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_cntl_signals_q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_opcode 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1636(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1636\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause 
			= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped)
			    ? 4U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)
				     ? 3U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)
					      ? 2U : 1U)));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3973;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x 
			= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
					 >> 2U)));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action 
			= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3973) 
			   & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3955 
				      >> 0xcU)));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_745_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_701))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_745_0 
		= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1637(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1637\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w 
			= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
					 >> 1U)));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
	    if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 3U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
	    if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 4U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3915) {
	    if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m 
		    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				     >> 6U)));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_stip 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3783 
				 >> 5U)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1638(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1638\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	if ((0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mip_seip 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_3783 
				 >> 9U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_sum__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_sum__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_mxr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_mxr__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_debug__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_status_debug__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:169732
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1040) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1007 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:165304
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1772) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1739 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:336767
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1823) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1790 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	= (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_404));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_785) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_4_0_state))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut 
		= ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data)))
		    ? 8U : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data)))
			     ? 0xeU : ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data)))
				        ? 6U : ((3U 
						 == 
						 (3U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_param___05FT_18_data)))
						 ? 0xcU
						 : 0U))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1639(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1639\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp146,127,0,4);
    VL_SIGW(__Vtemp147,127,0,4);
    VL_SIGW(__Vtemp148,127,0,4);
    VL_SIGW(__Vtemp149,127,0,4);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342700
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_e_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_sink___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp146, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs 
		    = ((0U != (3U & ((__Vtemp146[1U] 
				      << 0x11U) | (
						   __Vtemp146[0U] 
						   >> 0xfU))))
		        ? 3U : 0U);
	    } else {
		if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    VL_EXTEND_WQ(102,64, __Vtemp147, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs 
			= ((0U != (3U & ((__Vtemp147[1U] 
					  << 0x11U) 
					 | (__Vtemp147[0U] 
					    >> 0xfU))))
			    ? 3U : 0U);
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1592) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1562 
	    = vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1541) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1511 
	    = vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp148, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
		    = ((0U != (3U & ((__Vtemp148[1U] 
				      << 0x13U) | (
						   __Vtemp148[0U] 
						   >> 0xdU))))
		        ? 3U : 0U);
	    } else {
		if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    VL_EXTEND_WQ(102,64, __Vtemp149, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
			= ((0U != (3U & ((__Vtemp149[1U] 
					  << 0x13U) 
					 | (__Vtemp149[0U] 
					    >> 0xdU))))
			    ? 3U : 0U);
		}
	    }
	}
    }
}
