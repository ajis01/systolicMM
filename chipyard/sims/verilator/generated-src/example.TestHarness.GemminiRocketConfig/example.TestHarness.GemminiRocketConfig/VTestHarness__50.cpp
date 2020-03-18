// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2657(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2657\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_valid) {
	    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
		    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
			    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168)));
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
			    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
				    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024)));
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
					    = (1U & 
					       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_10;
					}
				    }
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_10;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
					= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_10;
				    }
				}
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
					= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_10;
				}
			    }
			}
		    }
		} else {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
			= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
					  ? ((0xaU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1322))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1322)))
				  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
				      ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1322))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1322))));
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_valid 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936)
			  ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4763))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4763)))
			  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
			      ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4763))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4763))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2658(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2658\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_valid) {
	    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
		    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
			    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168)));
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
			    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
				    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024)));
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
					    = (1U & 
					       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_11;
					}
				    }
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_11;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
					= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_11;
				    }
				}
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
					= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_11;
				}
			    }
			}
		    }
		} else {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
			= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
					  ? ((0xbU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1323))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1323)))
				  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
				      ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1323))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1323))));
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_valid 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936)
			  ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4764))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4764)))
			  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
			      ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4764))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4764))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2659(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2659\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_valid) {
	    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
		    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
			    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168)));
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
			    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
				    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024)));
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
					    = (1U & 
					       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_12;
					}
				    }
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_12;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
					= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_12;
				    }
				}
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
					= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_12;
				}
			    }
			}
		    }
		} else {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
			= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
					  ? ((0xcU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1324))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1324)))
				  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
				      ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1324))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1324))));
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_valid 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936)
			  ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4765))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4765)))
			  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
			      ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4765))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4765))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2660(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2660\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_valid) {
	    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
		    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
			    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168)));
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
			    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
				    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024)));
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
					    = (1U & 
					       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_13;
					}
				    }
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_13;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
					= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_13;
				    }
				}
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
					= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_13;
				}
			    }
			}
		    }
		} else {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
			= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
					  ? ((0xdU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1325))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1325)))
				  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
				      ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1325))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1325))));
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_valid 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936)
			  ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4766))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4766)))
			  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
			      ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4766))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4766))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2661(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2661\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_valid) {
	    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_completed_arb_io_out_bits))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936) {
		    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
			    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168)));
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199) {
			    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
				    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024)));
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
					    = (1U & 
					       (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_14;
					}
				    }
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_14;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462) {
				if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
					= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880)));
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_14;
				    }
				}
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
				    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
					= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_14;
				}
			    }
			}
		    }
		} else {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
			= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
					  ? ((0xeU 
					      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1326))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1326)))
				  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4462)
				      ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_3880))
					  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1326))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_1326))));
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_valid 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5936)
			  ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5584))
			      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_8168))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
				  ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4767))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4767)))
			  : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_5199)
			      ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_6024))
				  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4767))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___GEN_4767))));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2662(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2662\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1123 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1115 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1113 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1119 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1117 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1121 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1112) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_valid_no_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_valid) 
	   & (0U == (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
		      << 5U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
				 << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
					    << 3U) 
					   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
					       << 2U) 
					      | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
						  << 1U) 
						 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st))))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsUncached 
	= (((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data))) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_26 
	= (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data))
		     ? (~ (0x7fffffU & (((IData)(0xfffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
					>> 4U))) : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2663(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2663\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3632 
	= (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data))
		     ? (~ (0x7fffffU & (((IData)(0xfffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
					>> 4U))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3811 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockUncachedGrant) 
	      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_read 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_433) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_472));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_write 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_472));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2664(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2664\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_715 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_done) 
	   | (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2665(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2665\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2666(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2666\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN) 
	   | ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data)) 
		| (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	       | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param___05FT_18_data))) 
	      & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source___05FT_18_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2671(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2671\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_1 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_addr_pipe_0] 
	    << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT___GEN_0));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_1 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_addr_pipe_0] 
	    << 0x10U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT___GEN_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2672(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2672\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1835 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1833) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1836 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1833));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1883 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1881) 
		    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2673(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2673\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1884 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1881));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1781 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1779) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1782 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1779));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1952 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1950) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1953 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1950));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2022 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2020) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2023 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2020));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1733 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1731) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1731));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1933 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1931) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1934 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1931));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1835 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1836 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1833));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1883 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1884 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1881));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1781 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1782 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1779));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1952 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1950) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1953 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1950));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2022 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2020) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2023 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2020));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2674(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2674\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1733 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1731));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1933 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1931) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1934 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1931));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1835 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1836 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1833));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1883 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1884 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1881));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1781 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1782 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1779));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1952 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1950) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1953 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1950));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2022 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2023 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1733 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1734 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1731));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1933 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1931) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1934 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1931));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2675(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2675\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1051) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1051));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1127 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1125) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1128 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1125));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1005 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1003) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1006 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1003));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1108 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1106) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1109 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1106));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1051) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1051));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1127 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1125) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1128 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1125));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1005 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1003) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1006 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1003));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1108 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1106) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1109 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1106));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
		    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2676(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2676\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1127 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1125) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1128 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1125));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1005 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1003) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1006 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1003));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1108 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1106) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1109 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1106));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2677(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2677\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp298,511,0,16);
    VL_SIGW(__Vtemp299,8703,0,272);
    VL_SIGW(__Vtemp300,8703,0,272);
    VL_SIG(__Vilp,31,0);
    // Body
    VL_SHIFTR_WWI(512,512,11, __Vtemp298, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__buffer, 
		  (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent) 
			     << 3U)));
    VL_EXTEND_WW(8703,512, __Vtemp299, __Vtemp298);
    VL_SHIFTL_WWI(8703,8703,13, __Vtemp300, __Vtemp299, 
		  (0x1fffU & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__bytesSent))
			       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_spad_row_offset) 
				  << 3U) : 0U)));
    __Vilp = 0U;
    while ((__Vilp <= 0x10eU)) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_29[__Vilp] 
	    = __Vtemp300[__Vilp];
	__Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_29[0x10fU] 
	= (0x7fffffffU & __Vtemp300[0x10fU]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2678(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2678\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_939 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_937) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_940 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_937));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_891 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_889) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_892 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_889));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_994 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_992) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_992));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[0U] 
	= ((((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
	      : 0U) << 0x10U) | ((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
				  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[1U] 
	= ((((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
	      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
	      : 0U) << 0x10U) | ((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
				  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
				  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[2U] 
	= (IData)((((QData)((IData)(((((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
				        : 0U) << 0x10U) 
				     | ((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
					 : 0U)))) << 0x20U) 
		   | (QData)((IData)(((((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
					 : 0U) << 0x10U) 
				      | ((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
					  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
					  : 0U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[3U] 
	= (IData)(((((QData)((IData)(((((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
					 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
					 : 0U) << 0x10U) 
				      | ((0x400U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
					  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
					  : 0U)))) 
		     << 0x20U) | (QData)((IData)(((
						   ((0x400U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
						     : 0U) 
						   << 0x10U) 
						  | ((0x400U 
						      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24)
						      : 0U))))) 
		   >> 0x20U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2679(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2679\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1166 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
				 >> 0x16U)) | (1U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						>> 0x17U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						   >> 0x15U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						     >> 0x16U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						    >> 0x14U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						      >> 0x15U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 0x13U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 0x14U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 0x12U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 0x13U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 0x11U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 0x12U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						     >> 0x10U)) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						       >> 0x11U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
							>> 0xfU)) 
						    | (1U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							  >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2680(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2680\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1197 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
				 >> 0x16U)) | (1U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						>> 0x17U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						   >> 0x15U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						     >> 0x16U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						    >> 0x14U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						      >> 0x15U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 0x13U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 0x14U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 0x12U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 0x13U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 0x11U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 0x12U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						     >> 0x10U)) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						       >> 0x11U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
							>> 0xfU)) 
						    | (1U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							  >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2681(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2681\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1229 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
				 >> 0x16U)) | (1U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						>> 0x17U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						   >> 0x15U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						     >> 0x16U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						    >> 0x14U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						      >> 0x15U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 0x13U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 0x14U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 0x12U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 0x13U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 0x11U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 0x12U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						     >> 0x10U)) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						       >> 0x11U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
							>> 0xfU)) 
						    | (1U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							  >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2682(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2682\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1260 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
				 >> 0x16U)) | (1U & 
					       (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						>> 0x17U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						   >> 0x15U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						     >> 0x16U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						    >> 0x14U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						      >> 0x15U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 0x13U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 0x14U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 0x12U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 0x13U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 0x11U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 0x12U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						     >> 0x10U)) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						       >> 0x11U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
							>> 0xfU)) 
						    | (1U 
						       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							  >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2683(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2683\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1151 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
				 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						  >> 7U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						   >> 5U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						     >> 6U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						    >> 4U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						      >> 5U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 3U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 4U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 2U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 3U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
						       >> 1U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
							 >> 2U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U]) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
						       >> 1U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
							<< 1U)) 
						    | (1U 
						       & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2684(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2684\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1182 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
				 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						  >> 7U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						   >> 5U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						     >> 6U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						    >> 4U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						      >> 5U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 3U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 4U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 2U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 3U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
						       >> 1U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
							 >> 2U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U]) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
						       >> 1U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
							<< 1U)) 
						    | (1U 
						       & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2685(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2685\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1214 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
				 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						  >> 7U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						   >> 5U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						     >> 6U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						    >> 4U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						      >> 5U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 3U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 4U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 2U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 3U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						       >> 1U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
							 >> 2U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U]) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
						       >> 1U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
							<< 1U)) 
						    | (1U 
						       & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2686(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2686\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1245 
	= ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
		      >> ((2U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
				 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						  >> 7U)))) 
		     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					   >> ((2U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						   >> 5U)) 
					       | (1U 
						  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						     >> 6U)))) 
					  << 6U)) | 
				((0x20U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					    >> ((2U 
						 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						    >> 4U)) 
						| (1U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						      >> 5U)))) 
					   << 5U)) 
				 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 3U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 4U)))) 
					      << 4U)) 
				    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
					       >> (
						   (2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 2U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 3U)))) 
					      << 3U)) 
				       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						  >> 
						  ((2U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						       >> 1U)) 
						   | (1U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
							 >> 2U)))) 
						 << 2U)) 
					  | ((2U & 
					      (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						>> 
						((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U]) 
						 | (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
						       >> 1U)))) 
					       << 1U)) 
					     | (1U 
						& ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
						   >> 
						   ((2U 
						     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
							<< 1U)) 
						    | (1U 
						       & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2687(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2687\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp304,127,0,4);
    VL_SIGW(__Vtemp307,127,0,4);
    VL_SIGW(__Vtemp308,127,0,4);
    // Body
    __Vtemp304[0U] = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[0U] 
		      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U]);
    __Vtemp304[1U] = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[1U] 
		      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U]);
    __Vtemp304[2U] = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[2U] 
		      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U]);
    __Vtemp304[3U] = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[3U] 
		      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U]);
    __Vtemp307[0U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
		       ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U]
		       : (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U]));
    __Vtemp307[1U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
		       ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U]
		       : (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U]));
    __Vtemp307[2U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
		       ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U]
		       : (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U]));
    __Vtemp307[3U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
		       ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U]
		       : (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U]));
    VL_ADD_W(4, __Vtemp308, __Vtemp304, __Vtemp307);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[0U] 
	= __Vtemp308[0U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[1U] 
	= __Vtemp308[1U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[2U] 
	= __Vtemp308[2U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[3U] 
	= __Vtemp308[3U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_212 
	= (((0x8000U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
			>> 0x10U)) | ((0x4000U & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						  >> 9U)) 
				      | ((0x2000U & 
					  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
					   >> 2U)) 
					 | ((0x1000U 
					     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
						<< 5U)) 
					    | ((0x800U 
						& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						   >> 0x14U)) 
					       | ((0x400U 
						   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
						      >> 0xdU)) 
						  | ((0x200U 
						      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
							 >> 6U)) 
						     | ((0x100U 
							 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
							    << 1U)) 
							| ((0x80U 
							    & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
							       >> 0x18U)) 
							   | ((0x40U 
							       & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
								  >> 0x11U)) 
							      | ((0x20U 
								  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
								     >> 0xaU)) 
								 | ((0x10U 
								     & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
									>> 3U)) 
								    | ((8U 
									& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
									   >> 0x1cU)) 
								       | ((4U 
									   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
									      >> 0x15U)) 
									  | ((2U 
									      & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
										>> 0xeU)) 
									     | (1U 
										& (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
										>> 7U))))))))))))))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__signBit));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2688(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2688\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386169
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][0U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[0U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][1U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[1U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][2U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[2U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][3U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[3U];
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387379
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][0U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[0U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][1U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[1U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][2U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[2U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][3U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[3U];
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386172
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386175
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387382
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_998 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_999 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_996));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_23 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_22));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_950 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_951 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_948));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1051));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2689(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2689\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_2 
	= (0xffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
		     ? 0U : (~ (0x7fffffU & (((IData)(0xfffU) 
					      << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
					     >> 4U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_15 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_9) 
	   & (~ (0xffffU & (((IData)(0xfU) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
			    >> 3U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_9) 
		  == (1U & (~ (0xffffU & (((IData)(0xfU) 
					   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
					  >> 3U))))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
		    >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready 
	= (1U & ((0xfU & (0xfU >> (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3)))) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_1)
	    ? (((((8U & ((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
		   ? 3U : 0U) << 6U) | ((((4U & ((IData)(1U) 
						 << 
						 (3U 
						  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
					   ? 3U : 0U) 
					 << 4U) | (
						   (((2U 
						      & ((IData)(1U) 
							 << 
							 (3U 
							  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
						      ? 3U
						      : 0U) 
						    << 2U) 
						   | ((1U 
						       & ((IData)(1U) 
							  << 
							  (3U 
							   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
						       ? 3U
						       : 0U)))) 
	       & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_mask
		   [0U] << 6U) | ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_mask
				   [0U] << 4U) | ((
						   vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_mask
						   [0U] 
						   << 2U) 
						  | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_mask
						  [0U]))))
	    : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2691(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2691\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_c_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
	   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__s_probeack)) 
	      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_pprobeackfirst)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_37 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (~ (0x40000000U 
						   | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						      >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2692(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2692\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_40 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (0x40000000U 
						| (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_43 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (~ (0x40000000U 
					       | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						  >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_46 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (0x40000000U 
					    | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
					       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_37 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (~ (0x40000000U 
						   | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_40 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (0x40000000U 
						| (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_43 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (~ (0x40000000U 
					       | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
						  >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_46 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (0x40000000U 
					    | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_address___05FT_18_data 
					       >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2693(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2693\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_20 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_11 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
	    & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_param___05FT_18_data))) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_opcode___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantack));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2694(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2694\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_reload 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__no_wait 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_69) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantack));
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2695(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2695\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2838
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_59 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (~ (0x40000000U 
						   | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
						      >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_62 
	= (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
				    >> 2U))) & (0x40000000U 
						| (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
						   >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2696(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2696\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_65 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (~ (0x40000000U 
					       | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
						  >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_68 
	= (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
				 >> 2U)) & (0x40000000U 
					    | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_address___05FT_18_data 
					       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1553 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1554 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1551));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1601 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1602 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1599));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_need_d 
	    = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
			  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode) 
				>> 2U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode))) 
		     | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412554
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_3)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_1_d_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1451 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1452 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1449));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1651 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1649) 
		 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2697(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2697\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1652 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1649));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1499 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1500 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1497));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1670 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1668) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1671 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1668));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1740 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1738) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1741 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1738));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2698(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2698\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2699(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2699\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_prio_2;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2700(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2700\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2701(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2701\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2702(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2702\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2703(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2703\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2704(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2704\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2705(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2705\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2706(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2706\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2707(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2707\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2708(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2708\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2709(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2709\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2710(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2710\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2711(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2711\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2712(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2712\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2713(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2713\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2714(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2714\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2715(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2715\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2716(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2716\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2717(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2717\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2718(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2718\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2719(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2719\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_109));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2720(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2720\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_status_bits_nestC 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
	   & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_rprobeackfirst)) 
	       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_pprobeackfirst))) 
	      | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantfirst))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_tag 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_tag;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__gotT = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__gotT 
		    = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_param___05FT_18_data));
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_146 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_148 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_150 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_152 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_123 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)) 
	   & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkd_valid) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_751) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_denied___05FT_18_data;
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_prio_2;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2721(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2721\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_120 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty) 
		 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_141 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_139 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) 
		  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
		 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode) 
		       >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__excluded_client 
	= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_0)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_109) 
	       | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode)))) 
	   & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_needT 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode) 
		      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode)) 
				 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)))) 
		 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_109) 
		    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_51 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
	    ? (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)))
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
	        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
		    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
				   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)
				       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
					   ? 4U : 5U)
				       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
					   ? 6U : 7U))
				   : 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_132 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
	   & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)) 
		   | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param))) 
		  | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param))) 
		 & (0x20U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2722(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2722\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_144 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_109));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_135 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_563 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_564 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_637 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_638 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_515 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_516 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_618 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_619 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2723(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2723\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_717 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_715) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_718 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_715));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_791 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_789) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_792 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_789));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_669 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_667) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_670 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_667));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_772 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_770) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_773 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_770));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	      | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	     | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	    | (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2724(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2724\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_438 
	= (((((0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	      | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	     | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
	    | (0U == (0xfffff000U & (0x54000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
	   | (0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2725(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2725\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2726(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2726\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2727(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2727\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2728(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2728\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_54 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_57 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_60 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_63 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_729 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_727) 
		 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2729(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2729\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_730 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_727));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_803 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_801) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_804 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_801));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_681 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_679) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_682 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_679));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_784 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_782) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_785 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_782));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_729 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_727) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_730 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_727));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_803 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_801) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_804 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_801));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_681 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_679) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_682 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_679));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_784 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_782) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_785 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_782));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_732 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_730) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_733 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_730));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_806 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_804) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_807 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_804));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_684 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_682) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_685 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_682));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2730(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2730\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_787 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_785) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_788 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_785));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_723 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_724 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_797 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_798 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_675 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_676 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_778 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_779 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_723 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_724 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_797 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_798 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_675 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_676 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_778 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_779 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1045 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1046 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1119 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1117) 
		     - (IData)(1U)));
}
