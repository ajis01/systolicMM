// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7555(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7555\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_531 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_799) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_769 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456) 
		     >> 2U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_799) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_768 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrDebugInt_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_19));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 
		= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_35));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control 
		= (0xffffffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal);
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_800 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_867));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[1U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[1U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[2U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[2U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[3U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[3U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[4U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[4U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[5U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[5U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[6U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[6U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[7U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[7U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[8U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[8U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[9U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[9U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xaU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xaU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xbU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xbU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xcU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xcU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xdU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xdU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xeU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xeU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xfU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0xfU]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x10U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0x10U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x11U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0x11U]);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x12U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0x12U]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_868 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698) 
					   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747))
					   ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_879));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_680 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
					   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559))
					   ? 0U : vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_691));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7556(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7556\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype 
		= (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
			    >> 0x18U));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_1 
	    = ((0x40000U & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226)
	        ? 0x13U : 0x100073U);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_0 
	    = ((0x20000U & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226)
	        ? ((0x10000U & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226)
		    ? (0x38000003U | ((0x7000U & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
						  >> 8U)) 
				      | (0xf80U & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
						   << 7U))))
		    : (0x38000023U | ((0x1f00000U & 
				       (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
					<< 0x14U)) 
				      | (0x7000U & 
					 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
					  >> 8U)))))
	        : 0x13U);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->reset) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn) {
		vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 
		    = vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_66;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn) {
		    if ((0U == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data)))) {
			vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
		    }
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink_io_deq_valid) 
		& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
		   >> 0xeU)) & (0U == (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
						 >> 4U)))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn)
		  ? ((0U != (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data))) 
		     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_71))
		  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_71))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7557(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7557\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 1U;
	} else {
	    if (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
		 & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
		    & ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn))))) {
		vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 3U;
	    } else {
		if (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))
		      ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14282)) 
			 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) 
			     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
						>> 0x18U)))) 
			    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec) 
			       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported))))
		      : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
			 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 2U;
		} else {
		    if (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
			 & ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
			    & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)) 
			       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume))))) {
			vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 4U;
		    } else {
			if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe) 
			     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
			    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr 
				= vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_137;
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_534 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_799) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_766 
	    = (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x34U))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_718 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x34U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7558(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7558\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_719 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x31U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_720 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x2fU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_721 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x2eU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_746) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_722 
	    = (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				 >> 0x25U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata 
		= (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				 >> 1U)));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe) 
	     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf 
		= (0xffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				      >> 0x11U)));
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7559(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7559\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7560(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7560\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7561(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7561\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7562(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7562\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7563(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7563\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7564(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7564\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7565(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7565\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7566(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7566\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7567(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7567\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7568(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7568\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7569(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7569\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7570(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7570\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7571(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7571\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7572(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7572\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7573(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7573\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7574(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7574\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7575(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7575\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7576(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7576\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7577(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7577\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7578(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7578\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x30U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x28U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x28U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x18U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x18U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7579(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7579\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x10U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x11U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x38U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x38U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x19U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 8U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 8U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 9U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7580(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7580\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7581(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7581\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7582(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7582\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846) 
	     & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
					   >> 0x20U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4 
		= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				    >> 0x20U)));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851) 
	     & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8 
		= (0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	} else {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8) {
		    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 1U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_578 
	    = (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_530 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_581 
	    = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
			 >> 2U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7583(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7583\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_611) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_580 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_533 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_532 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7586(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7586\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_755 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_755 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_758)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_757));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_829 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_829 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_832)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_831));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_707 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_707 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_710)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_709));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:154336
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_810 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_810 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_813)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_812));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7587(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7587\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_567 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_567 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_570)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_569));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_644)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_643));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_519 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_519 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_522)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_521));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:156555
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) {
	    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_625)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_624));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_879 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_868);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype) 
	    << 0x18U) | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:162799
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) {
	if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14282) {
		vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 1U;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14284) {
		vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)
		        ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)
				 ? 0U : 2U));
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14285) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn) {
			vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
		    } else {
			if ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
			      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn)) 
			     & (0U == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7588(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7588\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14275 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226 
		     >> 0x11U)) | ((0x1000U <= (0xffffU 
						& vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226)) 
				   & (0x101fU >= (0xffffU 
						  & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4226)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_757 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_755) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_758 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_755)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_831 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_829) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_832 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_829)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_709 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_707) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_710 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_707)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_812 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_810) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_813 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_810)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_569 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_567) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_570 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_567)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_643 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641) 
		 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7589(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7589\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_644 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_521 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_519) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_522 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_519)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_624 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_625 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported 
	= (1U & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14275))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14275) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14284 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_14285 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1699 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
	   & (1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:161010
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_415));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
	   & ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
	      & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)))));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__7590(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__7590\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_124 
	= ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
			 & (~ (0x3fU & ((IData)(7U) 
					<< (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80)))))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_555 
	= ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_534) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_208 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
	    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_82)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_272 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_82)))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_137 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
		      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
		      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_876 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_800)) 
		   | (0U == vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_868 
		     < vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_688 
	= ((((0U == ((((((((((((((((((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0U] 
				      | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[1U]) 
				     | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[2U]) 
				    | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[3U]) 
				   | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[4U]) 
				  | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[5U]) 
				 | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[6U]) 
				| vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[7U]) 
			       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[8U]) 
			      | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[9U]) 
			     | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xaU]) 
			    | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xbU]) 
			   | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xcU]) 
			  | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xdU]) 
			 | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xeU]) 
			| vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0xfU]) 
		       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x10U]) 
		      | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x11U]) 
		     | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0x12U])) 
	     | (0U == vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_680 
	       < vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_19 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0) 
	   & ((IData)(vlTOPp->reset) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrDebugInt_0) 
					& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_71 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7591(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7591\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin_io_d));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin_io_d 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7592(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7592\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_ 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7593(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7593\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_ 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_ 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7594(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7594\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_source)
	      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)) 
	    << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_92))
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_4)
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_108))) 
			     << 3U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_97)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80 
	= ((3U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data
	[vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_4 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_) 
		 + ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
		    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3805 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4414 
	= (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
			        ? 0xffU : 0U) << 0x18U) 
			     | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
				   ? 0xffU : 0U) << 0x10U) 
				| ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
				      ? 0xffU : 0U) 
				    << 8U) | ((0x10U 
					       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
					    ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
						   ? 0xffU
						   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7595(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7595\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:162225
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d;
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_repeat 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
	    >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_97)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address 
	= (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
		       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_address)
		       : vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data) 
		     | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_97) 
					    << 3U) 
					   | (0x1fffU 
					      & ((IData)(0x3fU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size)))) 
					  | (7U & (~ 
						   (0x3ffU 
						    & ((IData)(7U) 
						       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
	    << 2U) | (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_4 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_) 
		 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_7 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_4)) 
	   != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_37 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
		     >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_40 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
		     >> 2U)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_43 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
		  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
			       >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7596(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7596\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_46 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
		  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_30 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
			   >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_33 
	= (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
			   >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505 
	= ((0x80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
		     >> 4U)) | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
					 >> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_49 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2) 
		 - (1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
			  | (1U & (((IData)(1U) << 
				    (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293))) 
				   >> 3U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_30 
	= ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
		     << 1U)) | (7U & (~ (0x3fU & ((IData)(7U) 
						  << 
						  (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7597(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7597\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55 
	= ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
	   & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_7));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456 
	= ((4U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2eU)) << 2U)) | (3U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x2fU))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_23 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2fU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2fU)))) 
			   >> 1U) & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						>> 0x26U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_26 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2fU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2fU)))) 
			   >> 1U) & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x26U))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
	= ((((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x24U))) ? 0xffU : 0U) 
	    << 0x18U) | ((((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					  >> 0x23U)))
			    ? 0xffU : 0U) << 0x10U) 
			 | ((((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x22U)))
			       ? 0xffU : 0U) << 8U) 
			    | ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					      >> 0x21U)))
			        ? 0xffU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7598(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7598\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231 
	= ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 0x2cU)) << 4U)) | 
	   (0xfU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x27U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3805) 
	   & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				   >> 0x34U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3805) 
	   & (4U != (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				   >> 0x34U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_39 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_30) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_37))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_42 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_30) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_45 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_33) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_33) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_80))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_46))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7599(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7599\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1527 
	= ((0x82U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
	    ? (0U == (0x80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
			       >> 3U))) : ((0x83U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					    ? (0U == 
					       (0x80U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						   >> 3U)))
					    : ((0x84U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
					        ? (0U 
						   == 
						   (0x80U 
						    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
						       >> 3U)))
					        : (
						   (0x85U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						    ? 
						   (0U 
						    == 
						    (0x80U 
						     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							>> 3U)))
						    : 
						   ((0x86U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						     ? 
						    (0U 
						     == 
						     (0x80U 
						      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							 >> 3U)))
						     : 
						    ((0x87U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						      ? 
						     (0U 
						      == 
						      (0x80U 
						       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							  >> 3U)))
						      : 
						     ((0x88U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						       ? 
						      (0U 
						       == 
						       (0x80U 
							& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							   >> 3U)))
						       : 
						      ((0x89U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505))
						        ? 
						       (0U 
							== 
							(0x80U 
							 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							    >> 3U)))
						        : 
						       ((0x8aU 
							 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505)) 
							| (0U 
							   == 
							   (0x80U 
							    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
							       >> 3U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7600(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7600\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35 
	= ((1U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_30) 
		  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_30)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg_io_d 
	= (((QData)((IData)(((0x1c0U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
					  ? 0U : (IData)(
							 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x34U))) 
					<< 6U)) | (
						   (0x38U 
						    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
							 ? 0U
							 : (IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x31U))) 
						       << 3U)) 
						   | ((6U 
						       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
							    ? 2U
							    : (IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x2fU))) 
							  << 1U)) 
						      | (1U 
							 & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)) 
							    & (IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x2eU))))))))) 
	    << 0x2eU) | (((QData)((IData)((0x1ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
					     ? 0U : (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x25U)))))) 
			  << 0x25U) | (((QData)((IData)(
							(0xfU 
							 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
							     ? 0U
							     : (IData)(
								       (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									>> 0x21U)))))) 
					<< 0x21U) | 
				       (((QData)((IData)(
							 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)
							   ? 0U
							   : (IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								      >> 1U))))) 
					 << 1U) | (QData)((IData)(
								  (1U 
								   & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid)) 
								      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_44 
	= ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_26) 
		   | ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			       >> 0x26U)) & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
		  << 3U)) | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_26) 
				     | ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						 >> 0x26U)) 
					& (~ (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x25U))))) 
				    << 2U)) | ((2U 
						& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_23) 
						    | ((~ (IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								   >> 0x26U))) 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								  >> 0x25U)))) 
						   << 1U)) 
					       | (1U 
						  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_23) 
						     | ((~ (IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x26U))) 
							& (~ (IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								      >> 0x25U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7601(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7601\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_286 
	= ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	    ? (0x10U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					  >> 0x27U))))
	    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	        ? (0x10U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					      >> 0x27U))))
	        : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		    ? (0x10U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))
		    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						   >> 0x27U))))
		        : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			    ? (0U == (0x50U & (IData)(
						      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						       >> 0x27U))))
			    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			        ? (0x10U == (0x50U 
					     & (IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							>> 0x27U))))
			        : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
				    ? (0x10U == (0x50U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x27U))))
				    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
				        ? (0x10U == 
					   (0x50U & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x27U))))
				        : (0x40U == 
					   (0x50U & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x27U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7602(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7602\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3664 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3669 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3799 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1fU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3784 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1cU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3789 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1dU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3794 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1eU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7603(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7603\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3769 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x19U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3774 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1aU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3779 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1bU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3754 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x16U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3759 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x17U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3764 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x18U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7604(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7604\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3739 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x13U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3744 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x14U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3749 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x15U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3724 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x10U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3729 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x11U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3734 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3641) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x12U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7605(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7605\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
		>> 6U)) & (0x10U == (0x50U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x27U))))) 
	   & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
			   >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
		>> 7U)) & (0x10U == (0x50U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x27U))))) 
	   & (0xffffffffU == vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3850 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 8U)) & (0x10U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3830 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3835 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7606(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7606\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3965 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1fU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3950 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1cU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3955 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1dU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3960 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1eU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3935 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x19U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3940 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1aU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7607(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7607\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3945 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x1bU)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3920 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x16U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3925 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x17U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3930 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x18U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3905 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x13U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3910 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x14U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7608(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7608\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3915 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x15U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3890 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x10U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3895 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x11U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3900 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3807) 
	    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
	       >> 0x12U)) & (0U == (0x50U & (IData)(
						    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_82 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_48) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_46) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
	    << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_48) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_46) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
		       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_45) 
				   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_43) 
				      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
				  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_45) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_43) 
						 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
					     << 4U) 
					    | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_42) 
						 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_40) 
						    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
						<< 3U) 
					       | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_42) 
						    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_40) 
						       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
						   << 2U) 
						  | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_39) 
						       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_37) 
							  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
						      << 1U) 
						     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_39) 
							| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_37) 
							   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7610(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7610\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_669 
	= ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_0) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_1) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_2) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid))) 
	      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_3) 
		 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid))) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_4) 
		& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)))) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_5) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_6) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_611 
	= (1U & (((((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4)) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
		     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
		    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
		   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_514 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
	    << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid) 
		       << 5U) | ((0x10U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)) 
					   << 4U)) 
				 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
				     << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
						<< 2U) 
					       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
						   << 1U) 
						  | (1U 
						     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_300 
	= ((0x16U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	    ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x27U))))
	    : ((0x15U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x27U))))
	        : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		    ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					       >> 0x27U))))
		    : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						   >> 0x27U))))
		        : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			    ? (0U == (0x50U & (IData)(
						      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						       >> 0x27U))))
			    : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			        ? (0U == (0x50U & (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							   >> 0x27U))))
			        : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
				    ? (0U == (0x50U 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x27U))))
				    : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
				       | ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
					  | ((0xdU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
					     | ((0xcU 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
						| ((0xbU 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
						   | ((0xaU 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
						      | ((9U 
							  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231)) 
							 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_286)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7611(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7611\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe)
	    ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
		       >> 1U)) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3850) 
	   & (3U == (3U & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3850) 
	   & (0xffffU == (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				     >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3830) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3830) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3830) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3830) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3835) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3835) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3835) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3835) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7612(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7612\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3965) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3965) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3965) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3965) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3950) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3950) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3950) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3950) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3955) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3955) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3955) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7613(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7613\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3955) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3960) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3960) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3960) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3960) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3935) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3935) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3935) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3935) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3940) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3940) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7614(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7614\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3940) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3940) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3945) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3945) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3945) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3945) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3920) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3920) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3920) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3920) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3925) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7615(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7615\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3925) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3925) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3925) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3930) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3930) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3930) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3930) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3905) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3905) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3905) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3905) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7616(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7616\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3910) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3910) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3910) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3910) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3915) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3915) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3915) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3915) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3890) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3890) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3890) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7617(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7617\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3890) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3895) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3895) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3895) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3895) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3900) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3900) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x10U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3900) 
	   & (0xffU == (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				 >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3900) 
	   & (0xffU == (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_46 
	= (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35) 
			  >> 4U))) << 2U) | (((0U != 
					       (3U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
						   >> 2U))) 
					      << 1U) 
					     | (1U 
						& (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
						    >> 3U) 
						   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
						      >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7618(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7618\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_638 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506) 
		     - ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
			& ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_611)
			    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_669)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor_io_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_611)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_669));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_611)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_669));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_524 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_514) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_521))) 
	    << 7U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
		       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid) 
				  << 5U) | ((0x10U 
					     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4)) 
						<< 4U)) 
					    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
						<< 3U) 
					       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
						   << 2U) 
						  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
						      << 1U) 
						     | (1U 
							& (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_309 
	= ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	    ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x27U))))
	    : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
	        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x27U))))
	        : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		    ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					       >> 0x27U))))
		    : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
		        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						   >> 0x27U))))
		        : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			    ? (0U == (0x50U & (IData)(
						      (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						       >> 0x27U))))
			    : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
			        ? (0U == (0x50U & (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							   >> 0x27U))))
			        : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
				    ? (0U == (0x50U 
					      & (IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x27U))))
				    : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
				        ? (0U == (0x50U 
						  & (IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							     >> 0x27U))))
				        : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3231))
					    ? (0U == 
					       (0x50U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							   >> 0x27U))))
					    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_300))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7619(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7619\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3664) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3669) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3799) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3784) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3789) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3794) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3769) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3774) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3779) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7620(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7620\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3754) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3759) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3764) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3739) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3744) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3749) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3724) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3729) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3734) 
	      & (0U != (0xffU & vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7621(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7621\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_46)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_3));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_2))
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_46)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_3));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1035 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_6 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_526 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_524) 
	   | (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_524) 
			 >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_246 
	= ((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3724) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 8U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3724) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x10U)))))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3724) 
			 & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					    >> 0x18U)))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3729) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3729) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3729) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3734) 
		   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				      >> 8U)))))) | 
	    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3734) 
		& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				   >> 0x10U)))))) | 
	   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3734) 
	       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				  >> 0x18U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7622(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7622\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1087 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1035) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1043)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1087 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_528 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_526) 
	   | (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_526) 
			>> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_258 
	= (((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_246) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3739) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 8U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3739) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x10U)))))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3739) 
			 & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					    >> 0x18U)))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3744) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3744) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3744) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3749) 
		   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				      >> 8U)))))) | 
	    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3749) 
		& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				   >> 0x10U)))))) | 
	   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3749) 
	       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				  >> 0x18U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7623(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7623\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_534 
	= ((0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_528) 
			>> 1U) | (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_528) 
					    >> 5U)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_521) 
	      << 7U));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_270 
	= (((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_258) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3754) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 8U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3754) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x10U)))))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3754) 
			 & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					    >> 0x18U)))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3759) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3759) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3759) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3764) 
		   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				      >> 8U)))))) | 
	    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3764) 
		& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				   >> 0x10U)))))) | 
	   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3764) 
	       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				  >> 0x18U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7624(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7624\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537 
	= (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_534) 
		     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_534)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_282 
	= (((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_270) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3769) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 8U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3769) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x10U)))))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3769) 
			 & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					    >> 0x18U)))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3774) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3774) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3774) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3779) 
		   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				      >> 8U)))))) | 
	    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3779) 
		& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				   >> 0x10U)))))) | 
	   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3779) 
	       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				  >> 0x18U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7625(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7625\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_541 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_514));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_0_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537))
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_0))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_4_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 4U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_5_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 5U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_5))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_567 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
	       >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_566 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
	       >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_565 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
		     >> 4U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_564 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
	       >> 3U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_563 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
	       >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 6U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_6))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__7626(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__7626\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_561 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_562 
	= ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
	       >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_1))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 3U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_3))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
		 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506))
		     ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_537) 
			   >> 2U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_641_2))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_294 
	= (((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_282) 
		      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48)) 
		     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49) 
			| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3784) 
			   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					      >> 8U)))))) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3784) 
			  & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					     >> 0x10U)))))) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51) 
		      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3784) 
			 & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					    >> 0x18U)))))) 
		  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52)) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53) 
		    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3789) 
		       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					  >> 8U)))))) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54) 
		   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3789) 
		      & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					 >> 0x10U)))))) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55) 
		  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3789) 
		     & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
					>> 0x18U)))))) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56)) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57) 
		| ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3794) 
		   & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				      >> 8U)))))) | 
	    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58) 
	     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3794) 
		& (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				   >> 0x10U)))))) | 
	   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59) 
	    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3794) 
	       & (0U != (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_545 
				  >> 0x18U))))));
}
