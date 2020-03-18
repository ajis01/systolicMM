// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1835(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1835\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_86;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_86;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_86;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_86;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_474)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_474;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1836(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1836\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_107;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_107;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_107;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_107;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_483)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_483;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1837(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1837\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_172;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_172;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_172;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_172;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_512)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_512;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1838(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1838\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_1))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((1U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_173;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_173;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_173;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_173;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_1 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_513)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_513;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1839(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1839\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_174;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_174;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_174;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_174;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_514)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_514;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1840(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1840\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_175;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_175;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_175;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_175;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_515)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_515;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1841(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1841\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_194;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_194;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_194;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_194;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_522)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_522;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1842(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1842\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_2))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((2U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_196;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_196;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_196;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_196;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_2 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_524)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_524;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1843(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1843\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_3))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
						  >> 2U)))) {
			    if ((3U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((5U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_197;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_197;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_435 
					      >> 2U)))) {
			if ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_197;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_197;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_data_3 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_525)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_525;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1844(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1844\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:178970
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3753) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size))) {
		if ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
				      >> 0x12U)))) {
		    if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_0))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 = 0U;
		    } else {
			if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
						  >> 2U)))) {
			    if ((0U == (3U & (IData)(
						     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						      >> 0xcU))))) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 = 0U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
					if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					    if ((1U 
						 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
						vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
						    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_106;
					    }
					}
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_106;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
					      >> 2U)))) {
			if ((0U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						  >> 0xcU))))) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 = 0U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				    if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
					if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
						= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_106;
					}
				    }
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1011) {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
				if ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__ptw__DOT__count))) {
				    if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1115))) {
					vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
					    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_106;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
		    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_size) 
			>> 1U) & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_data_0 
					   >> 0xcU)) 
				  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_482)));
	    }
	} else {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_482;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1845(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1845\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_9) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_1_bits_inst_funct 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_inst_funct___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound14 
	    = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
			 ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data
			 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_offset)));
	if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset___05FT_47_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound14;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset___05FT_47_addr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:301700
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__raddr = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue_io_out_next) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT__raddr 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_8)
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_16)
		    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__tag_queue__DOT___T_18));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:202869
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1539) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1511 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1eU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1539) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1512 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1bU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1539) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1513 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x17U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1539) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1514 
	    = (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			 << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				     >> 0x11U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:404050
    if (vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1539) {
	vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1515 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
		<< 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			    >> 0x11U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1846(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1846\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1460 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1eU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1461 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1bU)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1462 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x17U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1463 
	    = (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			 << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				     >> 0x11U)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:408753
    if (vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1488) {
	vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1464 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
		<< 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			    >> 0x11U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound13 
	    = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
			  ? (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			     >> 0x10U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_tag)));
	if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_47_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound13;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_47_addr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 0U;
    } else {
	if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_2)) 
	     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb_io_in_4_valid))) {
	    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3884) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone) {
		    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 6U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3881) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone) {
			    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 7U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3880) {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone) {
				    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 7U;
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3879) {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone) {
					    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 0U;
					} else {
					    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3875) {
						if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_3) {
						    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe) {
							vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							    = 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)
							      ? 2U
							      : 
							     ((0U 
							       < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_state_state))
							       ? 
							      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							        ? 7U
							        : 3U)
							       : 
							      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							        ? 0U
							        : 5U)));
						    } else {
							if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
							    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
								= 
								((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3866)
								  ? 1U
								  : 6U);
							}
						    }
						} else {
						    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 0U;
						}
					    } else {
						if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe) {
						    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							= 
							((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)
							  ? 2U
							  : 
							 ((0U 
							   < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_state_state))
							   ? 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							    ? 7U
							    : 3U)
							   : 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							    ? 0U
							    : 5U)));
						} else {
						    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
							vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							    = 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3866)
							      ? 1U
							      : 6U);
						    }
						}
					    }
					}
				    } else {
					if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3875) {
					    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_3) {
						if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe) {
						    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							= 
							((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)
							  ? 2U
							  : 
							 ((0U 
							   < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_state_state))
							   ? 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							    ? 7U
							    : 3U)
							   : 
							  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
							    ? 0U
							    : 5U)));
						} else {
						    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
							vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							    = 
							    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3866)
							      ? 1U
							      : 6U);
						    }
						}
					    } else {
						vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state = 0U;
					    }
					} else {
					    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe) {
						vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
						    = 
						    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data)
						      ? 2U
						      : 
						     ((0U 
						       < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_probe_state_state))
						       ? 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
						        ? 7U
						        : 3U)
						       : 
						      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
						        ? 0U
						        : 5U)));
					    } else {
						if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
						    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
							= 
							((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3866)
							  ? 1U
							  : 6U);
						}
					    }
					}
				    }
				}
			    } else {
				vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
				    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3879)
				        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
					    ? 0U : 
					   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3875)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_3)
						 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_256)
						 : 0U)
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_256)))
				        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3875)
					    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__metaArb__DOT___T_3)
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_256)
					        : 0U)
					    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_256)));
			    }
			}
		    } else {
			vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
			    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3880)
			        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
				    ? 7U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3879)
					     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
						 ? 0U
						 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271))
					     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271)))
			        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3879)
				    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
				        ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271))
				    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_271)));
		    }
		}
	    } else {
		vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__release_state 
		    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3881)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
			    ? 7U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3880)
				     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
					 ? 7U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_275))
				     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_275)))
		        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3880)
			    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__releaseDone)
			        ? 7U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_275))
			    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___GEN_275)));
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1847(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1847\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1861)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1424)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1865)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1447)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1869)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1470)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1873)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1493)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1877)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1516)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1881)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1539)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1885)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1562)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1889)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1585)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1848(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1848\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1893)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1608)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_prio_0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1897)
		      ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
		      : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1631)
			  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
			  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0___05FT_52_data))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data__v0 
	    = (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U])) 
		<< 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[1U])) 
			      << 0x1fU) | ((QData)((IData)(
							   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[0U])) 
					   >> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		     >> 0x12U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			 << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
				      >> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 9U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[3U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1849(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1849\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 9U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[3U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound8 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1));
	if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_47_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound8;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_47_addr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:171278
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
	    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
		= ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
		     ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
		    ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
		   ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:267744
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__raddr = 0U;
    } else {
	if ((0U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue_io_deq_pop))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__raddr 
		= (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_98)
			  ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_102) 
			     - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_106)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:208465
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_20) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT___T_9)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__InstCompressor__DOT__buf_0_bits_inst_funct 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__raw_cmd__DOT___T_inst_funct___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1837_0 
	= (0x7ffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1534)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_1535)
			    ? (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT___T_86) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT___T_86)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_511_0)
			    : (((0x70000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT___T_92) 
								     >> 0xfU)))) 
					     << 0x10U)) 
				| (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_15_15__DOT__tile_0_0__DOT___T_92)) 
			       + vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_511_0))
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_511_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1850(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1850\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:388639
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0_io_req_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_address__v0 
	    = (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__flushInAddress);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_address__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:126568
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_92))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_108 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_4;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:123503
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_92))) {
	vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_108 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_4;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_417 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:202869
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_chosen;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT___T__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__QueueCompatibility__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs2__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_rs2
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_rs2
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_rs2
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_rs2
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_rs2
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_rs2
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_rs2
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_rs2
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_rs2
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_rs2
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_rs2
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_rs2
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_rs2
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_rs2
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_rs2
							 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_rs2)))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs2__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_rs2__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1851(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1851\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_rs2__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_rs2
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_rs2
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_rs2
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_rs2
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_rs2
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_rs2
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_rs2
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_rs2
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_rs2
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_rs2
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_rs2
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_rs2
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_rs2
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_rs2
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_rs2
							 : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_rs2)))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_rs2__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_rs2__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:123094
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
					     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_repeat)))) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___GEN_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1852(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1852\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:126159
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
					     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_repeat)))) 
					 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT___GEN_0)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
		     >> 0x15U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_source;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_source;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1853(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1853\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_159_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_158_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1377 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__xactId;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1195 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__xactId;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 8U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 8U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_param;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1854(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1854\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:105870
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
			>> 8U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data__v0[0U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[1U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data__v0[1U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[2U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[1U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data__v0[2U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[3U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[2U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data__v0[3U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[3U] 
			     >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_mask__v0 
	    = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
					>> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_mask__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1855(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1855\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_size__v0 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x17U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_size__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_source__v0 
	    = (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
			 << 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				     >> 0x11U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_source__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_param__v0 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1bU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_param__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386155
    if (((VL_ULL(0xffffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[0U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data
	       [0U][0U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[1U] 
			    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U] 
					 >> 1U)));
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[1U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data
	       [0U][1U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[2U] 
			    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[1U] 
					 >> 1U)));
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[2U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data
	       [0U][2U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[3U] 
			    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[2U] 
					 >> 1U)));
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[3U] 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	        ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_data
	       [0U][3U] : ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			    << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[3U] 
					 >> 1U)));
	if ((0x27U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data___05FT_55_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[0U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[0U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[1U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[1U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[2U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[2U];
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[3U] 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound5[3U];
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data___05FT_55_addr;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386155
    if (((VL_ULL(0xffffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound7 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
		      ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_corrupt
		     [0U] : vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[0U]));
	if ((0x27U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt___05FT_55_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT____Vlvbound7;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt___05FT_55_addr;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1856(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1856\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_valid 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
					 & (0x14U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359479
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc 
		= ((VL_ULL(0xfffffffffc) & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc) 
		   | (VL_ULL(3) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
				   + (QData)((IData)(
						     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
						      << 1U))))));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_opcode__v0 
	    = (7U & ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[6U] 
		      << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
				>> 0x1eU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_opcode__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:381101
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_14));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387929
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_118));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387365
    if (((0xffU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer_io_push_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data___05FT_18_data[0U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data___05FT_18_data[1U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data___05FT_18_data[2U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data___05FT_18_data[3U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0 
	    = (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__freeIdx));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1857(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1857\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387365
    if (((0xffU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer_io_push_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0 
	    = (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__freeIdx));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387365
    if (((0xffU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer_io_push_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__tail__v0 
	    = (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__freeIdx));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__tail__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__tail__v0 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___GEN_6));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_hit_state_state 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_meta_hit_state_state;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:202986
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_out_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter__DOT___T_1 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb__DOT__RRArbiter_io_chosen;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_is_full 
	    = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)) 
	       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_is_full));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_param;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_lg_size 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? 5U : 4U);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_960 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:33610
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_928) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_901 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:935
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1015 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1858(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1858\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:4427
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1743 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:13345
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1015 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1743 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:21308
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1015 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1743 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:935
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:4427
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1742 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:13345
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1742 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:21308
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1742 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_962 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:33610
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_928) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_903 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:935
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:13345
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:21308
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:4427
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1745 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1859(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1859\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1745 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1745 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:935
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1016 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:13345
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:21308
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1016 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:4427
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1744 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1744 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1744 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:412272
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1)
	  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_6)
	  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___GEN_14))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_address__v0 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[5U] 
		<< 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_609[4U] 
			    >> 0x11U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_address__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[0U])))
	        : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1860(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1860\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[2U])))
	        : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[0U])))
	        : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[2U])))
	        : ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1861(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1861\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[0U])))
	        : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[2U])))
	        : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[0U])))
	        : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[0U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6_RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1862(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1862\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2836
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_wmode))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_94[2U])))
	        : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel))
		    ? VL_ULL(0) : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankSel))
				    ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_data___05FT_18_data
				    : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel))
				        ? (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[3U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out[2U])))
				        : VL_ULL(0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7_RW0_addr;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 7U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 7U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_729;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1863(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1863\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_729;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1864(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1864\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_816) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkc_valid) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_729;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:266627
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_st_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_inst_funct)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_inst_funct)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_inst_funct)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_inst_funct)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_inst_funct)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_inst_funct)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_inst_funct)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_inst_funct)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_inst_funct)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_inst_funct)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_inst_funct)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_inst_funct)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_inst_funct)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_inst_funct)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4847))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_inst_funct)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_inst_funct))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__store_controller__DOT__cmd__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1865(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1865\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:265717
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob_io_issue_ld_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_15_bits_cmd_inst_funct)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_14_bits_cmd_inst_funct)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_13_bits_cmd_inst_funct)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_12_bits_cmd_inst_funct)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_11_bits_cmd_inst_funct)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_10_bits_cmd_inst_funct)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_9_bits_cmd_inst_funct)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_8_bits_cmd_inst_funct)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_7_bits_cmd_inst_funct)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_6_bits_cmd_inst_funct)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_5_bits_cmd_inst_funct)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_4_bits_cmd_inst_funct)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_3_bits_cmd_inst_funct)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_2_bits_cmd_inst_funct)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT___T_4110))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_1_bits_cmd_inst_funct)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__rob__DOT__entries_0_bits_cmd_inst_funct))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT___T_cmd_inst_funct__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__load_controller__DOT__cmd__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1866(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1866\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_size 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? 0x20U : 0x10U);
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_143_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_142_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_ma_ld 
	    = (0U != ((((VL_ULL(0) != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1927) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read))
		        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array))
		        : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_ma_st 
	    = (0U != ((((VL_ULL(0) != vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1927) 
			& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write))
		        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array))
		        : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_pf_ld 
	    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__bad_va) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read)) 
	       | (0U != (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read)
			   ? (~ (0x2000U | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__priv_rw_ok) 
					     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1784)) 
					    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array))))
			   : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits))));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_ae_ld 
	    = (0U != (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_read)
		        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array) 
			   | (~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_r)
				     ? 3U : 0U) << 0xcU) 
				  | ((0x800U & ((IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
							 >> 5U)) 
						<< 0xbU)) 
				     | ((0x400U & ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
							    >> 5U)) 
						   << 0xaU)) 
					| ((0x200U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
							>> 5U)) 
					       << 9U)) 
					   | ((0x100U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
							   >> 5U)) 
						  << 8U)) 
					      | ((0x80U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
							      >> 5U)) 
						     << 7U)) 
						 | ((0x40U 
						     & ((IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
								 >> 5U)) 
							<< 6U)) 
						    | ((0x20U 
							& ((IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
								    >> 5U)) 
							   << 5U)) 
						       | ((0x10U 
							   & ((IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
								       >> 5U)) 
							      << 4U)) 
							  | ((8U 
							      & ((IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
									  >> 5U)) 
								 << 3U)) 
							     | ((4U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
									     >> 5U)) 
								    << 2U)) 
								| ((2U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
										>> 5U)) 
								       << 1U)) 
								   | (1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
										>> 5U))))))))))))))) 
				 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array)))))
		        : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1867(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1867\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_ae_st 
	    = (0U != (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2011) 
		       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_arithmetic)
			   ? (~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_244)
				     ? 3U : 0U) << 0xcU) 
				  | ((0x800U & ((IData)(
							(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
							 >> 3U)) 
						<< 0xbU)) 
				     | ((0x400U & ((IData)(
							   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
							    >> 3U)) 
						   << 0xaU)) 
					| ((0x200U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
							>> 3U)) 
					       << 9U)) 
					   | ((0x100U 
					       & ((IData)(
							  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
							   >> 3U)) 
						  << 8U)) 
					      | ((0x80U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
							      >> 3U)) 
						     << 7U)) 
						 | ((0x40U 
						     & ((IData)(
								(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
								 >> 3U)) 
							<< 6U)) 
						    | ((0x20U 
							& ((IData)(
								   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
								    >> 3U)) 
							   << 5U)) 
						       | ((0x10U 
							   & ((IData)(
								      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
								       >> 3U)) 
							      << 4U)) 
							  | ((8U 
							      & ((IData)(
									 (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
									  >> 3U)) 
								 << 3U)) 
							     | ((4U 
								 & ((IData)(
									    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
									     >> 3U)) 
								    << 2U)) 
								| ((2U 
								    & ((IData)(
									       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
										>> 3U)) 
								       << 1U)) 
								   | (1U 
								      & (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
										>> 3U))))))))))))))) 
				 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array)))
			   : 0U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_tlb_resp_pf_st 
	    = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__bad_va) 
		& (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write_perms)) 
	       | (0U != (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write_perms)
			   ? (~ (0x2000U | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__priv_rw_ok) 
					     & ((0x1000U 
						 & ((IData)(
							    (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
							     >> 0xaU)) 
						    << 0xcU)) 
						| ((0x800U 
						    & ((IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
								>> 0xaU)) 
						       << 0xbU)) 
						   | ((0x400U 
						       & ((IData)(
								  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
								   >> 0xaU)) 
							  << 0xaU)) 
						      | ((0x200U 
							  & ((IData)(
								     (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
								      >> 0xaU)) 
							     << 9U)) 
							 | ((0x100U 
							     & ((IData)(
									(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
									 >> 0xaU)) 
								<< 8U)) 
							    | ((0x80U 
								& ((IData)(
									   (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
									    >> 0xaU)) 
								   << 7U)) 
							       | ((0x40U 
								   & ((IData)(
									      (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
									       >> 0xaU)) 
								      << 6U)) 
								  | ((0x20U 
								      & ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
										>> 0xaU)) 
									 << 5U)) 
								     | ((0x10U 
									 & ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
										>> 0xaU)) 
									    << 4U)) 
									| ((8U 
									    & ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
										>> 0xaU)) 
									       << 3U)) 
									   | ((4U 
									       & ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
										>> 0xaU)) 
										<< 2U)) 
									      | ((2U 
										& ((IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
										>> 0xaU)) 
										<< 1U)) 
										| (1U 
										& (IData)(
										(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
										>> 0xaU)))))))))))))))) 
					    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array))))
			   : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb__DOT__hits))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1868(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1868\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:331864
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_32) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT___T_630) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_partial_insn 
		= (0xffffU & (3U | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				    >> 0x10U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:401924
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directoryFanout 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_uses_directory)
	    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH)
	    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__alloc_uses_directory)
	        ? ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__setMatches))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_insertOH)
		    : 0x800U) : 0U));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:267744
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_0_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_0_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_0_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_0_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_1_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_1_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_1_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_1_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_2_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_2_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_2_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_2_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_3_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_3_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_3_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_3_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_4_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_4_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_4_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_4_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_5_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_5_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_5_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_5_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_6_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_6_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_6_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_6_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_7_cmd_inst_funct 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct)
		        : 6U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_inst_funct));
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_7_cmd_rs1 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs1);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_7_cmd_rs2 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__is_compute)
		    ? (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__pushed_preload)
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2)
				        : (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2 
						   >> 0x20U)))))
		    : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_cmd_rs2);
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT___T_64) {
	if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__waddr))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__MultiHeadedQueue__DOT__regs_7_rob_id 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__cmd_decompressor__DOT__buf_bits_rob_id;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1869(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1869\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 6U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 6U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_opcode;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1870(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1870\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359479
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___GEN_46)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:359479
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fdata 
		= (0xffffU & (IData)(((((QData)((IData)(
							((0xffff0000U 
							  & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data) 
							 | (0xffffU 
							    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data 
							       >> 0x10U))))) 
					<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data))) 
				      >> (0x30U & (
						   ((1U 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
								>> 1U))) 
						    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady)) 
						   << 4U)))));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1871(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1871\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387051
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_noop__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_noop__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_83);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:393559
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_opcode;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387929
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4)))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_90 
	    = (0x3ffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
			 >> 6U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_365 = 7U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_356) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_358)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_365 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_386) 
		   | (4U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_386) 
			    << 2U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_2 
		= vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_531;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_0 
		= vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_529;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_487))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_569_1 
		= vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_530;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1872(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1872\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_127_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_126_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 5U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 5U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[2U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_1 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_1)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_1));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_0)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_0));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_3 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_3)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_3));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_13 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_13)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_13));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_9 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_9)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_9));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1873(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1873\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_2 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_2)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_2));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_4 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_4)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_4));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_5 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_5)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_5));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_6 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_6)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_6));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_7 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_7)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_7));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_8 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_8)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_8));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_10 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_10)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_10));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_11 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_11)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_11));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_12 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_12)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_12));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_14 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_14)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_0_mask_0_14));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1874(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1874\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:317130
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_1_0 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq_reset)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
	       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_7)
	       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__fq__DOT___T_19)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__bytesRequested 
	= (0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___GEN_48));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__req_len 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_len
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT__value_1];
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__ppn 
	    = (0xfffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_resp_paddr 
			   >> 0xcU));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:36208
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_35) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_15)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_30_0 
		= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:391770
    if (((0xfffffffU != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound9 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1176_opcode));
	if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_47_addr))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound9;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_47_addr;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1882(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1882\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:191835
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_250) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state 
		= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__last_vpn_translated_valid) 
		    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__last_vpn_translated 
		       == (0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__read_issue_q__DOT___T_vaddr___05FT_18_data 
						 >> 0xcU)))))
		    ? 3U : 1U);
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_223) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_230) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 0U;
		} else {
		    if ((0U == (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_225)))) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 1U;
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_1_valid) {
			    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 3U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_11) {
				vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 2U;
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_1_valid) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 3U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT___T_11) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__core__DOT__state = 2U;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1883(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1883\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387051
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_beat__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_102)
	        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_77));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_beat__v0 = 1U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:36208
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_35) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_15)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_160_0 
		= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387929
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4)))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_83 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_82;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3940 
	= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__tlb_io_req_valid) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_nack)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 4U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 4U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_111_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_110_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1884(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1884\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:387929
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68))) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_182 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_135;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:316532
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_0 
	    = ((3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
			     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext_RW0_rdata[0U]
	        : ((2U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				 >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext_RW0_rdata[0U]
		    : ((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[0U]
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[0U])));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_1 
	    = ((3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
			     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext_RW0_rdata[1U]
	        : ((2U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				 >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext_RW0_rdata[1U]
		    : ((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[1U]
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[1U])));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_2 
	    = ((3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
			     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext_RW0_rdata[2U]
	        : ((2U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				 >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext_RW0_rdata[2U]
		    : ((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[2U]
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[2U])));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_3 
	    = ((3U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
			     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_3__DOT__data_arrays_0_0_ext_RW0_rdata[3U]
	        : ((2U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				 >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_2__DOT__data_arrays_0_0_ext_RW0_rdata[3U]
		    : ((1U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__tlb_io_resp_paddr 
				     >> 2U))) ? vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[3U]
		        : vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[3U])));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tl_error 
	    = (0U != ((0xfff8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3) 
				   << 3U) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
					     >> 0x10U))) 
		      | ((0xcU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2) 
				   << 2U) & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
					     >> 0x1cU))) 
			 | ((0xfffffeU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1) 
					   << 1U) & 
					  (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
					   >> 8U))) 
			    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0) 
			       & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
				  >> 0x14U))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1885(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1885\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 3U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				   >> 0x18U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_corrupt___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_size__v0 
	    = (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_size___05FT_18_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source__v0 
	    = (0x20U | (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_source___05FT_18_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1886(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1886\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0[0U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value_1][0U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0[1U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value_1][1U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0[2U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value_1][2U];
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0[3U] 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_data
	    [vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT__value_1][3U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_param___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:185798
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_3694) {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsCached) {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
		vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd 
		    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__grantIsUncached) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data))) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd = 0U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
			vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd 
			    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
		    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd 
			= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_424) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s2_req_cmd 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
	}
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT___T_999) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__pstore1_cmd 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_address___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1887(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1887\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_95_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_94_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_8) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 2U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 0x10U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				      >> 0x10U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram_RW_0_addr_pipe_0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:386841
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_4))))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_5__DOT___T_opcode___05FT_18_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_79_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_78_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_0_15 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_0_15)
	        : (0xfU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_13 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_13)
	        : (0x1dU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_12 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_12)
	        : (0x1cU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_11 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_11)
	        : (0x1bU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_10 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_10)
	        : (0x1aU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_9 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_9)
	        : (0x19U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_8 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_8)
	        : (0x18U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_7 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_7)
	        : (0x17U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_6 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_6)
	        : (0x16U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_0 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_0)
	        : (0x10U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_1 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_1)
	        : (0x11U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_14 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_14)
	        : (0x1eU < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_2 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_2)
	        : (0x12U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_3 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_3)
	        : (0x13U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_4 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_4)
	        : (0x14U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_mask_1_5 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__write_packets_1_mask_1_5)
	        : (0x15U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_69)));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:331864
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__s2_btb_resp_bits_bridx 
	    = ((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT___T_585) 
			   | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			       >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_15))) 
			  | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			      >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_16))) 
			 | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_17))) 
			| ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_18))) 
		       | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			   >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_19))) 
		      | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			  >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_20))) 
		     | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			 >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_21))) 
		    | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
			>> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_22))) 
		   | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		       >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_23))) 
		  | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		      >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_24))) 
		 | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		     >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_25))) 
		| ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		    >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_26))) 
	       | ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit 
		   >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__frontend__DOT__btb__DOT__brIdx_27)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask)) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask)) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.mems.v:2190
    if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1_RW0_en) 
	  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_write)) 
	 & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wmask 
	    >> 1U))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[1U] 
			 << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext_RW0_wdata[0U] 
				      >> 8U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
	    = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
			>> 4U));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:194233
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_11) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_is_acc 
	    = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
	        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_is_acc)
	        : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
		    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_is_acc)
		    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
		        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_is_acc)
		        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
			    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_is_acc)
			    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
			        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_bits_is_acc)
			        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
				    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_is_acc)
				    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
				        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_bits_is_acc)
				        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
					    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_bits_is_acc)
					    : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
					        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_is_acc)
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_is_acc)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_is_acc)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_is_acc)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_is_acc)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
						        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_is_acc)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker_io_peek_xactid))
							 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_is_acc)
							 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_is_acc))))))))))))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1892(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1892\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_63_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_62_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:11926
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_498 = 7U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_489) 
	     & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_491)))) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_498 
		= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_519) 
		   | (4U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_519) 
			    << 2U)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_47_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_46_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:935
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1018 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:4427
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1746 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:13345
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1018 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:16837
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor_1__DOT___T_1746 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:21308
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1042) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1018 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:24800
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1770) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor_1__DOT___T_1746 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state))) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1146_paddr 
	    = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1144)
	        ? (0xffffffe0U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__paddr)
	        : (0xfffffff0U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__paddr));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__bytesSent 
	= (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_195));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_31_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_30_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:296845
    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_15_0 
	= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT___T_14_0;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1893(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1893\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:401924
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_filter = 0U;
    } else {
	if ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_request))) {
	    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_filter 
		= (0xfffU & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1155) 
				| (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1155) 
					   >> 8U)))));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_959 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:33610
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_928) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_900 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_963 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:33610
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_928) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_904 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) {
	vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__ppn 
	    = (0xfffffU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlb__DOT__tlb_io_resp_paddr 
			   >> 0xcU));
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:8527
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_987) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_961 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:33610
    if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_928) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_902 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:65489
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_6) 
	     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_8))) {
	    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_1 
		= vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_6;
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1894(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1894\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0[0U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[1U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[0U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0[1U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[2U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[1U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0[2U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[3U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[2U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0[3U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[3U] 
			     >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 
	    = (1U & vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[0U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_corrupt__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0[0U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[1U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[0U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0[1U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[2U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[1U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0[2U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[3U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[2U] 
			     >> 1U));
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0[3U] 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[3U] 
			     >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
		     >> 0x17U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
		     >> 0x1aU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1895(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1895\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask__v0 
	    = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
					>> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_mask__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source__v0 
	    = (3U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
		     >> 0x11U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
		       >> 0x13U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
		     >> 0x1aU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_param__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
		     >> 0x1dU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_opcode__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask__v0 
	    = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
			   << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
					>> 1U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_mask__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1896(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1896\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
			>> 0x11U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_source__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
		       >> 0x16U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_size__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:36208
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_9 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_24) {
	    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_9 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_13)) 
		   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_26));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:65790
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 
	    = (((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_181)
			      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_194)
			      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_189_0)) 
			    & (((IData)(0xfU) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
			       >> 3U))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_181))
	        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[3U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[2U])))
	        : (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[1U])) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT___T_174[0U]))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_data__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:196299
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1481) {
	    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state 
		= (((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__last_vpn_translated_valid) 
		    & (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__last_vpn_translated 
		       == (0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__write_issue_q__DOT___T_vaddr___05FT_18_data 
						 >> 0xcU)))))
		    ? 3U : 1U);
	} else {
	    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_48) {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1452) {
		    if ((1U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___GEN_72) 
					 >> 4U)))) {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1471) {
			    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 0U;
			} else {
			    if ((0U == (0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1465)))) {
				vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 1U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) {
				    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 3U;
				} else {
				    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_63) {
					vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 2U;
				    }
				}
			    }
			}
		    } else {
			vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 4U;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1453) {
			if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__beatsLeft))) {
			    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state 
				= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_1471)
				    ? 0U : ((0U == 
					     (0xfffU 
					      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__req_vaddr)))
					     ? 1U : 3U));
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) {
				vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 3U;
			    } else {
				if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_63) {
				    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 2U;
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) {
			    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 3U;
			} else {
			    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_63) {
				vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 2U;
			    }
			}
		    }
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__tlb__DOT__tlbArb_io_in_resp_0_valid) {
		    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 3U;
		} else {
		    if (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT___T_63) {
			vlTOPp->__Vdly__TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__writer__DOT__state = 2U;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1897(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1897\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341705
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address__v0 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[5U] 
		<< 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__tlMasterXbar__DOT___T_225[4U] 
			    >> 0x11U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/sims/verilator/generated-src/example.TestHarness.GemminiRocketConfig/example.TestHarness.GemminiRocketConfig.top.v:341101
    if (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
	 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar_auto_out_a_valid))) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address__v0 
	    = ((vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[5U] 
		<< 0xfU) | (vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__v__DOT__spad__DOT__xbar__DOT___T_268[4U] 
			    >> 0x11U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_address__v0 
	    = vlTOPp->TestHarness__DOT__top__DOT__tile__DOT__buffer__DOT__Queue__DOT__value;
    }
}
