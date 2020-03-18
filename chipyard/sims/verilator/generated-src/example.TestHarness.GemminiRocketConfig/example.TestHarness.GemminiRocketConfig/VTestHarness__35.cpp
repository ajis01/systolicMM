// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1704(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1704\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:148596
    if (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_530 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:140017
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_92))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_108 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_4;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:124368
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_735 
	    = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
			>> 6U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:126568
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_47) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2))) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_3 
		= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_46;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:121303
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_735 
	    = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			>> 6U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:148596
    if (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_581 
	    = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62) 
			 >> 2U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:148596
    if (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_580 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_62));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:123503
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_47) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_2))) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_3 
		= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_46;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_rocc_cmd_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_rs2__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_rs2;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_rs2__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_rs2__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_ar_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_ar_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1705(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1705\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_ar_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_ar_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_674) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354;
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_874;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_aw_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_aw_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_aw_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1706(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1706\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:76507
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4index_auto_out_aw_bits_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data__v0 
	    = (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U])) 
		<< 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[1U])) 
			      << 0x1fU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[0U])) 
					   >> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param__v0 
	    = (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
		     >> 0xcU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied__v0 
	    = (1U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
		     >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1707(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1707\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1708(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1708\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 
	    = (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
		     >> 0xdU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 
	    = (1U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
		     >> 2U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 
	    = (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U])) 
		<< 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[1U])) 
			      << 0x1fU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U])) 
					   >> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1709(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1709\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:32248
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_size 
	    = (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[6U] 
			<< 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
				  >> 0x17U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:32248
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__full 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater_io_deq_valid)) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_18))) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 
	    = (1U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
		     >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:32248
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT___T_5) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__Repeater__DOT__saved_address 
	    = (0x7fffffffU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[5U] 
			       << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_476[4U] 
					   >> 0x11U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1710(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1710\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191139
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_241_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_176))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_241_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_212;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1711(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1711\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_dst_bits_start_data 
		= (0x3fffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97);
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1712(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1712\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2745
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_en) 
	  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wmask) 
	    >> 4U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram__v0 
	    = (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[2U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:194233
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_11) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_shift 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_entry_shift;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1713(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1713\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:389778
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_4;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1714(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1714\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_dst_bits_start_is_acc_addr 
		= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_97 
			 >> 0x1fU));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_source___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_size___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_15 = 0U;
    } else {
	if ((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_15 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_300));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_9 = 0U;
    } else {
	if ((0x7fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		       >> 9U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_9 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_276));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1715(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1715\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_8 = 0U;
    } else {
	if ((0xffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		       >> 8U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_8 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_272));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_14 = 0U;
    } else {
	if ((3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_14 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_296));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_4 = 0U;
    } else {
	if ((0xfffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			>> 4U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_4 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_256));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_10 = 0U;
    } else {
	if ((0x3fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		       >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_10 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_280));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_12 = 0U;
    } else {
	if ((0xfU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		      >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_12 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_288));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1716(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1716\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_0 = 0U;
    } else {
	if ((0xffffU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			& (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_0 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_240));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_2 = 0U;
    } else {
	if ((0x3fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			 >> 2U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_2 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_248));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_11 = 0U;
    } else {
	if ((0x1fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		       >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_11 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_284));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_3 = 0U;
    } else {
	if ((0x1fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			 >> 3U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_3 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_252));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_5 = 0U;
    } else {
	if ((0x7ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			>> 5U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_5 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_260));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1717(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1717\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_13 = 0U;
    } else {
	if ((7U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
		    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_13 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_292));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_1 = 0U;
    } else {
	if ((0x7fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			 >> 1U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_1 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_244));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_6 = 0U;
    } else {
	if ((0x3ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			>> 6U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_6 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_264));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:3255
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_7 = 0U;
    } else {
	if ((0x1ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_id___05FT_18_data)) 
			>> 7U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_238)))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_217_7 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_user___05FT_18_data)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_268));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_size__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
		     >> 9U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1718(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1718\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
		     >> 0xeU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_983) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__lrscAddr 
	    = (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_addr 
				      >> 6U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:165304
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1869) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1845 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:336767
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1920) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1896 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3904) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_ack_addr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_address;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2745
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram_RW_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1719(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1719\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1835) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_22;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1835) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_10;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1720(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1720\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1835) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_18;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_1835) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_sfence_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___GEN_14;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:103526
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1087) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_level 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_70;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_862;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_70;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1721(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1721\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_74;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_866;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_74;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_78;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_870;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_78;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_66;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_858;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_66;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1722(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1722\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:194233
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_valid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_569)
					  ? ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_11)) 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_553)) 
						 & (0x10U 
						    >= 
						    (0xffU 
						     & (((IData)(1U) 
							 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_lg_len_req)) 
							- (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesRead)))))) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___GEN_6))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___GEN_6)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_9) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_1_bits_rs1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_rs1___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_9)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_rs1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_rs1___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_corrupt;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_denied;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1723(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1723\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_bits_opcode;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_sink__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_denied__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1724(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1724\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_source
	    [0U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size
	    [0U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 
	    = ((7U == vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_opcode
		[0U]) ? 4U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1725(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1725\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:316532
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_12 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_11)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_data__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_828)
	        ? vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data
	        : vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_data___05FT_18_data);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_data_0 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_data_0 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_data_0 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_data_0 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1726(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1726\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_999) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_data 
	    = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb__DOT___T))
	        ? VL_ULL(0) : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcacheArb__DOT___T))
			        ? VL_ULL(0) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_fp)
					        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_singleOut)
						    ? 
						   (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store)) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store)))
						    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__store)
					        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_rs2)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:120436
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_92))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_108 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_4;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_14;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1727(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1727\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_level 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388243
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_391[2U] 
		       >> 5U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:202869
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0xdU))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[4U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[3U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 0xdU))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[4U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[3U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1728(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1728\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_status_dprv 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_status_dprv
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__value_1];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:148596
    if (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_533 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:148596
    if (vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_532 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:106172
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
		       >> 9U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342558
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_auto_out_c_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_data[0U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_data[1U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_data[2U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_data[3U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1481) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_status_dprv 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_status_dprv
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT__value_1];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:82498
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_78 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_79) {
	    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_78 
		= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1729(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1729\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_level 
			= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1830
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_1 
		= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__resp_valid_0) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2373) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 3U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_4) {
		    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__arb__DOT___T_9)) 
			 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__state)))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid)
			        ? 3U : 2U);
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2243) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 1U;
			    }
			}
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2243) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__state = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:207455
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_1_status_mxr 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_bits_status_mxr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1730(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1730\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:207455
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_1_status_sum 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_bits_status_sum;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_255_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_254_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_data_3 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_data_2 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_data_1 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (3U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_data_0 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_825;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:207455
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT___T_1_status_debug 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_bits_status_debug;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:30023
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1146) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1116 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:96582
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1087) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1057 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1731(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1731\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:103526
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1087) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:107299
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1057 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:127627
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1087) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1057 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_239_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_238_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_level 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2745
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_en) 
	  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) 
	 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wmask) 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[2U] 
			   << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[1U] 
					>> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1732(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1732\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:206619
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__sectored_entries_0_tag 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_0_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_1_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_2_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
	    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_superpage_repl_addr))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__superpage_entries_3_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
		}
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_787) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__special_entry_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT__r_refill_tag;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_223_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_222_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386155
    if (((VL_ULL(0xffffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound6 
	    = vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_mask;
	if ((0x27U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask___05FT_55_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound6;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask___05FT_55_addr;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1733(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1733\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386155
    if (((VL_ULL(0xffffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound3 
	    = (((0U != (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
					  >> 0x20U)))) 
		<< 5U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_47));
	if ((0x27U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_bits_index))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound3;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_bits_index;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386583
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__lists 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_2);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_70;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_862;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_70;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_74;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_866;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_74;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1734(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1734\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_78;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_870;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_78;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0 = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
			    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0 
				    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_66;
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_858;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
		    if ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_66;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:352807
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sExp_Z 
	    = (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
			   ? ((IData)(0x400U) + VL_EXTENDS_II(13,12, 
							      (0x7ffU 
							       & ((0x7ffff800U 
								   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
								      << 0xbU)) 
								  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
								     >> 0x15U)))))
			   : ((0x1e00U & ((VL_LTES_III(1,14,14, 0xe00U, (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div))
					    ? 6U : 
					   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div) 
					    >> 9U)) 
					  << 9U)) | 
			      (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1735(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1735\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:136424
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2_auto_ctl_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_read
	    [0U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:136424
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2_auto_ctl_in_d_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source__v0 
	    = (0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_extra
			 [0U] >> 2U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147219
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read__v0 
	    = (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:147219
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra__v0 
	    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
		<< 2U) | (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2745
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram_RW_0_addr_pipe_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1736(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1736\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1737(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1737\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_data 
		= (0x3fffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1738(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1738\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1739(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1739\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_op2_bits_is_acc_addr 
		= (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor_io_out_bits_rs2 
				 >> 0x1fU)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((7U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_543)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_543;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1740(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1740\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((6U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_533)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_533;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1741(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1741\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((7U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_542)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_542;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1742(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1742\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((6U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_532)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_532;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1743(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1743\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((6U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_534)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_534;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1744(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1744\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((6U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_441 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_535)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_535;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1745(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1745\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((7U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_544)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_544;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1746(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1746\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((7U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_447 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_545)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_545;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1747(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1747\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_505)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_505;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1748(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1748\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_504)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_504;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1749(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1749\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_503)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_503;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1750(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1750\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_423 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_502)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_502;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1751(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1751\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((2U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_495)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_495;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1752(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1752\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((2U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_494)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_494;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1753(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1753\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((2U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_493)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_493;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1754(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1754\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_472)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_472;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1755(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1755\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_485)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_485;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1756(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1756\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_475)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_475;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1757(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1757\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_523)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_523;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1758(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1758\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((2U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_417 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_492)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_492;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1759(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1759\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_473)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_473;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1760(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1760\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_484)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_484;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1761(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1761\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_405 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_474)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_474;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1762(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1762\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_411 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_483)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_483;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1763(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1763\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_512)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_512;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1764(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1764\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_513)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_513;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1765(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1765\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_514)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_514;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1766(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1766\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_515)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_515;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1767(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1767\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_522)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_522;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1768(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1768\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_524)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_524;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1769(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1769\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_pc 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_2_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_525)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_525;
	}
    }
}
