// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2396(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2396\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2399(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2399\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2400(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2400\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_138));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_120;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_139;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_dirty;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_63;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_33) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_1;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2)))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control)))) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_tag 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_tag;
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_tag 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_tag;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)
		        ? 1U : 0U);
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2) {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_123) {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state = 3U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state = 0U;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_needT)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_109)
				    ? 2U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_141)
						   ? 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__gotT)
						    ? 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_109)
						     ? 2U
						     : 3U)
						    : 1U)
						   : 
						  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_152)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_150)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_148)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_146)
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_144)
						        ? 2U
						        : 3U)
						       : 0U))))));
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_state;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state = 1U;
	    }
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_762) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_158;
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2) {
		    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients 
			= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_132;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control) {
			if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) {
			    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients 
				= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_135;
			}
		    } else {
			vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients 
			    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_160;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_clients;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_762) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit 
		    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_38;
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_result_bits_hit;
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_33) {
	    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1164) 
		 & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_bits_data_state)))) {
		vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit = 0U;
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2401(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2401\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381106
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_param__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381112
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_source__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381103
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_opcode__v0;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:423228
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) {
	    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_564)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_563));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:423228
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) {
	    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_638)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_637));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:423228
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) {
	    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_516)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_515));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:423228
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) {
	    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_619)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_618));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2402(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2402\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105884
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:117118
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_size__v0;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48529
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size__v0;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:140947
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_715 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_715 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)
			  ? (~ (0x3ffU & (((IData)(0x3fU) 
					   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_717)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:140947
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_789 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_789 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_792)
			  ? (~ (0x3ffU & (((IData)(0x3fU) 
					   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					  >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_791)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:140947
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_667 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_658) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_667 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_670)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_669));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:140947
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_770 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_658) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_770 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_773)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_772));
	}
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105878
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size__v0] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size__v0;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:54438
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_727 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_727 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_730)
			  ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_729)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:54438
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_801 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_801 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_804)
			  ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_803)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:54438
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_679 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_670) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_679 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_682)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_681)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:54438
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_782 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_670) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_782 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_785)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_784)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:130584
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_727 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_719) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_727 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_730)
			  ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_729)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:130584
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_801 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_719) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_801 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_804)
			  ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_803)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:130584
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_679 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_670) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_679 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_682)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_681)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:130584
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_782 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_670) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_782 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_785)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_784)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114788
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_730 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_730 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_733)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_732)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114788
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_804 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_804 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_807)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_806)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114788
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_682 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_673) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_682 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_685)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_684)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:114788
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_785 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_673) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_785 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_788)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_787)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137417
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_724)
			  ? ((1U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			      [0U]) ? (~ (0x3ffU & 
					  (((IData)(0x3fU) 
					    << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					   >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_723)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137417
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_798)
			  ? ((1U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
			      [0U]) ? (~ (0x3ffU & 
					  (((IData)(0x3fU) 
					    << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					   >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_797)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137417
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_676)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_675)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:137417
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_779)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_778)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118214
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_724)
			  ? (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			     [0U] ? (~ (0x3ffU & (((IData)(0x3fU) 
						   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
						  >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_723)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118214
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_798)
			  ? (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
			     [0U] ? (~ (0x3ffU & (((IData)(0x3fU) 
						   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
						  >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_797)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118214
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_676)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_675)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:118214
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_779)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_778)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93551
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1046)
			      ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U])
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (0xfU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
						 >> 9U))) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1045)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93551
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1117 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1117 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1120)
			      ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U])
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (0xfU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
						 >> 9U))) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1119)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2409(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2409\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93551
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_995 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_998)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_997)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:93551
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1098 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_986) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1098 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1101)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1100)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:99615
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1043 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1035) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1043 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1046)
			      ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U])
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (0xfU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
						 >> 9U))) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1045)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:99615
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1117 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1035) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1117 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1120)
			      ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U])
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (0xfU 
					      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_733[2U] 
						 >> 9U))) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1119)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:99615
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_995 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_995 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_998)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_997)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:99615
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1098 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_986) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1098 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1101)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
				  ? 0U : (~ (0xffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
						>> 3U))))
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1100)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:124368
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_724)
			  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_723)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:124368
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_798)
			  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_797)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2411(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2411\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:124368
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_676)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_675)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:124368
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_779)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_778)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:121303
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_721 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_724)
			  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_723)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:121303
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_795 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_798)
			  ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
			      ? (~ (0x3ffU & (((IData)(0x3fU) 
					       << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size)) 
					      >> 3U)))
			      : 0U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_797)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2412(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2412\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:121303
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_673 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_676)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_675)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:121303
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_664) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_776 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_779)
			  ? ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))
			      ? 0U : (~ (0x3ffU & (
						   ((IData)(0x3fU) 
						    << 
						    (7U 
						     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
						   >> 3U))))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_778)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:358245
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__SimpleHellaCacheIF__DOT__s1_req_tag = 0U;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_flush_valid = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2413(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2413\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_78 
	= ((0xfU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
				   (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_CDom_CAlignDist) 
					       >> 2U)))) 
		    >> 5U)) | (0xf0U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						       (0xfU 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_CDom_CAlignDist) 
							    >> 2U)))) 
					<< 3U)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_999) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_way 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_meta_hit_way;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_2 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem_io_write_acc;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_267) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1018 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_v) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_r) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_x) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1018 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_v) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_r) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_x) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb__DOT___T_794 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_v) 
	    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_r) 
	       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_x) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_w))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_16 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_2)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__fixer__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1167 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1156);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_845 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_834);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_839 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_828);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_685 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_674);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__buffer__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_691 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__TLMonitor__DOT___T_680);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1167 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1156);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2035) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2042) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2033 
		= (0x7fU & (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2060))
			      ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2078)) 
				    | ((IData)(1U) 
				       << (4U | (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2060) 
						    >> 1U))))))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2078) 
				 | ((IData)(1U) << 
				    (4U | (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2060) 
						 >> 1U)))))) 
			    >> 1U));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:323461
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2035) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2042) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2033 
		= (0x7fU & (((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2060))
			      ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2078)) 
				    | ((IData)(1U) 
				       << (4U | (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2060) 
						    >> 1U))))))
			      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2078) 
				 | ((IData)(1U) << 
				    (4U | (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2060) 
						 >> 1U)))))) 
			    >> 1U));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1127 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1116);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1127 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1116);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_841);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1233 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1222);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__TLMonitor__DOT___T_841);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_687);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2416(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2416\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_861 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_850);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_861 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_850);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_841);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_858 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_847);
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_698 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_687);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1174 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1163);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1148 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor__DOT___T_1137);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1148 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT__TLMonitor_1__DOT___T_1137);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1053 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1051) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1054 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1051));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1261 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1250);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1725 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1714);
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1776 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1765);
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1725 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1714);
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1261 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1250);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_2007 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1996);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1956 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1945);
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_35 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_4)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_21 
	= (0x100U | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__shifter) 
			      >> 1U)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430534
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_14;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1011));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430534
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_14 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1011));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1013 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1011) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1014 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1011));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_36 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_38 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_39 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxState));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_27 
	= (0x363U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_3));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_29 
	= (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__value_3)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1072 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1070) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1073 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1070));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266322
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_28) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_29 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker_io_alloc_bits_cmd_id;
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__next_empty_alloc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT___T_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_valid));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_29 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_27));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151568
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_173 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_235));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_51 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_56 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_58 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_46 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_51 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_53 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__control_state));
    vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT___GEN_0 
	= ((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
	    [vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
	    << 8U) | vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
	   [vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x15U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__next_empty_alloc 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[1U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[2U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][2U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[3U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][3U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[4U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][4U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[5U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][5U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[6U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][6U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[7U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][7U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[8U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][8U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[9U] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][9U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xaU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xaU];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xbU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xbU];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xcU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xcU];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xdU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xdU];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xeU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xeU];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_data[0xfU] 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0][0xfU];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__waddr_buf 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_1;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__w_buf_valid 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_3;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:316532
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_28));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_5 
					       << 1U)) 
		   | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_bit0AlignedSigC))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((0xfffe0000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_5 
					   >> 0x30U)))
			     ? ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC)
			     : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC) 
			   << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
						   & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_5 
						      << 1U)) 
						  | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_bit0AlignedSigC))) 
						 >> 0x20U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= (0x7ffU & (((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_5 
				     >> 0x30U))) ? 
		      ((IData)(1U) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC)
		       : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC) 
		     >> 0xfU));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_need_r 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_need_r;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_241 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_239) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_242 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_239));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_data___05FT_18_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_data
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_strb___05FT_18_data 
	= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_strb
	[vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1656
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__value 
		= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_178 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_182)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_171));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_84 
	= (((QData)((IData)(((((0x80U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
				[0U]) ? 0xffU : 0U) 
			      << 0x18U) | ((((0x40U 
					      & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
					      [0U])
					      ? 0xffU
					      : 0U) 
					    << 0x10U) 
					   | ((((0x20U 
						 & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
						 [0U])
						 ? 0xffU
						 : 0U) 
					       << 8U) 
					      | ((0x10U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
						  [0U])
						  ? 0xffU
						  : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
					    [0U]) ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & 
					       vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
					       [0U])
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
						  [0U])
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_mask
						   [0U])
						   ? 0xffU
						   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_btb_resp_entry 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_btb_resp_entry;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_csr_stall 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_1658));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_11 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_9) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_12 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___T_9));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113732
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_6;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_807 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_804));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_806 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_804) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_53 
	= (((QData)((IData)(((((0x80U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
				[0U]) ? 0xffU : 0U) 
			      << 0x18U) | ((((0x40U 
					      & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
					      [0U])
					      ? 0xffU
					      : 0U) 
					    << 0x10U) 
					   | ((((0x20U 
						 & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						 [0U])
						 ? 0xffU
						 : 0U) 
					       << 8U) 
					      | ((0x10U 
						  & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						  [0U])
						  ? 0xffU
						  : 0U)))))) 
	    << 0x20U) | (QData)((IData)(((((8U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
					    [0U]) ? 0xffU
					    : 0U) << 0x18U) 
					 | ((((4U & 
					       vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
					       [0U])
					       ? 0xffU
					       : 0U) 
					     << 0x10U) 
					    | ((((2U 
						  & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						  [0U])
						  ? 0xffU
						  : 0U) 
						<< 8U) 
					       | ((1U 
						   & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_mask
						   [0U])
						   ? 0xffU
						   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:380126
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:146998
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway_1__DOT__inFlight 
	= ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completedDevs) 
					     >> 2U)) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway_1__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:422679
    vlTOPp->TestHarness__DOT__top__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__top__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_1;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:146998
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway__DOT__inFlight 
	= ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completedDevs) 
					     >> 1U)) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:258
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT__value 
		= vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:531
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txState))) {
	if (vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txSlackWrap) {
	    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txData = 0U;
	}
    } else {
	if ((1U != (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txState))) {
	    if ((2U == (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txState))) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_5)))) {
		    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txData 
			= vlTOPp->TestHarness__DOT__UARTAdapter__DOT___T_21;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:354638
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__mem_wen) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_653) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT___T_649;
	} else {
	    if ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wen))) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid;
	    }
	}
    } else {
	if ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wen))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__pulse 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__prescaler));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtask_uart_tick__2__serial_out_ready,0,0);
    VL_SIG8(__Vtask_uart_tick__2__serial_in_valid,0,0);
    VL_SIG8(__Vtask_uart_tick__2__serial_in_bits,7,0);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_15 
	= (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__prescaler) 
		      - (IData)(1U)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430380
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__counter = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_17) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__counter 
		= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_19;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_6) {
		vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__counter 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__nstop)
			 ? 0U : 0xaU) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__nstop)
					  ? 0xbU : 0U));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:258
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT__value 
		= vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimUART.v:52
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_valid = 0U;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fout_ready = 0U;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fuartno = 0U;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_valid_reg = 0U;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_bits_reg = 0U;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fout_ready_reg = 0U;
    } else {
	vlSymsp->TOP____024unit.__Vdpiimwrap_uart_tick_TOP____024unit(
								      (1U 
								       & (~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_4))), __Vtask_uart_tick__2__serial_out_ready, 
								      vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T
								      [vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT__value_1], __Vtask_uart_tick__2__serial_in_valid, 
								      (1U 
								       & (~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_5))), __Vtask_uart_tick__2__serial_in_bits);
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fout_ready 
	    = __Vtask_uart_tick__2__serial_out_ready;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_valid 
	    = __Vtask_uart_tick__2__serial_in_valid;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_bits 
	    = __Vtask_uart_tick__2__serial_in_bits;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fout_ready_reg 
	    = vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fout_ready;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_valid_reg 
	    = vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_valid;
	vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_bits_reg 
	    = vlTOPp->TestHarness__DOT__UARTAdapter__DOT__sim__DOT_____05Fin_bits;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:146998
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway_2__DOT__inFlight 
	= ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__completedDevs) 
					     >> 3U)) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__LevelGateway_2__DOT___GEN_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vfunc_serial_tick__0__serial_out_ready,0,0);
    VL_SIG8(__Vfunc_serial_tick__0__serial_in_valid,0,0);
    VL_SIG(__Vfunc_serial_tick__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_serial_tick__0__serial_in_bits,31,0);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pendingUInt 
	= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_2) 
	    << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_1) 
		       << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__pending_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:343485
    vlTOPp->TestHarness__DOT__top__DOT__asyncXing_1__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__top__DOT__asyncXing_1__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_1;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:151772
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_ 
	= vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1040 
	= (5U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1043 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1044 
	= (7U & ((5U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
		  ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
		  : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1050 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1053 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_402 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
	    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_4
	    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_3
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_972))
		        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_1
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_973_0))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:329238
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1037) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1039;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1032) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_971 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_1049;
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/SimSerial.v:42
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_valid = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fout_ready = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_valid_reg = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_bits_reg = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fout_ready_reg = 0U;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit_reg = 0U;
    } else {
	vlSymsp->TOP____024unit.__Vdpiimwrap_serial_tick_TOP____024unit(
									(1U 
									 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_4))), __Vfunc_serial_tick__0__serial_out_ready, 
									vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T
									[vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT__value_1], __Vfunc_serial_tick__0__serial_in_valid, 
									(1U 
									 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_5))), __Vfunc_serial_tick__0__serial_in_bits, __Vfunc_serial_tick__0__Vfuncout);
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fout_ready 
	    = __Vfunc_serial_tick__0__serial_out_ready;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_valid 
	    = __Vfunc_serial_tick__0__serial_in_valid;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_bits 
	    = __Vfunc_serial_tick__0__serial_in_bits;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit 
	    = __Vfunc_serial_tick__0__Vfuncout;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fout_ready_reg 
	    = vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fout_ready;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_valid_reg 
	    = vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_valid;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_bits_reg 
	    = vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fin_bits;
	vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit_reg 
	    = (1U & vlTOPp->TestHarness__DOT__SimSerial__DOT_____05Fexit);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2425(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2425\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:432609
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_37 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		     [0U] >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
					[0U] >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_40 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		     [0U] >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
				     [0U] >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_43 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		  [0U] >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
				    [0U] >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_46 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		  [0U] >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
				 [0U] >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_30 
	= (1U & ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
		  [0U]) | (1U & ((((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
				   [0U]) >> 2U) & (~ 
						   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						    [0U] 
						    >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2426(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2426\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor_1__DOT___T_33 
	= (1U & ((3U <= vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
		  [0U]) | (1U & ((((IData)(1U) << vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_size
				   [0U]) >> 2U) & (
						   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
						   [0U] 
						   >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_249 
	= ((2U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
		  [0U] >> 8U)) | (1U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
					[0U] >> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_394 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec 
	   & (~ (QData)((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_stvec))
				  ? 0xfeU : 2U)))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_0_0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[0U]);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_319_0 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_3)
		     ? ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__dataD[0U] 
				      >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__d_buf_1_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_321_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_320_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_324_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_323_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_328_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_327_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_333_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_332_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_339_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_338_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_346_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_345_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_354_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_353_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2427(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2427\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_363_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_362_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_373_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_372_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_384_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_383_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_396_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_395_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_409_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_408_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_423_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_422_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_438_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_437_0;
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   | (1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__cycleNum)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_620 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_622)
					   ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_655)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0)
					        : 0U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_656)
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_1)
						  : 0U))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_682)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430534
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430744
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__valid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state) 
					 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__prescaler)) 
					    & ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__sample_count)) 
					       & (0U 
						  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__data_count))))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_826 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_828)
					   ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_861)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0)
					        : 0U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_862)
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_1)
						  : 0U))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_888)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2428(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2428\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_723 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_725)
					   ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_758)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0)
					        : 0U) 
					      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_759)
						  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_1)
						  : 0U))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_785)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T___05F15_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_acc_write_en)
	    ? ((0xfff80000U & (VL_NEGATE_I((IData)(
						   (1U 
						    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_out_bits_15_0 
						       >> 0x12U)))) 
			       << 0x13U)) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_out_bits_15_0)
	    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_29[0xfU]);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_0_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_0_0;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_198_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T)
	    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_2)
		     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh_io_b_bits_1_0)
		     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__b_buf_1_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_200_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_199_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_203_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_202_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_207_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_206_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_212_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_211_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_218_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_217_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_225_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_224_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_233_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_232_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_242_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_241_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_252_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_251_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_263_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_262_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_275_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_274_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2429(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2429\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_288_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_287_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_302_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_301_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:309189
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_317_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_316_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_replay 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__take_pc_mem_wb)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__replay_ex));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_cause 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_cause;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1501
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__value 
		= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:2512
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_3)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_io_deq_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT___GEN_0 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram
			    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0])) 
	    << 0x16U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram
					[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_7 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT___T_9 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:194687
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT___T) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT___T_6 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_cmd_id)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_cmd_id)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_cmd_id)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_cmd_id)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_bits_cmd_id)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_cmd_id)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_bits_cmd_id)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_bits_cmd_id)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_cmd_id)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_cmd_id)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_cmd_id)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_cmd_id)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_cmd_id)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_cmd_id)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_cmd_id)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_cmd_id))))))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2430(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2430\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:1501
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__value 
		= vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.harness.v:2512
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_3)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1_io_deq_ready)) 
		       & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__Queue_1__DOT___T_6));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:329238
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__r_respPipe_valid 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_323)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:329238
    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_323))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__r_respPipe_bits_taken 
	    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_970)));
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_137 
	= (0xfffffffU & ((0x1cU > (8U | (0x10U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
						  << 4U)))) 
			 & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123 
			     << 1U) >> (2U | (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_123)))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:431429
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxwm = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_563) 
	     & (0x1ffU == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_70 
					     >> 0x30U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxwm 
		= (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				     >> 0x30U)));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2431(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2431\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:431429
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txwm = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_563) 
	     & (0x1ffU == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_70 
					     >> 0x10U)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txwm 
		= (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data 
				     >> 0x10U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:431429
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txen = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_563) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_70))) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txen 
		= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:430534
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:431429
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__div = 0x364U;
    } else {
	if ((1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_555) 
		     & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
					       >> 3U))) 
			>> 3U)) & (0U == (0x1fcU & 
					  (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
					   >> 3U)))) 
		   & (0xffffU == (0xffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_70)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__div 
		= (0xffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT___GEN_15));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2432(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2432\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__Queue__DOT__value_1)));
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:113737
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size__v0) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size[0U] 
	    = vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT___T_size__v0;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_92) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_need_bs 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_need_pb;
    }
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:48823
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208236
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__cmdRouter__DOT__cmd__DOT___T_14;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2433(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2433\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT___GEN_15));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:169732
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_948 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_939) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_948 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_951)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_950));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:316532
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_11)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr;
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_denied
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341403
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T_12;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2434(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2434\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[0U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[1U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[2U];
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_dat[3U];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:123094
    if (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT___T_5) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:123094
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_1)) 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
					     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_repeat)))) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:102564
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_506 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_508)
					   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_634) 
					      | (7U 
						 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_567)
						     ? 
						    (~ 
						     (0x3ffffU 
						      & (((IData)(0x3fU) 
							  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_in_d_bits_size)) 
							 >> 3U)))
						     : 0U)))
					   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_638)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266322
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__stride 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->reset)
				    ? VL_ULL(0x10) : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___GEN_16));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266322
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__row_counter = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_30) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__row_counter 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_39)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_47)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT___T_49));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197535
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_14;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_388 
	= (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
	   & (~ ((1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec)
		  ? 0xfeU : 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2435(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2435\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4118 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3831) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4118 
		= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4121)
			     ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
				 ? (~ (0x7fffffU & 
				       (((IData)(0xfffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
					>> 4U))) : 0U)
			     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_4120)));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3841 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__c_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3839));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires 
	    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_bypass 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass;
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_fence_i 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1066) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_fence_i));
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2436(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2436\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_4193 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
	   & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
		  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_wfd 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_wfd;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_div 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_div;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:267205
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_23) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_24 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd_tracker_io_alloc_bits_cmd_id;
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1382 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_29 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_37 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_39 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT___T_1385 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__flush_counter)) 
	   & (0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__buffering_done 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_counter)) 
	    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__fire_started)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_written));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:267205
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__stride 
	= (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->reset)
				    ? VL_ULL(0x10) : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___GEN_16));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2437(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2437\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:267205
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__row_counter = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_25) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__row_counter 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_34)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_42)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT___T_44));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391127
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_685 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankSel) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_303));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342282
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3815 
	= (0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3682 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_347 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:385017
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_beat 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:59725
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_4 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_47) {
	    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_2))) {
		vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_4 
		    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT___T_22) 
			     >> 5U));
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:59725
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
	    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92 
		= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_97;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2438(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2438\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1066) 
		   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_reg_flush_pipe));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_csr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_csr;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_690 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__probe_bits_source 
		= (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_source___05FT_18_data));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_997)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__mem_ctrl_jal 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ex_ctrl_jal;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_release_data_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_in_2_valid));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348236
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348236
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348236
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
    }
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_21 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT___T_14)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_46 
	= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
		 >> 0x1fU));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_158 
	= ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
			     << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
				       >> 0x18U))))
	    ? (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
				 << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   >> 0x1cU)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
					   << 4U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   >> 0x1cU))))
			   ? ((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x40000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0x1dU))))
			   : ((0x8000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x4000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0x19U))))))
	    : (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
				 << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					     >> 0x14U)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					     >> 0x14U))))
			   ? ((0x800000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x400000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0x15U))))
			   : ((0x80000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x40000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0x11U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2439(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2439\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_193 
	= ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
			     << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					  >> 8U))))
	    ? (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
				 << 0x14U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					      >> 0xcU)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
					   << 0x14U) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					     >> 0xcU))))
			   ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x4000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 0xdU))))
			   : ((0x800U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x400U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 9U))))))
	    : (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
				 << 0x1cU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					      >> 4U)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
					   << 0x1cU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					     >> 4U))))
			   ? ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 5U))))
			   : ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
			       ? 3U : ((4U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
						   >> 1U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2440(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2440\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_233 
	= ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
			     << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
				       >> 0x18U))))
	    ? (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
				 << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					   >> 0x1cU)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   << 4U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					   >> 0x1cU))))
			   ? ((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x40000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0x1dU))))
			   : ((0x8000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x4000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0x19U))))))
	    : (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
				 << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					     >> 0x14U)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					     >> 0x14U))))
			   ? ((0x800000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x400000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0x15U))))
			   : ((0x80000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x40000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0x11U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2441(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2441\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_268 
	= ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
			     << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					  >> 8U))))
	    ? (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
				 << 0x14U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					      >> 0xcU)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   << 0x14U) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					     >> 0xcU))))
			   ? ((0x8000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x4000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 0xdU))))
			   : ((0x800U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x400U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 9U))))))
	    : (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
				 << 0x1cU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					      >> 4U)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
					   << 0x1cU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
					     >> 4U))))
			   ? ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 5U))))
			   : ((8U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
			       ? 3U : ((4U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
						   >> 1U)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2442(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2442\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:421333
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__select = 0U;
    } else {
	if ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool_io_alloc_ready) 
		   | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__valid)) 
		      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_4)))))) {
	    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__select 
		= (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17) 
				    >> 4U))) << 2U) 
		   | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_21) 
				     >> 2U))) << 1U) 
		      | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_21) 
				>> 3U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_21) 
					  >> 1U)))));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196930
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_dispatch_q__DOT___T_14;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_338 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_320 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:331864
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s1_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core_io_imem_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s0_fq_has_space));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_329 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_valid 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleOut;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2443(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2443\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U];
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:348969
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT___GEN_0 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
	    << 8U) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram
	   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT___GEN_0 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
	    << 8U) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram
	   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT___GEN_0 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
	    << 8U) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram
	   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT___GEN_0 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
	    << 8U) | vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram
	   [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap_1 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:314103
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__in_shift 
	= (0x1fU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___GEN_131);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:201101
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT___T_78 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_acc_read_req_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__accReadValid 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__AccumulatorMem__DOT__Pipeline__DOT___T_0_fromDMA)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198111
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT___T_38 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_3_req_valid)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197698
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_3)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_6) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__q__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_3 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_3__DOT__Pipeline__DOT___T_0_fromDMA)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2444(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2444\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_302 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_481 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_489 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_491 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_492 
	= (0xfU & ((0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter))
		    ? (((IData)(1U) - ((IData)(0xfU) 
				       - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter))) 
		       - (IData)(1U)) : ((IData)(1U) 
					 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__d_fire_counter))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198111
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT___T_38 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_2_req_valid)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197698
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_3)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_6) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__q__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_2 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_2__DOT__Pipeline__DOT___T_0_fromDMA)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198111
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT___T_38 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_1_req_valid)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197698
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_3)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_6) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__q__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_1 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank_1__DOT__Pipeline__DOT___T_0_fromDMA)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_311 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2445(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2445\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:198111
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT___T_38 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller_io_read_0_req_valid)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:197698
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_11) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_3)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_6) 
		       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_6))
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__q__DOT___T_6));
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__readValid_0 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_2_0) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__ScratchpadBank__DOT__Pipeline__DOT___T_0_fromDMA)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2446(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2446\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_sum 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_sum;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2447(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2447\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2448(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2448\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_debug 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_debug;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2449(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2449\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_dprv 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_dprv;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2450(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2450\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2451(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2451\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:224221
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_31) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_67))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_status_mxr 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_status_mxr;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_90 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_91 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_87 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_85)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_98 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_time 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_93)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_99 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_95 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_93)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_460 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_468 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_470 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_471 
	= (0xfU & ((0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter))
		    ? (((IData)(1U) - ((IData)(0xfU) 
				       - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter))) 
		       - (IData)(1U)) : ((IData)(1U) 
					 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__b_fire_counter))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381816
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___GEN_14) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__value 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__wrap)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_12));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_singleStep) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___GEN_36));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:53480
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_701 
	= (7U & ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_703)
						 ? 
						((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_716)
						  ? 
						 ((4U 
						   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_opcode___05FT_18_data))
						   ? 0U
						   : 
						  (~ 
						   (0x3ffU 
						    & (((IData)(0x3fU) 
							<< (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_size___05FT_18_data)) 
						       >> 3U))))
						  : 0U)
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_742))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2452(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2452\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp181,127,0,4);
    VL_SIGW(__Vtemp182,127,0,4);
    VL_SIGW(__Vtemp183,127,0,4);
    VL_SIGW(__Vtemp184,127,0,4);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp181, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
		    = (1U & (__Vtemp181[0U] >> 0x12U));
	    } else {
		if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    VL_EXTEND_WQ(102,64, __Vtemp182, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
			= (1U & (__Vtemp182[0U] >> 0x12U));
		}
	    }
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:362893
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
	    if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WQ(102,64, __Vtemp183, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
		    = (1U & (__Vtemp183[0U] >> 0x13U));
	    } else {
		if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    VL_EXTEND_WQ(102,64, __Vtemp184, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
			= (1U & (__Vtemp184[0U] >> 0x13U));
		}
	    }
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_284 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_sink
	[vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value_1];
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:342700
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_6) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT__value 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_6__DOT___T_12;
	}
    }
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr_io_status_sd 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
	   | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_xs)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2453(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2453\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_corrupt
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_param
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_mask
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_address
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data 
	= vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_source
	[vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_555 
	= (0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_563 
	= (0xfU & (((IData)(1U) - ((IData)(0xfU) - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_565 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT___T_566 
	= (0xfU & ((0xfU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))
		    ? (((IData)(1U) - ((IData)(0xfU) 
				       - (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))) 
		       - (IData)(1U)) : ((IData)(1U) 
					 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__a_fire_counter))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:369410
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT___T_1095 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div_io_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_647 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_650 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
				>> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_653 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
			       >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2454(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2454\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp186,95,0,3);
    VL_SIGW(__Vtemp187,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_656 
	= (1U & ((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
		  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_640 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_size))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_643 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_size))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_address 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT___T_293 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1072 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1070) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1073 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1070));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_29 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_27) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_30 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT___T_27));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_45 
	= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
		 >> 0x1fU));
    __Vtemp186[0U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp186[1U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp186[2U] = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp187, __Vtemp186, vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[0U] 
	= __Vtemp187[0U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[1U] 
	= __Vtemp187[1U];
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U] 
	= (1U & __Vtemp187[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2455(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2455\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_51[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_51[1U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_51[2U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
	    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
			 >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_51[3U] 
	= ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
	    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[3U] 
			 >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_51[4U] 
	= (1U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[4U] 
		 >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT___T_315 
	= ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
			     << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
				       >> 0x18U))))
	    ? (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
				 << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
					   >> 0x1cU)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
					   << 4U) | 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
					   >> 0x1cU))))
			   ? ((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
			       ? 3U : ((0x40000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						   >> 0x1dU))))
			   : ((0x8000000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
			       ? 3U : ((0x4000000U 
					& vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						   >> 0x19U))))))
	    : (((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
				 << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
					     >> 0x14U)))) 
		<< 2U) | ((0U != (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
					     >> 0x14U))))
			   ? ((0x800000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
			       ? 3U : ((0x400000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						   >> 0x15U))))
			   : ((0x80000U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
			       ? 3U : ((0x40000U & 
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])
				        ? 2U : (1U 
						& (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
						   >> 0x11U)))))));
}
